# Pulse Guard

Pulse Guard es un prototipo de pulsera inteligente para personas mayores. Usa un sensor de pulso, buzzer, motor de vibración y botón físico. Puede configurarse por Bluetooth, conectarse a Wi-Fi y EMQX mediante MQTT, y enviar eventos a una aplicación a través de Firebase.

> Este firmware no incluye MPU6050. Las alarmas pueden probarse por el botón físico, MQTT o BLE. Antes de usarlo como sistema real, la detección debe validarse con pruebas reales y ajustar los intervalos de confirmación y los valores del sensor de pulso.

## Componentes

| Componente         | Uso                                       |
| ------------------ | ----------------------------------------- |
| ESP32              | Procesamiento, Bluetooth, Wi-Fi y MQTT    |
| Sensor de pulso    | Estimación aproximada de BPM              |
| Buzzer             | Alarma sonora                             |
| Motor de vibración | Alerta táctil                             |
| Botón              | Cancelar una alerta o ejecutar una prueba |

## Conexiones

| Señal           |     Pin |
| --------------- | ------: |
| Botón           | GPIO 18 |
| Buzzer          | GPIO 19 |
| Motor           | GPIO 25 |
| Sensor de pulso | GPIO 34 |

El botón usa `INPUT_PULLUP`, así que su conexión debe llevarlo a GND al presionar.

## Configuración por Bluetooth

La ESP32 anuncia el dispositivo BLE `PulseGuard` y crea un servicio con estas características:

| Característica     | Contenido                                                |
| ------------------ | -------------------------------------------------------- |
| SSID Wi-Fi         | Nombre de la red                                         |
| Clave Wi-Fi        | Contraseña de la red                                     |
| Host MQTT          | Dirección de EMQX, sin puerto                            |
| Usuario MQTT       | Usuario registrado en EMQX                               |
| Clave MQTT         | Contraseña registrada en EMQX                            |
| ID del dispositivo | Identificador de la pulsera                              |
| Comando            | `CONECTAR`, `CAIDA`, `CANCELAR`, `TEST` o `RESET_CONFIG` |
| Estado             | Último estado de la pulsera                              |

Los datos aprobados se guardan en la memoria NVS de la ESP32 mediante `Preferences`.

## Topics MQTT

Por defecto, el identificador inicial es `PULSERA001`:

```text
pulsera/PULSERA001/pulsos
pulsera/PULSERA001/alerta
pulsera/PULSERA001/estado
pulsera/PULSERA001/comando
```

Ejemplos de mensajes:

```json
{ "bpm": 78 }
```

```json
{ "tipo": "CAIDA" }
```

```json
{ "estado": "NORMAL", "wifi": true, "mqtt": true }
```

## Flujo de alerta

1. Se ejecuta una posible alerta manual, por BLE, serial o MQTT.
2. El buzzer y el motor comienzan a alertar.
3. La ESP32 espera 10 segundos.
4. Si se pulsa el botón, se publica `CANCELADA`.
5. Si termina el tiempo, se publica `CAIDA`.

Durante la cuenta regresiva puede enviarse `CANCELAR` desde MQTT o BLE.

## Comandos seriales

Escribe estos comandos en el monitor serie:

```text
CAIDA
CANCELAR
RESET_CONFIG
```

## Librerías necesarias

Instala en Arduino IDE:

- `PubSubClient` — MQTT.
- El núcleo `esp32 by Espressif Systems` — Wi-Fi y BLE ya están incluidos.

Selecciona la placa ESP32 que corresponda al hardware instalado y activa el puerto serie antes de cargar el sketch.

## Seguridad

- No publiques credenciales reales en GitHub.
- Actualiza cualquier contraseña que haya sido compartida anteriormente.
- El firmware actual usa `mqttTlsClient.setInsecure()`; para producción debe validar el certificado con la CA real.
- Las características BLE actuales no cifran la contraseña Wi-Fi ni MQTT. Para una versión final debe implementarse emparejamiento seguro o un flujo de aprovisionamiento protegido.

## Próximos pasos

- Crear la pantalla de BLE en la aplicación MAUI.
- Agregar la selección del dispositivo BLE.
- Conectar y escribir las características de configuración.
- Sustituir `setInsecure()` por validación real de certificados.
- Ajustar el algoritmo de BPM con pruebas reales.
- Integrar la publicación hacia el puente y Firebase.
- Agregar batería y reconexión robusta.

Este proyecto no reemplaza un sistema médico ni garantiza la detección de todas las caídas.
