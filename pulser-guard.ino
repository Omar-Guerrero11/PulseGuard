#define MOTOR_PIN 25

void setup() {
  Serial.begin(115200);
  pinMode(MOTOR_PIN, OUTPUT);
  delay(1000);
  Serial.println("=== PRUEBA MOTOR DE VIBRACION ===");
}

void loop() {
  Serial.println("Motor ON 1 segundo...");
  digitalWrite(MOTOR_PIN, HIGH);
  delay(1000);

  Serial.println("Motor OFF 1 segundo...");
  digitalWrite(MOTOR_PIN, LOW);
  delay(1000);
}