# Pulse Guard

Pulse Guard es un proyecto de una pulsera inteligente diseñada para detectar posibles caídas de personas mayores y alertar rápidamente a una persona responsable, como un familiar o cuidador.

> Estado del proyecto: prototipo inicial. El código actual permite probar el buzzer, el sensor de pulso y el MPU6050. La detección definitiva y la conexión con una aplicación móvil aún están en desarrollo.

## Idea del proyecto

La pulsera combina diferentes señales físicas para reducir falsas alarmas:

- **MPU6050:** mide aceleración y movimiento para identificar impactos o cambios bruscos de orientación.
- **Sensor de pulso:** observa la frecuencia y variaciones del pulso.
- **Buzzer:** genera una alarma audible cuando se detecta una posible caída.
- **Botón:** permite detener o confirmar/cancelar la alarma desde la pulsera.
- **Aplicación móvil:** recibe los datos y envía una notificación al familiar o encargado.

Al detectarse una posible caída, el sistema activa el buzzer y espera una confirmación mediante el botón. Después debe enviar la alerta a la aplicación, junto con información como el estado del pulso, la aceleración y la hora de la detección.

## Funcionamiento esperado

1. La pulsera recopila continuamente datos del MPU6050 y del sensor de pulso.
2. El sistema analiza si existe una combinación compatible con una caída, como un impacto fuerte seguido de una falta de movimiento o una posición diferente.
3. Si se considera una posible caída:
   - Suena el buzzer.
   - Se inicia una cuenta regresiva para que el usuario confirme que está bien.
   - Si no se presiona el botón o se confirma que ocurrió una caída, se envía una alerta.
4. La aplicación recibe la alerta y notifica al familiar o cuidador.
5. La persona responsable puede abrir la app y consultar el estado o intentar comunicarse con el usuario.

Si el usuario presiona el botón antes de que termine la cuenta regresiva, el sistema entiende que está bien y cancela la alerta.

## Componentes actuales

| Componente  | Uso                                              |
| ----------- | ------------------------------------------------ |
| ESP32       | Procesamiento principal, sensores y comunicación |
| MPU6050     | Aceleración y orientación                        |
| PulseSensor | Lectura aproximada del pulso                     |
| Buzzer      | Alerta sonora                                    |
| Botón       | Cancelar la alarma o confirmar estado seguro     |

## Conexiones del prototipo

| Señal           | Pin ESP32 |
| --------------- | --------: |
| MPU6050 SDA     |   GPIO 21 |
| MPU6050 SCL     |   GPIO 22 |
| Buzzer          |   GPIO 19 |
| Sensor de pulso |   GPIO 34 |

El sensor de pulso utiliza una entrada analógica. Para una versión final debe haber una medición estable y un diseño eléctrico adecuado para la señal analógica.

## Detección de caída

La detección final no debería depender de un solo dato. Se recomienda usar una combinación de:

- aceleración máxima durante el impacto;
- caída rápida seguida de poca actividad;
- cambio de inclinación detectado por el MPU6050;
- pulso registrado antes y después del posible accidente;
- tiempo sin movimiento;
- confirmación o cancelación mediante el botón.

Ejemplo conceptual:

```text
Impacto fuerte
+ poca actividad posterior
+ cambio de inclinación
= posible caída

Posible caída
+ botón presionado = cancelar alerta
+ tiempo agotado = enviar alerta
```

El número exacto de umbrales debe ajustarse mediante pruebas con la pulsera colocada en diferentes posiciones y movimientos normales.

## Comunicación con la aplicación

En versiones posteriores se podría usar una conexión Wi-Fi o una plataforma móvil para enviar datos al servidor y luego mostrar una notificación en el teléfono del encargado.

Ejemplo de mensaje de alerta:

```json
{
	"tipo": "possible_fall",
	"fecha_hora": "2026-11-23T12:00:00",
	"aceleracion_g": 2.8,
	"pulso_bpm": 92,
	"sin_movimiento_segundos": 20,
	"confirmacion_usuario": false
}
```

El formato puede cambiar según la tecnología que se utilice para la aplicación y el servidor.

## Limitaciones del prototipo

- La lectura actual del sensor de pulso no garantiza una medición médica.
- Los umbrales actuales pueden causar falsas alarmas.
- El botón aún no está conectado ni implementado en el código actual.
- La aplicación móvil todavía no está integrada.
- El dispositivo no cuenta actualmente con almacenamiento offline ni reconexión completa.
- No reemplaza servicios médicos ni sistemas profesionales de emergencias.

## Próximos pasos

- Agregar el botón para confirmar o cancelar alarmas.
- Implementar estados: normal, posible caída, alerta y cancelada.
- Calibrar el MPU6050 y los umbrales de aceleración.
- Crear una lectura estable del sensor de pulso.
- Registrar datos y realizar pruebas con movimientos reales.
- Implementar Wi-Fi y autenticación del usuario.
- Crear el backend y la aplicación móvil.
- Agregar historial de alertas y estado de batería.
- Enviar la ubicación si el diseño lo permite.
- Aplicar detección de falsas alarmas.

## Autoría y uso

Este proyecto puede utilizarse como prototipo educativo y para pruebas de concepto. Antes de utilizarlo como un sistema real de asistencia médica, debe pasar por una etapa completa de pruebas, validación técnica y consideración de requisitos de seguridad.
# PulseGuard
