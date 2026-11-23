#define BUTTON_PIN 18
#define BUZZER_PIN 19
#define MOTOR_PIN  25

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
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(MOTOR_PIN, OUTPUT);
  buzzerInit();
  delay(1000);
  Serial.println("=== PRUEBA BOTON + BUZZER + MOTOR ===");
  Serial.println("Presiona el boton para sonar buzzer y vibrar motor.");
}

void loop() {
  if (digitalRead(BUTTON_PIN) == LOW) {
    Serial.println("Boton presionado: buzzer + motor 1 s");
    buzzerTone(2500);
    digitalWrite(MOTOR_PIN, HIGH);
    delay(1000);
    buzzerTone(0);
    digitalWrite(MOTOR_PIN, LOW);
    delay(300);
  }
  delay(50);
}