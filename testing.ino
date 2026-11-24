// Prueba: sensor de pulso, boton y buzzer.
// Boton: GPIO 18 a GND.
// Buzzer: GPIO 19.
// Sensor analogico: GPIO 34.

#define BUTTON_PIN 18
#define BUZZER_PIN 19
#define PULSE_PIN 34

bool botonAnterior = false;
unsigned long ultimaLectura = 0;

void iniciarBuzzer() {
#if ESP_ARDUINO_VERSION_MAJOR >= 3
  ledcAttach(BUZZER_PIN, 2000, 8);
#else
  ledcSetup(0, 2000, 8);
  ledcAttachPin(BUZZER_PIN, 0);
#endif
}

void buzzer(bool encender) {
#if ESP_ARDUINO_VERSION_MAJOR >= 3
  ledcWriteTone(BUZZER_PIN, encender ? 2500 : 0);
#else
  ledcWriteTone(0, encender ? 2500 : 0);
#endif
}

void probarBuzzer() {
  Serial.println("BOTON PRESIONADO: probando buzzer 800 ms");
  buzzer(true);
  delay(800);
  buzzer(false);
}

void setup() {
  Serial.begin(115200);
  delay(500);

  pinMode(BUTTON_PIN, INPUT_PULLUP);
  iniciarBuzzer();
  buzzer(false);

  analogReadResolution(12);
  analogSetPinAttenuation(PULSE_PIN, ADC_11db);

  Serial.println("=========================================");
  Serial.println("PRUEBA: SENSOR DE PULSO + BOTON + BUZZER");
  Serial.println("Abre el monitor serie a 115200 baudios.");
  Serial.println("BOTON: GPIO 18 a GND cuando se presiona");
  Serial.println("BUZZER: GPIO 19");
  Serial.println("PULSO: GPIO 34");
  Serial.println("=========================================");

  probarBuzzer();
}

void loop() {
  bool botonPresionado = digitalRead(BUTTON_PIN) == LOW;

  if (botonPresionado && !botonAnterior) {
    probarBuzzer();
  }

  if (!botonPresionado && botonAnterior) {
    Serial.println("BOTON: soltado");
  }

  botonAnterior = botonPresionado;

  if (millis() - ultimaLectura >= 500) {
    ultimaLectura = millis();

    int valor = analogRead(PULSE_PIN);

    Serial.print("BOTON: ");
    Serial.print(botonPresionado ? "PRESIONADO" : "LIBRE");
    Serial.print(" | SENSOR DE PULSO: ");
    Serial.print(valor);
    Serial.print(" / 4095");

    if (valor < 50) {
      Serial.println(" -> sin señal o sensor desconectado");
    } else if (valor > 4000) {
      Serial.println(" -> señal cerca del limite superior");
    } else {
      Serial.println(" -> señal presente");
    }
  }

  delay(10);
}
