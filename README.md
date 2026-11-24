# PulseGuard

PulseGuard es un prototipo para ESP32 que combina un sensor de pulso analógico, un botón físico y un buzzer. Permite activar/cancelar una alerta manualmente, mediante Bluetooth Low Energy (BLE), MQTT o el monitor serie, además de publicar la frecuencia cardiaca aproximada y el estado del dispositivo.

> Este firmware no incluye detección automática de caídas ni MPU6050. El código identifica pulsos por medio de cambios en la señal analógica y calcula BPM aproximados; no constituye un dispositivo médico y debe validarse con pruebas reales.

## Hardware

| Componente | Conexión |
| --- | --- |
| ESP32 | Placa principal |
| Sensor de pulso | GPIO 34 (`PULSE_PIN`) |
| Botón | GPIO 18 (`BUTTON_PIN`) |
| Buzzer | GPIO 19 (`BUZZER_PIN`) |

El botón usa `INPUT_PULLUP`, por lo que debe conectarse entre GPIO 18 y GND. El sensor de pulso es una entrada analógica de 12 bits.

No hay motor de vibración definido en el firmware principal. Para usarlo se debe agregar el pin y controlar el motor desde el código.

## Dependencias

Instala en Arduino IDE:

- Núcleo **ESP32 by Espressif Systems**.
- Biblioteca **PubSubClient**.

El sketch usa además las bibliotecas BLE, Wi-Fi, TLS y `Preferences` incluidas con el núcleo ESP32.

Selecciona la placa ESP32 correspondiente, instala las bibliotecas y abre `pulser-guard.ino`.

## Configuración

El firmware carga las credenciales Wi-Fi desde NVS con `Preferences`. MQTT se configura mediante un archivo privado:

```text
pulseguard_secrets.h
```

Debe definir al menos las siguientes constantes:

```cpp
#pragma once

#define MQTT_HOST "tu-broker.example.com"
#define MQTT_PORT 8883
#define MQTT_USER "tu_usuario"
#define MQTT_PASSWORD "tu_clave"
#define MQTT_CLIENT_ID "PULSERA001"
#define MQTT_ROOT_CA "-----BEGIN CERTIFICATE-----\n...\n-----END CERTIFICATE-----\n"
```

`MQTT_ROOT_CA` debe contener el certificado CA utilizado por el broker MQTT. Puedes basarte en `emqxsl-ca.crt`, pero verifica que sea el certificado correcto para tu servidor.

No publiques credenciales reales ni certificados privados en repositorios públicos. Rota cualquier contraseña que haya sido compartida o incluida previamente en el historial del repositorio.

El proyecto incluye un ejemplo de archivo con valores reales anteriores. Reemplázalos antes de compilar y considera mantener `pulseguard_secrets.h` fuera de Git.

## Aprovisionamiento por BLE

La ESP32 se anuncia como `PulseGuard` y expone el servicio:

```text
6f8f1c70-3a90-4f5b-8a72-001000000001
```

| Característica | UUID | Operación | Contenido |
| --- | --- | --- | --- |
| SSID | `...0011` | Escritura | Nombre de la red Wi-Fi |
| Clave Wi-Fi | `...0012` | Escritura | Contraseña de la red |
| Comando | `...0017` | Escritura | `CONECTAR`, `CAIDA`, `CANCELAR` o `RESET_CONFIG` |
| Estado | `...0018` | Lectura/notificación | Estado actual |

El prefijo completo de cada UUID es `6f8f1c70-3a90-4f5b-8a72-0010000000`.

La secuencia básica es escribir primero SSID y contraseña, y después enviar `CONECTAR` en la característica de comando.

## Topics MQTT

El firmware usa topics fijos:

| Tipo | Topic | Dirección |
| --- | --- | --- |
| Pulso | `pulsera/prueba/pulsos` | ESP32 -> broker |
| Alerta | `pulsera/prueba` | ESP32 -> broker |
| Estado | `pulsera/prueba/estado` | ESP32 -> broker |
| Comando | `pulsera/prueba/comando` | Broker -> ESP32 |

`pulsera/prueba/pulsos` publica:

```text
78
```

o `0` cuando no se calcula un BPM válido en la ventana de un segundo.

`pulsera/prueba` publica `CAIDA` cuando hay una emergencia activa. El mensaje se repite cada 4 segundos.

`pulsera/prueba/estado` publica un JSON retenido aproximadamente cada 30 segundos y durante cambios de estado:

```json
{"estado":"NORMAL","wifi":true,"mqtt":true}
```

Estados posibles definidos por el firmware:

- `CONFIGURACION_LISTA`
- `SSID_RECIBIDO`
- `CLAVE_WIFI_RECIBIDA`
- `CONECTANDO`
- `SIN_WIFI`
- `CONECTANDO_WIFI`
- `CONECTADO`
- `SIN_MQTT`
- `ALERTA_ACTIVA`
- `NORMAL`

## Comandos MQTT

Publica en `pulsera/prueba/comando`:

| Comando | Acción |
| --- | --- |
| `CAIDA` | Activa la alarma y la alerta MQTT |
| `CANCELAR` | Cancela la alarma y vuelve a estado normal |
| `TEST` | Hace sonar el buzzer durante 500 ms |

La comparación acepta texto que contenga estos términos, ya que el firmware convierte el comando a mayúsculas antes de evaluarlo.

## Comandos del monitor serie

Abre el monitor serie a 115200 baudios:

```text
CAIDA
CANCELAR
RESET_CONFIG
```

`RESET_CONFIG` borra las credenciales Wi-Fi almacenadas en NVS y reinicia la ESP32.

## Botón físico

- Si no hay una emergencia activa, una pulsación activa la alerta.
- Si hay una emergencia activa, una pulsación cancela la alerta.
- El buzzer alterna entre 2500 Hz y 1800 Hz mientras la alerta permanece activa.

## Captura del pulso

El firmware recalibra el mínimo y máximo analógico cada 3 segundos y calcula un umbral al 70 % del rango observado. Cuando la señal cruza el umbral, registra un intervalo entre latidos y lo valida entre 280 ms y 2000 ms.

Cada segundo calcula el BPM promedio de la ventana actual y publica el resultado por MQTT. Solo se aceptan BPM entre 40 y 220.

## Compilación y carga

1. Configura `pulseguard_secrets.h`.
2. Añade el certificado CA real como `MQTT_ROOT_CA`.
3. Selecciona la placa ESP32 y el puerto serie.
4. Compila y carga `pulser-guard.ino`.
5. Abre el monitor serie a 115200 baudios.
6. Aprovisiona Wi-Fi por BLE o completa las credenciales existentes en NVS.

## Limitaciones

- La publicación MQTT requiere Wi-Fi y una conexión TLS válida.
- El envío de pulso se hace cada segundo, pero si el broker no está conectado no se publica.
- Las características BLE permiten escribir datos sin cifrado adicional a nivel de aplicación; la protección depende de la seguridad BLE de la plataforma.
- El firmware no publica cancelaciones hacia el topic de alerta, solo cambia el estado.
- El cálculo de BPM es aproximado y depende de la orientación y calidad del sensor.
