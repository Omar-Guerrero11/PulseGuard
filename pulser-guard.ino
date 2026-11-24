#include <Arduino.h>
#include <BLEDevice.h>
#include <BLEServer.h>
#include <BLEUtils.h>
#include <BLE2902.h>
#include <Preferences.h>
#include <WiFi.h>
#include <WiFiClientSecure.h>
#include <PubSubClient.h>
#include "pulseguard_secrets.h"

#define BUTTON_PIN 18
#define BUZZER_PIN 19
#define PULSE_PIN 34

#define PULSE_MIN_INTERVAL_MS 280
#define PULSE_SEND_INTERVAL_MS 1000
#define FALL_CONFIRM_MS 10000

#define BLE_NAME_PREFIX "PulseGuard"

#define MQTT_PULSE_TOPIC "pulsera/prueba/pulsos"
#define MQTT_ALERT_TOPIC "pulsera/prueba"

#define SERVICE_UUID        "6f8f1c70-3a90-4f5b-8a72-001000000001"
#define SSID_CHAR_UUID      "6f8f1c70-3a90-4f5b-8a72-001000000011"
#define WIFI_PASS_CHAR_UUID "6f8f1c70-3a90-4f5b-8a72-001000000012"
#define COMMAND_CHAR_UUID   "6f8f1c70-3a90-4f5b-8a72-001000000017"
#define STATUS_CHAR_UUID    "6f8f1c70-3a90-4f5b-8a72-001000000018"

const char MQTT_ROOT_CA[] = R"EOF(
-----BEGIN CERTIFICATE-----
MIIDjjCCAnagAwIBAgIQAzrx5qcRqaC7KGSxHQn65TANBgkqhkiG9w0BAQsFADBh
MQswCQYDVQQGEwJVUzEVMBMGA1UEChMMRGlnaUNlcnQgSW5jMRkwFwYDVQQLExB3
d3cuZGlnaWNlcnQuY29tMSAwHgYDVQQDExdEaWdpQ2VydCBHbG9iYWwgUm9vdCBH
MjAeFw0xMzA4MDExMjAwMDBaFw0zODAxMTUxMjAwMDBaMGExCzAJBgNVBAYTAlVT
MRUwEwYDVQQKEwxEaWdpQ2VydCBJbmMxGTAXBgNVBAsTEHd3dy5kaWdpY2VydC5j
b20xIDAeBgNVBAMTF0RpZ2lDZXJ0IEdsb2JhbCBSb290IEcyMIIBIjANBgkqhkiG
9w0BAQEFAAOCAQ8AMIIBCgKCAQEAuzfNNNx7a8myaJCtSnX/RrohCgiN9RlUyfuI
2/Ou8jqJkTx65qsGGmvPrC3oXgkkRLpimn7Wo6h+4FR1IAWsULecYxpsMNzaHxmx
1x7e/dfgy5SDN67sH0NO3Xss0r0upS/kqbitOtSZpLYl6ZtrAGCSYP9PIUkY92eQ
q2EGnI/yuum06ZIya7XzV+hdG82MHauVBJVJ8zUtluNJbd134/tJS7SsVQepj5Wz
tCO7TG1F8PapspUwtP1MVYwnSlcUfIKdzXOS0xZKBgyMUNGPHgm+F6HmIcr9g+UQ
vIOlCsRnKPZzFBQ9RnbDhxSJITRNrw9FDKZJobq7nMWxM4MphQIDAQABo0IwQDAP
BgNVHRMBAf8EBTADAQH/MA4GA1UdDwEB/wQEAwIBhjAdBgNVHQ4EFgQUTiJUIBiV
5uNu5g/6+rkS7QYXjzkwDQYJKoZIhvcNAQELBQADggEBAGBnKJRvDkhj6zHd6mcY
1Yl9PMWLSn/pvtsrF9+wX3N3KjITOYFnQoQj8kVnNeyIv/iPsGEMNKSuIEyExtv4
NeF22d+mQrvHRAiGfzZ0JFrabA0UWTW98kndth/Jsw1HKj2ZL7tcu7XUIOGZX1NG
Fdtom/DzMNU+MeKNhJ7jitralj41E6Vf8PlwUHBHQRFXGU7Aj64GxJUTFy8bJZ91
8rGOmaFvE7FBcf6IKshPECBV1/MUReXgRPTqh5Uykw7+U0b6LJ3/iyK5S9kJRaTe
pLiaWN0bfVKfjllDiIGknibVb63dDcY3fe0Dkhvld1927jyNxF1WW6LZZm6zNTfl
MrY=
-----END CERTIFICATE-----
)EOF";

Preferences preferences;
WiFiClientSecure mqttTlsClient;
PubSubClient mqtt(mqttTlsClient);

BLEServer* bleServer = nullptr;
BLECharacteristic* statusCharacteristic = nullptr;

String wifiSsid;
String wifiPassword;
String statusTopic = "pulsera/prueba/estado";
String commandTopic = "pulsera/prueba/comando";

unsigned long lastWifiAttempt = 0;
unsigned long lastMqttAttempt = 0;
unsigned long lastPulsePublish = 0;
unsigned long lastStatusPublish = 0;
unsigned long alertStartedAt = 0;

bool alertCountdown = false;
bool alertSent = false;
bool buttonPressedBefore = false;

volatile bool mqttMessageReceived = false;
String mqttCommand;

// Lectura aproximada del sensor de pulso.
int pulseRaw = 0;
int pulseThreshold = 1800;
int pulseMinimum = 4095;
int pulseMaximum = 0;
bool pulseAboveThreshold = false;
unsigned long lastBeatAt = 0;
unsigned long beatInterval = 0;
unsigned long pulseCalibrationAt = 0;
int recentIntervals[8];
int recentIntervalCount = 0;
unsigned long windowBeatSumMs = 0;
int windowBeatCount = 0;

void buzzerInit() {
#if ESP_ARDUINO_VERSION_MAJOR >= 3
  ledcAttach(BUZZER_PIN, 2000, 8);
#else
  ledcSetup(0, 2000, 8);
  ledcAttachPin(BUZZER_PIN, 0);
#endif
}

void buzzerTone(int frequency) {
#if ESP_ARDUINO_VERSION_MAJOR >= 3
  ledcWriteTone(BUZZER_PIN, frequency);
#else
  ledcWriteTone(0, frequency);
#endif
}

void setAlarm(bool on) {
  if (on) {
    buzzerTone(2500);
  } else {
    buzzerTone(0);
  }
}

void publishStatus(const String& state) {
  if (!mqtt.connected()) return;

  String payload = "{\"estado\":\"" + state +
                   "\",\"wifi\":" + (WiFi.status() == WL_CONNECTED ? "true" : "false") +
                   "\",\"mqtt\":" + (mqtt.connected() ? "true" : "false") + "}";
  mqtt.publish(statusTopic.c_str(), payload.c_str(), true);

  if (statusCharacteristic != nullptr) {
    statusCharacteristic->setValue(state.c_str());
    statusCharacteristic->notify();
  }
}

void saveSettings() {
  preferences.begin("pulsera", false);
  preferences.putString("ssid", wifiSsid);
  preferences.putString("wifi_pass", wifiPassword);
  preferences.end();
}

void loadSettings() {
  preferences.begin("pulsera", true);
  wifiSsid = preferences.getString("ssid", "");
  wifiPassword = preferences.getString("wifi_pass", "");
  preferences.end();
}

void startCountdown() {
  if (alertCountdown) return;

  alertCountdown = true;
  alertSent = false;
  alertStartedAt = millis();
  setAlarm(true);
  publishStatus("ESPERANDO_CONFIRMACION");
  Serial.println("Posible alerta: presiona el boton para cancelar.");
}

void cancelCountdown() {
  if (!alertCountdown) return;

  setAlarm(false);
  alertCountdown = false;
  alertSent = false;

  if (mqtt.connected()) {
    mqtt.publish(MQTT_ALERT_TOPIC, "CANCELADA", false);
  }

  publishStatus("NORMAL");
  Serial.println("Alerta cancelada.");
}

void sendFallAlert() {
  if (alertSent) return;

  alertSent = true;
  setAlarm(true);

  if (mqtt.connected()) {
    mqtt.publish(MQTT_ALERT_TOPIC, "CAIDA", false);
  }

  publishStatus("ALERTA_ENVIADA");
  Serial.println("Alerta de caida publicada.");
}

void mqttCallback(char* topic, byte* payload, unsigned int length) {
  if (String(topic) != commandTopic) return;

  mqttCommand = "";
  for (unsigned int i = 0; i < length; i++) {
    mqttCommand += (char)payload[i];
  }
  mqttCommand.trim();
  mqttMessageReceived = true;
}

void processMqttCommand() {
  if (!mqttMessageReceived) return;
  mqttMessageReceived = false;

  mqttCommand.toUpperCase();

  if (mqttCommand.indexOf("CAIDA") >= 0) {
    startCountdown();
  } else if (mqttCommand.indexOf("CANCELAR") >= 0) {
    cancelCountdown();
  } else if (mqttCommand.indexOf("TEST") >= 0) {
    setAlarm(true);
    delay(500);
    setAlarm(false);
  }
}

void connectWifi() {
  if (wifiSsid.length() == 0) {
    publishStatus("SIN_WIFI");
    return;
  }

  if (WiFi.status() == WL_CONNECTED) return;

  if (millis() - lastWifiAttempt < 10000) return;
  lastWifiAttempt = millis();

  publishStatus("CONECTANDO_WIFI");
  Serial.println("Conectando a Wi-Fi...");
  WiFi.begin(wifiSsid.c_str(), wifiPassword.c_str());
}

void connectMqtt() {
  if (WiFi.status() != WL_CONNECTED) return;
  if (mqtt.connected()) return;
  if (millis() - lastMqttAttempt < 5000) return;
  lastMqttAttempt = millis();

  mqttTlsClient.setCACert(MQTT_ROOT_CA);
  mqtt.setServer(MQTT_HOST, MQTT_PORT);
  mqtt.setCallback(mqttCallback);

  Serial.println("Conectando a MQTT...");

  bool connected = mqtt.connect(MQTT_CLIENT_ID, MQTT_USER, MQTT_PASSWORD);

  if (connected) {
    mqtt.subscribe(commandTopic.c_str(), 1);
    publishStatus("CONECTADO");
    Serial.println("MQTT conectado.");
  } else {
    publishStatus("SIN_MQTT");
    Serial.printf("MQTT fallo, codigo: %d\n", mqtt.state());
  }
}

int calculateBpm() {
  if (recentIntervalCount == 0) return 0;

  long sum = 0;
  int valid = 0;

  for (int i = 0; i < recentIntervalCount; i++) {
    unsigned long interval = recentIntervals[i];
    if (interval >= 280 && interval <= 2000) {
      sum += interval;
      valid++;
    }
  }

  if (valid == 0) return 0;

  unsigned long average = sum / valid;
  int bpm = 60000 / average;

  if (bpm < 40 || bpm > 220) return 0;
  return bpm;
}

void addBeatInterval(unsigned long interval) {
  if (interval < PULSE_MIN_INTERVAL_MS || interval > 2000) return;

  windowBeatSumMs += interval;
  windowBeatCount++;

  if (recentIntervalCount < 8) {
    recentIntervals[recentIntervalCount++] = interval;
  } else {
    for (int i = 0; i < 7; i++) {
      recentIntervals[i] = recentIntervals[i + 1];
    }
    recentIntervals[7] = interval;
  }
}

int calculateWindowBpm() {
  if (windowBeatCount == 0) return 0;

  unsigned long averageMs = windowBeatSumMs / windowBeatCount;
  if (averageMs == 0) return 0;

  int bpm = 60000 / averageMs;

  if (bpm < 40 || bpm > 220) return 0;
  return bpm;
}

void resetPulseWindow() {
  windowBeatSumMs = 0;
  windowBeatCount = 0;
}

void readPulseSensor() {
  pulseRaw = analogRead(PULSE_PIN);

  unsigned long now = millis();

  if (now - pulseCalibrationAt > 3000) {
    pulseCalibrationAt = now;
    pulseMinimum = 4095;
    pulseMaximum = 0;
  }

  if (pulseRaw < pulseMinimum) pulseMinimum = pulseRaw;
  if (pulseRaw > pulseMaximum) pulseMaximum = pulseRaw;

  pulseThreshold = pulseMinimum + ((pulseMaximum - pulseMinimum) * 70 / 100);

  if (pulseRaw > pulseThreshold && !pulseAboveThreshold) {
    pulseAboveThreshold = true;

    if (lastBeatAt > 0) {
      beatInterval = now - lastBeatAt;
      addBeatInterval(beatInterval);
    }

    lastBeatAt = now;
  }

  if (pulseRaw < pulseThreshold - 20) {
    pulseAboveThreshold = false;
  }
}

void publishPulse() {
  if (millis() - lastPulsePublish < PULSE_SEND_INTERVAL_MS) return;
  lastPulsePublish = millis();

  int bpm = calculateWindowBpm();
  resetPulseWindow();

  if (!mqtt.connected()) return;

  if (bpm == 0) {
    mqtt.publish(MQTT_PULSE_TOPIC, "0", false);
    Serial.println("Pulso no detectado en la ultima ventana de 1 segundo.");
    return;
  }

  String payload = String(bpm);
  mqtt.publish(MQTT_PULSE_TOPIC, payload.c_str(), false);

  Serial.printf("Promedio de pulso: %d BPM\n", bpm);
}

void processSerial() {
  if (!Serial.available()) return;

  String command = Serial.readStringUntil('\n');
  command.trim();
  command.toUpperCase();

  if (command == "CAIDA") startCountdown();
  if (command == "CANCELAR") cancelCountdown();
  if (command == "RESET_CONFIG") {
    preferences.begin("pulsera", false);
    preferences.clear();
    preferences.end();
    ESP.restart();
  }
}

void processButton() {
  bool buttonPressed = digitalRead(BUTTON_PIN) == LOW;

  if (buttonPressed && !buttonPressedBefore) {
    if (alertCountdown) {
      cancelCountdown();
    } else {
      startCountdown();
    }
  }

  buttonPressedBefore = buttonPressed;
}

class ProvisioningCallback : public BLECharacteristicCallbacks {
private:
  BLECharacteristic* _status;

public:
  explicit ProvisioningCallback(BLECharacteristic* status) : _status(status) {}

  void onWrite(BLECharacteristic* characteristic) override {
    String uuid = characteristic->getUUID().toString().c_str();
    String text = characteristic->getValue();
    text.trim();

    if (uuid == SSID_CHAR_UUID) {
      wifiSsid = text;
      saveSettings();
      _status->setValue("SSID_RECIBIDO");
    } else if (uuid == WIFI_PASS_CHAR_UUID) {
      wifiPassword = text;
      saveSettings();
      _status->setValue("CLAVE_WIFI_RECIBIDA");
    } else if (uuid == COMMAND_CHAR_UUID) {
      text.toUpperCase();
      if (text == "CONECTAR") {
        _status->setValue("CONECTANDO");
        WiFi.disconnect();
        lastWifiAttempt = 0;
        lastMqttAttempt = 0;
      } else if (text == "CAIDA") {
        startCountdown();
      } else if (text == "CANCELAR") {
        cancelCountdown();
      } else if (text == "RESET_CONFIG") {
        preferences.begin("pulsera", false);
        preferences.clear();
        preferences.end();
        ESP.restart();
      }
    }

    _status->notify();
  }
};

void startBleProvisioning() {
  BLEDevice::init(BLE_NAME_PREFIX);
  bleServer = BLEDevice::createServer();

  BLEService* service = bleServer->createService(SERVICE_UUID);

  BLECharacteristic* ssidCharacteristic = service->createCharacteristic(
    SSID_CHAR_UUID,
    BLECharacteristic::PROPERTY_WRITE);

  BLECharacteristic* wifiPassCharacteristic = service->createCharacteristic(
    WIFI_PASS_CHAR_UUID,
    BLECharacteristic::PROPERTY_WRITE);

  BLECharacteristic* commandCharacteristic = service->createCharacteristic(
    COMMAND_CHAR_UUID,
    BLECharacteristic::PROPERTY_WRITE);

  statusCharacteristic = service->createCharacteristic(
    STATUS_CHAR_UUID,
    BLECharacteristic::PROPERTY_READ | BLECharacteristic::PROPERTY_NOTIFY);
  statusCharacteristic->addDescriptor(new BLE2902());
  statusCharacteristic->setValue("CONFIGURACION_LISTA");

  ProvisioningCallback* callback = new ProvisioningCallback(statusCharacteristic);
  ssidCharacteristic->setCallbacks(callback);
  wifiPassCharacteristic->setCallbacks(callback);
  commandCharacteristic->setCallbacks(callback);

  service->start();

  BLEAdvertising* advertising = BLEDevice::getAdvertising();
  advertising->addServiceUUID(SERVICE_UUID);
  advertising->setScanResponse(true);
  advertising->setMinPreferred(0x06);
  advertising->setMinPreferred(0x12);
  BLEDevice::startAdvertising();

  Serial.println("Bluetooth de configuracion activo.");
}

void setup() {
  Serial.begin(115200);

  pinMode(BUTTON_PIN, INPUT_PULLUP);

  buzzerInit();
  setAlarm(false);

  loadSettings();
  startBleProvisioning();

  WiFi.mode(WIFI_STA);

  if (wifiSsid.length() > 0) {
    WiFi.begin(wifiSsid.c_str(), wifiPassword.c_str());
  }

  for (int i = 0; i < 8; i++) {
    recentIntervals[i] = 0;
  }

  pulseCalibrationAt = millis();

  Serial.println("=== PulseGuard ESP32 ===");
  Serial.printf("ID MQTT: %s\n", MQTT_CLIENT_ID);
  Serial.println("Comandos seriales: CAIDA, CANCELAR, RESET_CONFIG");
}

void loop() {
  processSerial();
  processButton();
  readPulseSensor();
  processMqttCommand();

  connectWifi();

  if (WiFi.status() == WL_CONNECTED) {
    connectMqtt();

    if (mqtt.connected()) {
      mqtt.loop();
      publishPulse();

      if (millis() - lastStatusPublish > 30000) {
        lastStatusPublish = millis();
        publishStatus("NORMAL");
      }
    }
  }

  if (alertCountdown) {
    static bool buzzerAlternate = false;
    static unsigned long lastAlternate = 0;

    if (millis() - lastAlternate > 500) {
      lastAlternate = millis();
      buzzerAlternate = !buzzerAlternate;
      buzzerTone(buzzerAlternate ? 2500 : 1800);
    }

    if (millis() - alertStartedAt >= FALL_CONFIRM_MS) {
      sendFallAlert();
    }
  }

  delay(20);
}