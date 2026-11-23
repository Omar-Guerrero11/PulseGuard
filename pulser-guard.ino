#include <Wire.h>

#define SDA_PIN    21
#define SCL_PIN    22
#define BUZZER_PIN 19

uint8_t ADDR = 0x68;

void buzzerInit() {
#if ESP_ARDUINO_VERSION_MAJOR >= 3
  ledcAttach(BUZZER_PIN, 2000, 8);
#else
  ledcSetup(0, 2000, 8);
  ledcAttachPin(BUZZER_PIN, 0);
#endif
}

void buzzerTone(int freq) {
#if ESP_ARDUINO_VERSION_MAJOR >= 3
  ledcWriteTone(BUZZER_PIN, freq);
#else
  ledcWriteTone(0, freq);
#endif
}

void setup() {
  Serial.begin(115200);
  buzzerInit();
  delay(1000);

  Wire.begin(SDA_PIN, SCL_PIN);
  Wire.setClock(400000);

  Wire.beginTransmission(ADDR);
  if (Wire.endTransmission() != 0) {
    Serial.println("MPU6050 no encontrado. Revisa SDA/SCL, 3V3 y GND.");
    while (true) delay(1000);
  }

  Wire.beginTransmission(ADDR); Wire.write(0x6B); Wire.write(0x00); Wire.endTransmission();
  Wire.beginTransmission(ADDR); Wire.write(0x1A); Wire.write(0x00); Wire.endTransmission();
  Wire.beginTransmission(ADDR); Wire.write(0x1C); Wire.write(0x10); Wire.endTransmission();
  delay(100);

  Serial.println("=== PRUEBA MPU6050 + BUZZER ===");
}

float readMag() {
  Wire.beginTransmission(ADDR); Wire.write(0x3B);
  if (Wire.endTransmission(false) != 0) return -1;
  if (Wire.requestFrom((int)ADDR, 6) != 6) return -1;
  int16_t x = (Wire.read() << 8) | Wire.read();
  int16_t y = (Wire.read() << 8) | Wire.read();
  int16_t z = (Wire.read() << 8) | Wire.read();
  float ax = x / 4096.0, ay = y / 4096.0, az = z / 4096.0;
  return sqrt(ax*ax + ay*ay + az*az);
}

void loop() {
  float a = readMag();
  if (a < 0) {
    Serial.println("Error leyendo el MPU6050");
    delay(500);
    return;
  }

  Serial.printf("Aceleracion total: %.2f g\n", a);

  // Si detecta mas de 2.5 g, suena el buzzer 1 segundo
  if (a > 2.5) {
    Serial.println(">>> IMPACTO DETECTADO, sonando buzzer");
    buzzerTone(2500);
    delay(1000);
    buzzerTone(0);
    delay(500);
  }

  delay(100);
}