<img src="https://r2cdn.perplexity.ai/pplx-full-logo-primary-dark%402x.png" style="height:64px;margin-right:32px"/>

# token obtenido correctamente dice

Bro, ahí hay una diferencia importante: el método que me pegaste no contiene el mensaje `Token obtenido correctamente.` Su mensaje final es:

```csharp
EstadoLabel.Text = "Token registrado correctamente.";
```

Así que ese mensaje, por sí solo, no confirma que se haya guardado en Firestore. Primero localicemos de dónde sale.

## Haz esto en Visual Studio

1. Presiona **Ctrl + Shift + F** para buscar en toda la solución.
2. Busca:

```text
Token obtenido correctamente
```

3. Pégame el bloque de código donde aparezca y el nombre del archivo.

Si no encuentra nada, dímelo también. Con eso distinguimos si el mensaje viene de otro método o si la app abierta no corresponde al código que estamos revisando. No hace falta compartir el token.

---

# es q creo q la app no se actualizo bien

Sí, bro, es posible: el mensaje que viste no coincide con el método que me pegaste. Vamos a volver a compilar y desplegar antes de tocar Firebase.

## Haz esto en orden

1. Detén la ejecución en Visual Studio con **Shift + F5**.
2. Guarda todos los cambios con **Ctrl + Shift + S**.
3. En el menú “Compilar”, selecciona “Limpiar solución”.
4. Después selecciona “Recompilar solución” y espera a que termine.
5. Arriba, verifica que esté seleccionado el emulador donde estás probando.
6. Presiona **F5** y espera a que Visual Studio abra la app. Ejecutarla con el destino Android seleccionado compila y despliega la aplicación en ese emulador.[^2_1]

Por ahora no desinstales nada ni abras el APK que generaste antes.

## Cómo comprobarlo

En la app que abra Visual Studio, pulsa el botón de activar. Según el código que me compartiste, si termina el guardado debe decir:

```text
Token registrado correctamente.
```

Si aparece una ventana de error o se queda en `Guardando token en Firebase...`, pásame ese resultado. Si vuelve a decir `Token obtenido correctamente`, todavía tendremos que localizar de dónde sale ese mensaje.

<span style="display:none">[^2_10][^2_2][^2_3][^2_4][^2_5][^2_6][^2_7][^2_8][^2_9]</span>

<div align="center">⁂</div>

[^2_1]: https://www.learn.microsoft.com/en-us/dotnet/maui/get-started/first-app

[^2_2]: https://learn.microsoft.com/en-us/answers/questions/2336995/how-to-debug-remote-maui-app-launch?page=3

[^2_3]: https://learn.microsoft.com/en-us/dotnet/maui/get-started/installation?view=net-maui-10.0

[^2_4]: https://learn.microsoft.com/en-us/dotnet/maui/deployment/visual-studio-properties?view=net-maui-10.0

[^2_5]: https://learn.microsoft.com/en-us/dotnet/maui/deployment/?view=net-maui-10.0

[^2_6]: https://learn.microsoft.com/en-us/dotnet/maui/android/deployment/publish-cli?view=net-maui-10.0

[^2_7]: https://learn.microsoft.com/en-us/dotnet/maui/android/deployment/publish-google-play?view=net-maui-9.0

[^2_8]: https://learn.microsoft.com/en-us/dotnet/maui/android/device/setup?view=net-maui-10.0

[^2_9]: https://learn.microsoft.com/sr-cyrl-rs/dotnet/maui/get-started/first-app?view=aspnetcore-10.0

[^2_10]: https://learn.microsoft.com/vi-vn/dotnet/maui/get-started/first-app?view=net-maui-10.0\&pivots=devices-android\&tabs=visual-studio


---

# no puedo iniciar bien el emulador, se queda negra la oantalla y ahora si no es porq este apagada

Va, bro, entendido: no es que esté apagada la pantalla. Dejamos Firebase en pausa y primero probamos que Android arranque sin ejecutar tu app.

## 1. Inicia solo el emulador

1. Detén la depuración en Visual Studio con **Shift + F5**.
2. Cierra la ventana del emulador.
3. En Visual Studio entra a **Herramientas → Android → Android Device Manager**.
4. Selecciona tu dispositivo virtual y pulsa “Start/Iniciar”, sin presionar F5 todavía.

Iniciarlo directamente desde Device Manager permite comprobar el emulador por separado de la app.[^3_1]

## 2. Si sigue negro, prueba un arranque en frío

Detén el dispositivo desde Device Manager y abre su menú de opciones, normalmente los tres puntos.

Busca **“Cold Boot”** o “Start with Factory Defaults”. Microsoft identifica esta última opción en su administrador como un arranque en frío.[^3_2]

No selecciones “Wipe Data”, “Factory Reset” ni “Delete”: por ahora no queremos borrar los datos ni la instalación de la app.

Primero necesitamos que aparezca la pantalla de inicio de Android; después volveremos a ejecutar `AlertaPulsera`.

Si no encuentras la opción de arranque en frío, mándame una captura del menú de los tres puntos de tu dispositivo en Android Device Manager.

<span style="display:none">[^3_10][^3_11][^3_12][^3_13][^3_14][^3_15][^3_16][^3_3][^3_4][^3_5][^3_6][^3_7][^3_8][^3_9]</span>

<div align="center">⁂</div>

[^3_1]: https://learn.microsoft.com/en-us/dotnet/maui/android/emulator/troubleshooting?view=net-maui-10.0

[^3_2]: https://learn.microsoft.com/en-us/dotnet/maui/android/emulator/device-manager?view=net-maui-10.0

[^3_3]: https://learn.microsoft.com/en-us/answers/questions/4080944/how-to-fix-black-screen-on-game-launch

[^3_4]: https://www.learn.microsoft.com/en-us/xamarin/android/get-started/installation/android-emulator/troubleshooting

[^3_5]: https://learn.microsoft.com/en-us/answers/a/12706943

[^3_6]: https://learn.microsoft.com/eu-es/previous-versions/xamarin/android/get-started/installation/android-emulator/troubleshooting?tabs=vswin

[^3_7]: https://learn.microsoft.com/en-us/answers/a/12654624

[^3_8]: https://learn.microsoft.com/cs-cz/previous-versions/dual-screen/android/emulator/troubleshooting

[^3_9]: https://learn.microsoft.com/es-mx/answers/questions/4231347/problemas-con-emuladores-de-consolas-desmume-para

[^3_10]: https://learn.microsoft.com/en-us/archive/msdn-technet-forums/d7075d64-20cb-4254-9af4-4cdefc487960

[^3_11]: https://learn.microsoft.com/visualstudio/cross-platform/troubleshooting-the-visual-studio-emulator-for-android?view=vs-2015\&redirectedfrom=MSDN

[^3_12]: https://learn.microsoft.com/en-us/answers/a/12730359

[^3_13]: https://learn.microsoft.com/en-us/answers/a/5640797

[^3_14]: https://learn.microsoft.com/en-us/answers/a/12913315

[^3_15]: tools.development.visual_studio

[^3_16]: https://learn.microsoft.com/es-mx/dotnet/maui/android/emulator/troubleshooting?view=net-maui-9.0


---

# se supone q ahora a cualquier celular q tenga mi app le puedon mandar una notificacion?

Sí, bro: puedes enviar una notificación a otro Android que tenga tu app configurada, pero no basta con instalarla: necesitas que ese teléfono se registre y que el envío apunte a su token. Firebase permite enviar a un dispositivo específico o a varios.[^4_1]

## Qué necesita cada teléfono

1. Instalar y abrir tu app.
2. Aceptar el permiso de notificaciones; en Android 13 o superior es necesario para mostrarlas.
3. Obtener su propio token de FCM.
4. Tener conexión a internet para recibir el mensaje. Cada token identifica una instalación de la app, no a todos los teléfonos que la tengan.[^4_2][^4_3]

No necesitan estar en la misma red Wi-Fi que tu laptop: el envío pasa por Firebase, no por una conexión local entre ambos.[^4_3]

## En tu proyecto, ¿qué está listo y qué falta?

Con lo que hemos comprobado hasta ahora:

- Ya funcionó una notificación desde tu PC al Android de prueba.
- Tu método `OnActivarClicked` incluye obtener el token y guardarlo en Firestore.
- Todavía no confirmamos que la versión actualizada esté ejecutándose ni que ese guardado termine correctamente.
- Tampoco hemos confirmado que `PuentePulsera` lea los tokens desde Firestore y seleccione los destinatarios.

Por eso, si el puente sigue enviando al token de la prueba anterior, seguirá apuntando a esa instalación; instalar la app en otro celular no cambia automáticamente el destinatario. El servidor debe indicar a FCM a qué token o conjunto de destinatarios enviar.[^4_3]

## Cómo debería quedar

```text
Otro Android abre tu app y activa notificaciones
                    ↓
Su token se guarda en Firestore
                    ↓
PuentePulsera obtiene el token del destinatario
                    ↓
Envía la notificación mediante Firebase
                    ↓
La recibe ese Android
```

Guardar el token es el registro del teléfono; leerlo y usarlo desde el puente es el paso de envío. Son dos partes distintas.[^4_4][^4_3]

Para las alertas de caída, además, debemos asociar cada pulsera con sus contactos autorizados, en lugar de enviarlas a todos los que instalen la app. Y con tu arquitectura actual, la laptop debe seguir ejecutando `PuentePulsera` para transformar la alerta MQTT en una notificación.

Esto se refiere a la versión Android que estás desarrollando: el APK no sirve para iPhone; recibir mediante FCM en iOS requiere una versión y configuración específicas para Apple.[^4_5]

<span style="display:none">[^4_10][^4_11][^4_12][^4_13][^4_14][^4_15][^4_6][^4_7][^4_8][^4_9]</span>

<div align="center">⁂</div>

[^4_1]: https://firebase.google.com/docs/cloud-messaging/send/admin-sdk

[^4_2]: https://firebase.google.com/docs/cloud-messaging/android/get-started

[^4_3]: https://firebase.google.com/docs/cloud-messaging/server-environment

[^4_4]: https://firebase.google.com/docs/cloud-messaging/manage-tokens

[^4_5]: https://firebase.google.com/docs/cloud-messaging/ios/get-started

[^4_6]: https://firebase.google.com/docs/app-distribution/collect-feedback-from-testers

[^4_7]: https://firebase.google.com/docs/cloud-messaging/device-group

[^4_8]: https://firebase.google.com/docs/reference/kotlin/com/google/firebase/appdistribution/FirebaseAppDistribution

[^4_9]: https://firebase.google.com/docs/cloud-messaging/flutter/receive-messages

[^4_10]: https://firebase.google.com/docs/cloud-messaging/send/v1-api

[^4_11]: https://firebase.google.com/docs/cloud-messaging

[^4_12]: https://firebase.google.com/docs/cloud-messaging/error-codes

[^4_13]: https://firebase.google.com/docs/cloud-messaging/topic-messaging

[^4_14]: https://firebase.google.com/support/releases

[^4_15]: https://firebase.google.com/support/release-notes/android


---

# pero la app pasa el token a firebase no? automaticamente hace eso ahora

Sí, bro: el código que me pegaste está hecho para obtener el token y guardarlo en Firestore, sin que tengas que copiarlo a mano.

Pero hay una precisión: lo hace cuando pulsas el botón que ejecuta **`OnActivarClicked`**, no simplemente por instalar o abrir la app.

En tu método ocurre esto:

1. Inicia sesión anónima si no hay un usuario.
2. Obtiene el token de FCM.
3. Intenta guardarlo en esta ruta:

```text
usuarios/{UID}/dispositivos/{ID de instalación}
```

4. Solo después de terminar el guardado muestra:

```text
Token registrado correctamente.
```


Entonces, sí: la parte de registrar el token ya está escrita. Lo que aún no confirmamos es que esté funcionando en la app instalada, porque te aparecía el mensaje anterior y después falló el emulador.

Y corrijo la posible confusión de mi respuesta anterior: no necesitas copiar los tokens manualmente si ese guardado funciona. Lo que falta comprobar por separado es que `PuentePulsera` los lea de Firestore y los use para enviar las notificaciones.

---

# el onclicked se activa al activar las notificaciones no?

Sí, bro: **si el botón “Activar notificaciones” está enlazado a `OnActivarClicked`**, al tocarlo se ejecuta todo ese método: solicita el permiso cuando corresponde, inicia sesión, obtiene el token y lo guarda en Firestore.

En tu `MainPage.xaml`, ese botón debe tener:

```xml
Clicked="OnActivarClicked"
```

Una precisión: el método se ejecuta al tocar el botón de tu app; aceptar el permiso de Android permite que continúe. Si rechazas ese permiso, tu código sale antes de obtener y guardar el token.

Si termina todo correctamente, el mensaje final que programaste es:

```text
Token registrado correctamente.
```


---

# me sigue apareciendo lo de token obtenido y no registrado

Bro, entonces seguimos viendo un mensaje que no está en el método que me compartiste. Eso todavía no nos dice si estás ejecutando una versión anterior o si el botón llama a otro código.

## Vamos a identificarlo sin adivinar

1. En Visual Studio, presiona **Ctrl + Shift + F**.
2. Selecciona el ámbito “Toda la solución”.
3. Busca solo esta parte:

```text
Token obtenido
```

4. Si aparece un resultado, pégame el bloque donde está y el nombre del archivo. Si no aparece ninguno, dímelo.

Después abre `MainPage.xaml` y pégame únicamente el bloque del botón “Activar notificaciones”, por ejemplo:

```xml
<Button
    Text="Activar notificaciones"
    Clicked="OnActivarClicked" />
```

Con esas dos cosas podemos revisar de dónde sale el mensaje y qué método tiene enlazado el botón. No cambies Firebase ni crees la colección manualmente todavía.

---

# no hay coincidencias dice

Va, bro. Si no hay coincidencias, cobra fuerza que estés viendo otra versión de la app, aunque todavía hay que comprobarlo. Hagamos una prueba visible, sin borrar nada.

## 1. Pon una marca temporal en el botón

En `MainPage.xaml`, localiza el botón que activa las notificaciones y cambia únicamente su `Text`:

```xml
Text="Activar notificaciones - PRUEBA 2"
```

Conserva sus demás propiedades y verifica que tenga:

```xml
Clicked="OnActivarClicked"
```


## 2. Ejecútala desde Visual Studio

1. Detén la depuración.
2. Guarda todos los cambios.
3. En el Explorador de soluciones, haz clic derecho en `AlertaPulsera` → “Establecer como proyecto de inicio”.
4. Arriba, selecciona el emulador que estás usando.
5. Presiona **F5** y espera a que Visual Studio compile, despliegue y abra la app en ese destino. No abras el APK anterior.[^8_1]

Si aparece un aviso de que hubo errores y pregunta si quieres ejecutar la última compilación correcta, elige “No” y pásame los errores.

## Qué vamos a comprobar

- Si aparece `PRUEBA 2`, el cambio visible sí llegó a la app.
- Si no aparece, todavía no estamos viendo esa actualización.

¿El botón ya muestra `PRUEBA 2` después de ejecutarla así?

<span style="display:none">[^8_10][^8_2][^8_3][^8_4][^8_5][^8_6][^8_7][^8_8][^8_9]</span>

<div align="center">⁂</div>

[^8_1]: https://learn.microsoft.com/da-dk/dotnet/maui/get-started/first-app?view=net-maui-9.0\&pivots=devices-android\&tabs=visual-studio

[^8_2]: https://learn.microsoft.com/lv-lv/dotnet/maui/get-started/first-app?pivots=devices-windows\&view=net-maui-10.0

[^8_3]: https://www.learn.microsoft.com/en-us/dotnet/maui/get-started/installation

[^8_4]: https://learn.microsoft.com/en-us/dotnet/maui/get-started/first-app?view=net-maui-10.0

[^8_5]: https://learn.microsoft.com/sr-cyrl-rs/dotnet/maui/get-started/first-app?view=aspnetcore-10.0

[^8_6]: https://learn.microsoft.com/en-us/dotnet/maui/deployment

[^8_7]: https://learn.microsoft.com/is-is/dotnet/maui/get-started/first-app?view=net-maui-10.0\&viewFallbackFrom=aspnetcore-10.0\&tabs=vswin

[^8_8]: https://learn.microsoft.com/en-us/dotnet/maui/android/emulator/?view=net-maui-9.0

[^8_9]: https://learn.microsoft.com/en-us/dotnet/maui/deployment/?view=net-maui-10.0

[^8_10]: https://learn.microsoft.com/da-dk/dotnet/maui/get-started/first-app?view=net-maui-10.0\&viewFallbackFrom=net-maui-8.0


---

# si carga una version anterior

Va, bro: entonces primero hay que resolver la actualización de la app. No toquemos Firestore ni el método de guardado todavía.

## 1. Comprueba la compilación por separado

1. Detén la ejecución con **Shift + F5**.
2. Guarda todo con **Ctrl + Shift + S**.
3. Conserva el texto `Activar notificaciones - PRUEBA 2` en el botón.
4. Selecciona “Compilar → Recompilar solución”.
5. Espera a que termine, sin presionar F5 todavía.

Visual Studio muestra los errores y el resultado de la compilación en “Salida”; conviene comprobar que compile correctamente antes de ejecutarla.[^9_1]

Si falla, no aceptes ejecutar una compilación anterior: pásame los errores.

## 2. Si compila bien, vuelve a desplegar

1. Confirma que `AlertaPulsera` sea el proyecto de inicio.
2. Selecciona el emulador correcto arriba.
3. Presiona F5 y espera a que Visual Studio abra la app.
4. Comprueba si aparece `PRUEBA 2`.

No abras el APK que generaste antes, porque estamos intentando probar el código actual desde Visual Studio.

Por ahora no desinstales la app ni restablezcas el emulador. **Pásame las últimas 10–15 líneas de “Salida” después de “Recompilar solución”**, para ver si está creando correctamente la versión nueva.

<span style="display:none">[^9_10][^9_11][^9_12][^9_13][^9_14][^9_15][^9_2][^9_3][^9_4][^9_5][^9_6][^9_7][^9_8][^9_9]</span>

<div align="center">⁂</div>

[^9_1]: https://learn.microsoft.com/en-us/visualstudio/ide/find-and-fix-code-errors?view=visualstudio

[^9_2]: https://learn.microsoft.com/en-us/visualstudio/msbuild/fix-intermittent-build-failures?view=visualstudio

[^9_3]: https://learn.microsoft.com/en-us/troubleshoot/developer/visualstudio/welcome-visual-studio

[^9_4]: https://learn.microsoft.com/en-us/answers/questions/465553/visual-studio-2019-unable-to-start-program-the-sys

[^9_5]: https://learn.microsoft.com/en-us/answers/questions/1499637/why-does-my-vs-2022-stuck-during-a-project-build

[^9_6]: https://learn.microsoft.com/sr-cyrl-rs/visualstudio/ide/configure-build-run-options?view=visualstudio

[^9_7]: http://www.learn.microsoft.com/en-us/visualstudio/ide/reference/options-dialog-box-projects-and-solutions-build-and-run

[^9_8]: https://learn.microsoft.com/hi-in/visualstudio/ide/configure-build-run-options?view=vs-2022

[^9_9]: https://learn.microsoft.com/vi-vn/visualstudio/ide/reference/options-dialog-box-projects-and-solutions-build-and-run?view=vs-2022

[^9_10]: https://learn.microsoft.com/en-us/answers/questions/5542956/net-maui-android-app-icon

[^9_11]: https://learn.microsoft.com/fil-ph/visualstudio/ide/configure-build-run-options?view=vs-2022

[^9_12]: https://learn.microsoft.com/en-us/previous-versions/visualstudio/visual-studio-2017/ide/reference/options-dialog-box-projects-and-solutions-build-and-run?view=vs-2017

[^9_13]: https://learn.microsoft.com/en-us/visualstudio/ide/configure-build-run-options?view=visualstudio

[^9_14]: https://learn.microsoft.com/en-us/visualstudio/ide/msbuild-logs?view=visualstudio

[^9_15]: https://learn.microsoft.com/en-us/dotnet/maui/deployment/visual-studio-properties?view=net-maui-10.0


---

# La recompilación se inició a las 11:07 a. m....

1>------ Operación Recompilar todo iniciada: proyecto: AlertaPulsera, configuración: Debug Any CPU ------
Se ha restaurado C:\\Users\\Sergio\\source\\repos\\AlertaPulsera\\AlertaPulsera\\AlertaPulsera.csproj (en 1.31 s).
1>Including assemblies for Hot Reload support
1>AlertaPulsera -> C:\\Users\\Sergio\\source\\repos\\AlertaPulsera\\AlertaPulsera\\bin\\Debug\\net9.0-android\\AlertaPulsera.dll
eso dice la recompilacion, aun no acaba pero luego ya dice q se completa y todo eso

Va, bro. Hasta ese punto, la salida muestra que se restauró el proyecto y se generó `AlertaPulsera.dll`; todavía no muestra el resultado final de la recompilación ni que se haya instalado la actualización en el emulador.

## Sigue así

1. Espera a que termine y revisa el resumen final. Pégamelo tal como aparezca, especialmente si dice que hubo errores.
2. Si termina correctamente, selecciona el emulador y presiona **F5**.
3. Espera a que Visual Studio abra la app; no la abras tú desde el icono.
4. Revisa si el botón muestra:

```text
Activar notificaciones - PRUEBA 2
```


La comprobación clave es esa marca: si aparece `PRUEBA 2`, ya estaremos viendo el cambio que hiciste. Todavía no necesitamos modificar Firebase ni borrar nada.

---

# es q ya lo hice pues y no jala no muestra la nueva version

Tienes razón, bro: ya lo hiciste y te estaba repitiendo lo mismo. Vamos a comprobar algo distinto: si Visual Studio está desplegando el proyecto, no solo compilándolo.

## Revisa “Implementar”

1. Detén la ejecución.
2. Abre “Compilar → Administrador de configuraciones”.
3. Busca la fila `AlertaPulsera`, con configuración `Debug`.
4. Revisa que estén marcadas las casillas:
    - **Compilar**
    - **Implementar** — puede aparecer como “Deploy”.

Microsoft señala que, cuando una app no se despliega, hay que comprobar que el proyecto esté marcado para implementar en el Administrador de configuraciones.[^11_1]

Si “Implementar” está desmarcada, márcala, cierra la ventana y ejecuta con F5 en tu emulador.

Si no aparece esa columna o ya está marcada, mándame una captura de ese administrador. No borres ni desinstales nada todavía: primero comprobemos este punto, que no habíamos revisado.

<span style="display:none">[^11_10][^11_2][^11_3][^11_4][^11_5][^11_6][^11_7][^11_8][^11_9]</span>

<div align="center">⁂</div>

[^11_1]: https://learn.microsoft.com/en-us/dotnet/maui/migration/multi-project-to-single-project?view=net-maui-10.0

[^11_2]: https://learn.microsoft.com/en-us/answers/questions/5858108/moving-with-maui-from-net-9-to-net-10

[^11_3]: https://learn.microsoft.com/en-sg/answers/questions/5623742/release-mode-for-a-net9-maui-failed-to-find-entry

[^11_4]: http://learn.microsoft.com/en-us/dotnet/maui/troubleshooting

[^11_5]: https://learn.microsoft.com/en-us/dotnet/maui/migration/native-projects?view=net-maui-10.0

[^11_6]: https://learn.microsoft.com/en-us/answers/questions/5628417/move-from-net-9-to-net-10-in-maui

[^11_7]: https://learn.microsoft.com/es-es/dotnet/maui/migration/native-projects?view=net-maui-8.0

[^11_8]: https://learn.microsoft.com/en-us/answers/questions/5542956/net-maui-android-app-icon?page=1

[^11_9]: https://learn.microsoft.com/en-us/answers/questions/5542956/net-maui-android-app-icon

[^11_10]: https://learn.microsoft.com/en-us/dotnet/maui/deployment/?view=net-maui-10.0


---

# Android NDK:

Android SDK: C:\\Program Files (x86)\\Android\\android-sdk\
Android SDK Build Tools: C:\\Program Files (x86)\\Android\\android-sdk\\build-tools\\35.0.0\
Java SDK: C:\\Program Files (x86)\\Android\\openjdk\\jdk-17.0.14\
Application Java class: android.app.Application
\_OuterIntermediateOutputPath:
IntermediateOutputPath: obj\\Debug\\net9.0-android\
Se omitirá el destino "ProcessMauiSplashScreens" porque todos los archivos de salida están actualizados respecto a los archivos de entrada.
Se omitirá el destino "ProcessMauiFonts" porque todos los archivos de salida están actualizados respecto a los archivos de entrada.
Se omitirá el destino "ResizetizeImages" porque todos los archivos de salida están actualizados respecto a los archivos de entrada.
Se omitirá el destino "\_ResolveLibraryProjectImports" porque todos los archivos de salida están actualizados respecto a los archivos de entrada.
Se omitirá el destino "\_BuildLibraryImportsCache" porque todos los archivos de salida están actualizados respecto a los archivos de entrada.
Se omitirá el destino "\_GenerateResourceCaseMap" porque todos los archivos de salida están actualizados respecto a los archivos de entrada.
Se omitirá el destino "\_GenerateResourceDesignerIntermediateClass" porque todos los archivos de salida están actualizados respecto a los archivos de entrada.
Se omitirá el destino "\_GenerateAndroidResourceDir" porque todos los archivos de salida están actualizados respecto a los archivos de entrada.
Se omitirá el destino "\_GenerateLayoutBindings" porque no tiene salidas.
Se omitirá el destino "\_ConvertResourcesCases" porque todos los archivos de salida están actualizados respecto a los archivos de entrada.
Se omitirá el destino "\_CompileResources" porque todos los archivos de salida están actualizados respecto a los archivos de entrada.
Se omitirá el destino "\_PrepareUpdateAndroidResgen" porque todos los archivos de salida están actualizados respecto a los archivos de entrada.
Se omitirá el destino "\_UpdateAndroidResgen" porque todos los archivos de salida están actualizados respecto a los archivos de entrada.
Proyecto "AlertaPulsera.csproj" (\_ComputeFilesToPublishForRuntimeIdentifiers destino(s)):
\_OuterIntermediateOutputPath: obj\\Debug\\net9.0-android\
IntermediateOutputPath: obj\\Debug\\net9.0-android\\android-x64\
Compilación del proyecto "AlertaPulsera.csproj" terminada.
Se omitirá el destino "\_LinkAssembliesNoShrink" porque todos los archivos de salida están actualizados respecto a los archivos de entrada.
Se omitirá el destino "\_GenerateJavaStubs" porque todos los archivos de salida están actualizados respecto a los archivos de entrada.
Se omitirá el destino "\_ManifestMerger" porque todos los archivos de salida están actualizados respecto a los archivos de entrada.
Se omitirá el destino "\_ConvertCustomView" porque todos los archivos de salida están actualizados respecto a los archivos de entrada.
Se omitirá el destino "\_AddStaticResources" porque todos los archivos de salida están actualizados respecto a los archivos de entrada.
Se omitirá el destino "\_GenerateEmptyAndroidRemapNativeCode" porque todos los archivos de salida están actualizados respecto a los archivos de entrada.
Se omitirá el destino "\_GeneratePackageManagerJava" porque todos los archivos de salida están actualizados respecto a los archivos de entrada.
Se omitirá el destino "\_GenerateAndroidAssetsDir" porque todos los archivos de salida están actualizados respecto a los archivos de entrada.
Se omitirá el destino "\_PrepareCreateBaseApk" porque todos los archivos de salida están actualizados respecto a los archivos de entrada.
Se omitirá el destino "\_CreateBaseApk" porque todos los archivos de salida están actualizados respecto a los archivos de entrada.
Se omitirá el destino "\_CompileJava" porque todos los archivos de salida están actualizados respecto a los archivos de entrada.
Se omitirá el destino "\_CompileNativeAssemblySources" porque todos los archivos de salida están actualizados respecto a los archivos de entrada.
Se omitirá el destino "\_CreateApplicationSharedLibraries" porque todos los archivos de salida están actualizados respecto a los archivos de entrada.
Se omitirá el destino "\_CompileToDalvik" porque todos los archivos de salida están actualizados respecto a los archivos de entrada.

Bro, esos “Se omitirá el destino…” no son errores: indican que MSBuild considera que esos archivos ya están actualizados y no repite esas tareas. Eso es normal en una compilación incremental; no demuestra por sí solo que esté usando código viejo.[^12_1]

En lo que pegaste tampoco aparece todavía una instalación en el emulador ni un error de despliegue. Así que no voy a mandarte a recompilar otra vez sin más.

## Comprobemos el despliegue

Te había pedido revisar “Implementar”, pero aún no vimos cómo está configurado:

1. Abre “Compilar → Administrador de configuraciones”.
2. Mándame una captura de la fila de `AlertaPulsera`, incluyendo las columnas de la derecha.

Si no encuentras ese menú, mándame una captura del menú “Compilar” abierto.

Por ahora no borres `bin`, `obj`, la app ni el emulador. Primero necesitamos ver esa configuración para no seguir probando a ciegas.

<span style="display:none">[^12_10][^12_2][^12_3][^12_4][^12_5][^12_6][^12_7][^12_8][^12_9]</span>

<div align="center">⁂</div>

[^12_1]: https://learn.microsoft.com/en-us/visualstudio/msbuild/incremental-builds?view=visualstudio

[^12_2]: https://www.learn.microsoft.com/en-us/visualstudio/msbuild/incremental-builds

[^12_3]: http://learn.microsoft.com/en-us/visualstudio/msbuild/msbuild-targets

[^12_4]: https://learn.microsoft.com/en-us/visualstudio/msbuild/incremental-builds?WT.mc_id=DOP-MVP-5001511\&view=vs-2019

[^12_5]: https://learn.microsoft.com/en-us/previous-versions/visualstudio/visual-studio-2015/msbuild/incremental-builds?view=vs-2015

[^12_6]: https://learn.microsoft.com/is-is/visualstudio/msbuild/incremental-builds?view=visualstudio\&viewFallbackFrom=vs-2019

[^12_7]: https://learn.microsoft.com/en-us/visualstudio/msbuild/how-to-build-incrementally?view=vs-2022

[^12_8]: https://learn.microsoft.com/id-id/previous-versions/visualstudio/visual-studio-2017/msbuild/incremental-builds?view=vs-2017

[^12_9]: https://learn.microsoft.com/visualstudio/msbuild/incremental-builds?view=vs-2015\&redirectedfrom=MSDN

[^12_10]: https://learn.microsoft.com/en-us/visualstudio/msbuild/how-to-build-incrementally?view=visualstudio


---

# ya jalo bien bro ya registro el token en la firestore

¡Ahora sí, bro! Entonces ya quedó confirmado que la app actualizada ejecuta el guardado y que el token aparece en Firestore.

## Lo que ya funciona

Al pulsar “Activar notificaciones”, tu app:

- Inicia sesión.
- Obtiene el token.
- Lo guarda en `usuarios/{UID}/dispositivos/{ID de instalación}`.

Ya no necesitas copiar ese token manualmente para registrarlo.

## Lo que falta comprobar

La siguiente parte es **`PuentePulsera`**: todavía no hemos confirmado que lea los tokens de Firestore para usarlos como destinatarios. Guardarlos desde la app y utilizarlos desde el puente son dos pasos distintos.

Pégame la parte de `Program.cs` de `PuentePulsera` donde construyes y envías el mensaje de Firebase. Si contiene un token escrito directamente, reemplázalo por `"TOKEN_OCULTO"` antes de enviarlo; no compartas el archivo de credenciales.

---

# using FirebaseAdmin;

using FirebaseAdmin.Messaging;
using Google.Apis.Auth.OAuth2;
using MQTTnet;
using MQTTnet.Client;
using System.Text;

try
{
string rutaClave = @"C:\\ClavesPulsera\\alertapulserapro-firebase-adminsdk-fbsvc-1a1b4891d3.json";

```
if (!File.Exists(rutaClave))
{
    Console.WriteLine("No se encontró la clave en:");
    Console.WriteLine(rutaClave);
    return;
}

Console.WriteLine("Pega el token que muestra la app y presiona Enter:");
string token = Console.ReadLine()?.Trim() ?? "";

if (string.IsNullOrWhiteSpace(token))
{
    Console.WriteLine("No ingresaste un token.");
    return;
}

Environment.SetEnvironmentVariable(
    "GOOGLE_APPLICATION_CREDENTIALS",
    rutaClave);

FirebaseApp.Create(new AppOptions
{
    Credential = GoogleCredential.GetApplicationDefault()
});

var factory = new MqttFactory();
using var mqtt = factory.CreateMqttClient();

mqtt.ApplicationMessageReceivedAsync += async e =>
{
    try
    {
        string contenido = Encoding.UTF8.GetString(
            e.ApplicationMessage.PayloadSegment);

        Console.WriteLine(
            $"MQTT recibido: {e.ApplicationMessage.Topic} -> {contenido}");

        // Ignorar mensajes guardados previamente en el broker.
        if (e.ApplicationMessage.Retain)
        {
            Console.WriteLine("Mensaje retenido ignorado.");
            return;
        }

        if (!contenido.Trim().Equals(
                "CAIDA",
                StringComparison.OrdinalIgnoreCase))
        {
            Console.WriteLine("No es una alerta CAIDA. Se ignora.");
            return;
        }

        var mensaje = new Message
        {
            Token = token,
            Notification = new Notification
            {
                Title = "Alerta de pulsera",
                Body = "Prueba desde MQTT: se detectó una posible caída."
            },
            Android = new AndroidConfig
            {
                Priority = Priority.High
            }
        };

        string resultado = await FirebaseMessaging
            .DefaultInstance
            .SendAsync(mensaje);

        Console.WriteLine("Firebase aceptó el envío:");
        Console.WriteLine(resultado);
    }
    catch (Exception ex)
    {
        Console.WriteLine("Error procesando la alerta:");
        Console.WriteLine(ex.ToString());
    }
};

Console.WriteLine("Pega la dirección del broker que aparece en EMQX:");
string servidor = Console.ReadLine()?.Trim() ?? "";

Console.WriteLine("Escribe el usuario MQTT que creaste:");
string usuario = Console.ReadLine()?.Trim() ?? "";

Console.WriteLine("Escribe la contraseña MQTT (no se mostrará):");
var claveMqtt = new StringBuilder();

while (true)
{
    var tecla = Console.ReadKey(intercept: true);

    if (tecla.Key == ConsoleKey.Enter)
        break;

    if (tecla.Key == ConsoleKey.Backspace)
    {
        if (claveMqtt.Length > 0)
            claveMqtt.Length--;
    }
    else if (!char.IsControl(tecla.KeyChar))
    {
        claveMqtt.Append(tecla.KeyChar);
    }
}

Console.WriteLine();

if (string.IsNullOrWhiteSpace(servidor) ||
    string.IsNullOrWhiteSpace(usuario) ||
    claveMqtt.Length == 0)
{
    Console.WriteLine("Faltan datos de conexión MQTT.");
    return;
}

var opciones = new MqttClientOptionsBuilder()
    .WithClientId("PuentePulsera-" + Guid.NewGuid().ToString("N"))
    .WithTcpServer(servidor, 8883)
    .WithCredentials(usuario, claveMqtt.ToString())
    .WithTlsOptions(tls => tls.UseTls())
    .Build();

claveMqtt.Clear();

Console.WriteLine("Conectando a EMQX...");
await mqtt.ConnectAsync(opciones);

var suscripcion = factory.CreateSubscribeOptionsBuilder()
    .WithTopicFilter(f => f.WithTopic("pulsera/prueba"))
    .Build();

var resultadoSuscripcion = await mqtt.SubscribeAsync(suscripcion);

foreach (var item in resultadoSuscripcion.Items)
{
    Console.WriteLine($"Resultado de suscripción: {item.ResultCode}");
}

Console.WriteLine("Conectado a EMQX.");
Console.WriteLine("Esperando CAIDA en el tema pulsera/prueba.");
Console.WriteLine("Presiona Enter para detener el puente.");

Console.ReadLine();

await mqtt.DisconnectAsync(
    new MqttClientDisconnectOptionsBuilder().Build());
```

}
catch (Exception ex)
{
Console.WriteLine("ERROR:");
Console.WriteLine(ex.ToString());
Console.WriteLine("\\nPresiona Enter para salir.");
Console.ReadLine();
}

Sí, bro: viendo tu código, el puente todavía pide el token manualmente y solo envía a ese token:

```csharp
Token = token,
```

La app ya lo guarda, pero al puente le falta leerlo de Firestore. Vamos a conectar esas dos partes sin cambiar EMQX ni la prioridad alta.

## 1. Instala Firestore en `PuentePulsera`

En el proyecto de consola `PuentePulsera`, instala desde NuGet:

```text
Google.Cloud.Firestore
```

Ese es el paquete oficial para consultar Firestore desde C\#.[^14_1]

## 2. Añade estos `using`

Arriba de `Program.cs`:

```csharp
using Google.Cloud.Firestore;
using System.Linq;
```


## 3. Reemplaza la petición del token por la del UID

Borra este bloque:

```csharp
Console.WriteLine("Pega el token que muestra la app y presiona Enter:");
string token = Console.ReadLine()?.Trim() ?? "";

if (string.IsNullOrWhiteSpace(token))
{
    Console.WriteLine("No ingresaste un token.");
    return;
}
```

Y coloca:

```csharp
Console.WriteLine(
    "Escribe el UID del usuario destinatario registrado en Firestore:");

string uidDestino = Console.ReadLine()?.Trim() ?? "";

if (string.IsNullOrWhiteSpace(uidDestino) || uidDestino.Contains('/'))
{
    Console.WriteLine("UID vacío o inválido.");
    return;
}
```

Para esta prueba, copia el ID que aparece justo debajo de `usuarios`:

```text
usuarios
└── ESTE_ES_EL_UID
    └── dispositivos
        └── ID de instalación
```

No copies el ID de instalación ni el campo `token`. No necesitas mandarme ninguno de esos valores.

Usaremos un UID concreto para no enviar alertas de caída a todos los usuarios de la app.

## 4. Crea la conexión a Firestore

Justo después de:

```csharp
FirebaseApp.Create(new AppOptions
{
    Credential = GoogleCredential.GetApplicationDefault()
});
```

Añade:

```csharp
var firestore = FirestoreDb.Create("alertapulserapro");
```

Esto usa el proyecto indicado y las credenciales que ya configuraste mediante `GOOGLE_APPLICATION_CREDENTIALS`.[^14_1]

## 5. Reemplaza el bloque de envío

Dentro de `ApplicationMessageReceivedAsync`, conserva las comprobaciones de mensaje retenido y de contenido `CAIDA`.

Después, reemplaza desde:

```csharp
var mensaje = new Message
```

hasta:

```csharp
Console.WriteLine(resultado);
```

por este bloque:

```csharp
var dispositivos = await firestore
    .Collection("usuarios")
    .Document(uidDestino)
    .Collection("dispositivos")
    .GetSnapshotAsync();

var tokens = dispositivos.Documents
    .Where(doc => doc.ContainsField("token"))
    .Select(doc => doc.GetValue<string>("token"))
    .Where(valor => !string.IsNullOrWhiteSpace(valor))
    .Distinct()
    .ToList();

if (tokens.Count == 0)
{
    Console.WriteLine(
        "No hay tokens registrados para el UID indicado.");
    return;
}

Console.WriteLine(
    $"Se encontraron {tokens.Count} destinatarios para ese usuario.");

int aceptados = 0;
int fallidos = 0;

foreach (var tokenDestino in tokens)
{
    try
    {
        var mensaje = new Message
        {
            Token = tokenDestino,
            Notification = new Notification
            {
                Title = "Alerta de pulsera",
                Body = "Prueba desde MQTT: se detectó una posible caída."
            },
            Android = new AndroidConfig
            {
                Priority = Priority.High
            }
        };

        await FirebaseMessaging.DefaultInstance.SendAsync(mensaje);

        aceptados++;
    }
    catch (FirebaseMessagingException ex)
    {
        fallidos++;

        Console.WriteLine(
            $"Firebase rechazó un envío. Código: {ex.MessagingErrorCode}");
    }
}

Console.WriteLine(
    $"Envíos aceptados por Firebase: {aceptados}. Fallidos: {fallidos}.");
```

La consulta lee los documentos de `dispositivos` y obtiene su campo `token`; ese patrón de lectura está soportado por la biblioteca oficial.[^14_2]

## Qué cambia con esto

```text
App → guarda el token en Firestore
                      ↓
Puente recibe CAIDA desde EMQX
                      ↓
Consulta los tokens del UID elegido
                      ↓
Envía las notificaciones
```

El puente ya no te pedirá copiar el token y volverá a consultar Firestore en cada alerta. Mantén el resto de tu código tal como está: conexión EMQX por `8883`, TLS, tema `pulsera/prueba` y `Priority.High`.

Esto sigue siendo una prueba con un destinatario elegido por UID. La asociación automática entre pulsera y contactos queda pendiente; no estamos enviando a todos los que instalen la app.

<span style="display:none">[^14_10][^14_11][^14_12][^14_13][^14_14][^14_15][^14_3][^14_4][^14_5][^14_6][^14_7][^14_8][^14_9]</span>

<div align="center">⁂</div>

[^14_1]: https://docs.cloud.google.com/dotnet/docs/reference/Google.Cloud.Firestore/latest

[^14_2]: https://docs.cloud.google.com/dotnet/docs/reference/Google.Cloud.Firestore/latest/userguide

[^14_3]: https://docs.cloud.google.com/firestore/native/docs/query-data/queries

[^14_4]: https://docs.cloud.google.com/dotnet/docs/reference/Google.Cloud.Firestore/latest/datamodel

[^14_5]: https://docs.cloud.google.com/dotnet/docs/getting-started/background-processing

[^14_6]: https://docs.cloud.google.com/dotnet/docs/reference/Google.Cloud.Firestore/latest/Google.Cloud.Firestore.FirestoreDb.html

[^14_7]: https://docs.cloud.google.com/dotnet/docs/reference/Google.Cloud.Firestore/latest/Google.Cloud.Firestore?authuser=1\&hl=es

[^14_8]: https://docs.cloud.google.com/dotnet/docs/reference/Google.Cloud.Firestore/latest/Google.Cloud.Firestore.FirestoreDb?authuser=1

[^14_9]: https://cloud.google.com/dotnet/docs/reference/Google.Cloud.Firestore/latest/Google.Cloud.Firestore.FirestoreDb.html?authuser=9

[^14_10]: https://docs.cloud.google.com/identity-platform/docs/install-admin-sdk

[^14_11]: https://docs.cloud.google.com/identity-platform/docs/admin/create-custom-tokens

[^14_12]: https://console.cloud.google.com/apis/library/admin.googleapis.com

[^14_13]: https://docs.cloud.google.com/identity-platform/docs/multi-tenancy-managing-tenants

[^14_14]: https://docs.cloud.google.com/integration-connectors/docs/connectors/gsc_admin_sdk/configure?hl=es-419

[^14_15]: https://console.cloud.google.com/marketplace/product/google/admin.googleapis.com?hl=zh-TW


---

# dame el codigo entero

Claro, bro. Reemplaza todo tu `Program.cs` de **`PuentePulsera`** por este código. Mantiene EMQX con TLS, el tema `pulsera/prueba` y la prioridad alta; cambia la petición del token por la del UID y consulta sus dispositivos en Firestore antes de enviar.

## 1. Instala el paquete

En el proyecto de consola `PuentePulsera`, instala desde NuGet:

```text
Google.Cloud.Firestore
```


## 2. Código completo de `Program.cs`

```csharp
using FirebaseAdmin;
using FirebaseAdmin.Messaging;
using Google.Apis.Auth.OAuth2;
using Google.Cloud.Firestore;
using MQTTnet;
using MQTTnet.Client;
using System;
using System.IO;
using System.Linq;
using System.Text;

try
{
    string rutaClave =
        @"C:\ClavesPulsera\alertapulserapro-firebase-adminsdk-fbsvc-1a1b4891d3.json";

    if (!File.Exists(rutaClave))
    {
        Console.WriteLine("No se encontró el archivo de credenciales.");
        Console.WriteLine("Revisa la ruta configurada en rutaClave.");
        Console.WriteLine("\nPresiona Enter para salir.");
        Console.ReadLine();
        return;
    }

    Environment.SetEnvironmentVariable(
        "GOOGLE_APPLICATION_CREDENTIALS",
        rutaClave);

    FirebaseApp.Create(new AppOptions
    {
        Credential = GoogleCredential.GetApplicationDefault()
    });

    var firestore = FirestoreDb.Create("alertapulserapro");

    Console.WriteLine("=== PuentePulsera: EMQX -> Firestore -> FCM ===");
    Console.WriteLine();

    Console.WriteLine(
        "Escribe el UID del usuario destinatario registrado en Firestore:");

    string uidDestino = Console.ReadLine()?.Trim() ?? "";

    if (string.IsNullOrWhiteSpace(uidDestino) ||
        uidDestino.Contains('/'))
    {
        Console.WriteLine("El UID está vacío o tiene un formato inválido.");
        Console.WriteLine("\nPresiona Enter para salir.");
        Console.ReadLine();
        return;
    }

    Console.WriteLine();
    Console.WriteLine(
        "Pega el Address de EMQX, sin https:// ni número de puerto:");

    string servidor = Console.ReadLine()?.Trim() ?? "";

    Console.WriteLine("Escribe el usuario MQTT que creaste:");
    string usuario = Console.ReadLine()?.Trim() ?? "";

    Console.WriteLine("Escribe la contraseña MQTT (no se mostrará):");

    var claveMqtt = new StringBuilder();

    while (true)
    {
        var tecla = Console.ReadKey(intercept: true);

        if (tecla.Key == ConsoleKey.Enter)
        {
            break;
        }

        if (tecla.Key == ConsoleKey.Backspace)
        {
            if (claveMqtt.Length > 0)
            {
                claveMqtt.Length--;
            }
        }
        else if (!char.IsControl(tecla.KeyChar))
        {
            claveMqtt.Append(tecla.KeyChar);
        }
    }

    Console.WriteLine();

    if (string.IsNullOrWhiteSpace(servidor) ||
        string.IsNullOrWhiteSpace(usuario) ||
        claveMqtt.Length == 0)
    {
        Console.WriteLine("Faltan datos de conexión MQTT.");
        Console.WriteLine("\nPresiona Enter para salir.");
        Console.ReadLine();
        return;
    }

    var factory = new MqttFactory();

    using var mqtt = factory.CreateMqttClient();

    mqtt.ApplicationMessageReceivedAsync += async e =>
    {
        try
        {
            string contenido = Encoding.UTF8.GetString(
                e.ApplicationMessage.PayloadSegment);

            Console.WriteLine();
            Console.WriteLine(
                $"MQTT recibido: {e.ApplicationMessage.Topic} -> {contenido}");

            // No enviar alertas antiguas almacenadas por el broker.
            if (e.ApplicationMessage.Retain)
            {
                Console.WriteLine("Mensaje retenido ignorado.");
                return;
            }

            if (!contenido.Trim().Equals(
                    "CAIDA",
                    StringComparison.OrdinalIgnoreCase))
            {
                Console.WriteLine("No es una alerta CAIDA. Se ignora.");
                return;
            }

            Console.WriteLine(
                "Consultando los dispositivos del usuario en Firestore...");

            var dispositivos = await firestore
                .Collection("usuarios")
                .Document(uidDestino)
                .Collection("dispositivos")
                .GetSnapshotAsync();

            var tokens = dispositivos.Documents
                .Where(doc => doc.ContainsField("token"))
                .Select(doc => doc.GetValue<string>("token"))
                .Where(valor => !string.IsNullOrWhiteSpace(valor))
                .Distinct()
                .ToList();

            if (tokens.Count == 0)
            {
                Console.WriteLine(
                    "No hay tokens registrados para el UID indicado.");

                Console.WriteLine(
                    "Comprueba el UID y activa las notificaciones en la app.");

                return;
            }

            Console.WriteLine(
                $"Tokens encontrados para ese usuario: {tokens.Count}");

            int aceptados = 0;
            int fallidos = 0;

            foreach (string tokenDestino in tokens)
            {
                try
                {
                    var mensaje = new Message
                    {
                        Token = tokenDestino,

                        Notification = new Notification
                        {
                            Title = "Alerta de pulsera",

                            Body =
                                "Prueba desde MQTT: se detectó una posible caída."
                        },

                        Android = new AndroidConfig
                        {
                            Priority = Priority.High
                        }
                    };

                    await FirebaseMessaging
                        .DefaultInstance
                        .SendAsync(mensaje);

                    aceptados++;
                }
                catch (FirebaseMessagingException ex)
                {
                    fallidos++;

                    Console.WriteLine(
                        $"Firebase rechazó un envío. " +
                        $"Código: {ex.MessagingErrorCode}");
                }
                catch (Exception ex)
                {
                    fallidos++;

                    Console.WriteLine(
                        $"No se pudo completar un envío: {ex.Message}");
                }
            }

            Console.WriteLine(
                $"Envíos aceptados por Firebase: {aceptados}. " +
                $"Fallidos: {fallidos}.");
        }
        catch (Exception ex)
        {
            Console.WriteLine("Error procesando la alerta:");
            Console.WriteLine(ex.Message);
        }
    };

    mqtt.DisconnectedAsync += e =>
    {
        Console.WriteLine();
        Console.WriteLine(
            $"MQTT desconectado. Motivo: {e.Reason}");

        Console.WriteLine(
            "Si no detuviste el puente, revisa la conexión y vuelve a ejecutarlo.");

        return System.Threading.Tasks.Task.CompletedTask;
    };

    var opciones = new MqttClientOptionsBuilder()
        .WithClientId(
            "PuentePulsera-" + Guid.NewGuid().ToString("N"))
        .WithTcpServer(servidor, 8883)
        .WithCredentials(usuario, claveMqtt.ToString())
        .WithTlsOptions(tls => tls.UseTls())
        .Build();

    claveMqtt.Clear();

    Console.WriteLine();
    Console.WriteLine("Conectando a EMQX...");

    await mqtt.ConnectAsync(opciones);

    var suscripcion = factory
        .CreateSubscribeOptionsBuilder()
        .WithTopicFilter(f => f.WithTopic("pulsera/prueba"))
        .Build();

    var resultadoSuscripcion = await mqtt.SubscribeAsync(suscripcion);

    foreach (var item in resultadoSuscripcion.Items)
    {
        Console.WriteLine(
            $"Resultado de suscripción: {item.ResultCode}");
    }

    Console.WriteLine();
    Console.WriteLine("Conectado a EMQX.");
    Console.WriteLine("Esperando CAIDA en el tema pulsera/prueba.");
    Console.WriteLine(
        "Los destinatarios se consultarán en Firestore en cada alerta.");

    Console.WriteLine();
    Console.WriteLine("Mantén esta consola abierta.");
    Console.WriteLine("Presiona Enter para detener el puente.");

    Console.ReadLine();

    if (mqtt.IsConnected)
    {
        await mqtt.DisconnectAsync(
            new MqttClientDisconnectOptionsBuilder().Build());
    }
}
catch (Exception ex)
{
    Console.WriteLine();
    Console.WriteLine("ERROR:");
    Console.WriteLine(ex.Message);
    Console.WriteLine("\nPresiona Enter para salir.");
    Console.ReadLine();
}
```


## 3. Qué introducir al ejecutarlo

La consola te pedirá:

1. El UID del usuario: en Firestore, es el documento que aparece inmediatamente debajo de `usuarios`.

```text
usuarios
└── COPIA_ESTE_UID
    └── dispositivos
        └── ID de instalación
```

2. El Address de EMQX, sin `https://` ni `:8883`.
3. Tu usuario MQTT.
4. Tu contraseña MQTT, que no se mostrará al escribirla.

No te pedirá el token: lo leerá de Firestore.

## Alcance de esta versión

- Envía a los tokens guardados bajo el UID que introduzcas, no a todos los usuarios.
- Conserva la configuración MQTTnet que ya estabas usando.
- Debes mantener el puente ejecutándose en la laptop.
- No incluye reconexión automática: si pierde la conexión MQTT, lo indicará y tendrás que volver a ejecutarlo.
- El mensaje `Envíos aceptados por Firebase` informa del resultado del envío, no confirma visualmente que el teléfono haya mostrado la notificación.

No compartas el JSON de credenciales, la contraseña MQTT ni los tokens. Si aparece un error, comparte solo el mensaje ocultando cualquier dato sensible.

---

# ya

Va, bro. Ahora ejecuta **`PuentePulsera`** y completa en su consola:

1. El UID que aparece en Firestore debajo de `usuarios`, no el ID de `dispositivos`.
2. El Address de EMQX, sin `https://` ni puerto.
3. Tu usuario y contraseña MQTT.

No me compartas esos valores.

Cuando termine de conectar, debería mostrar:

```text
Conectado a EMQX.
Esperando CAIDA en el tema pulsera/prueba.
```

Dime si llega a esos mensajes o qué error aparece. Todavía no demos por probado el envío: primero confirmamos que el puente arranque y conecte.

---

# shi

Va, bro, entonces el puente ya conecta a EMQX. Déjalo abierto.

Ahora, desde el cliente de prueba de EMQX, publica:

```text
Tema: pulsera/prueba
Mensaje: CAIDA
Retain: desactivado
```

Según el código que acabamos de poner, el puente debería mostrar algo parecido a:

```text
MQTT recibido: pulsera/prueba -> CAIDA
Consultando los dispositivos del usuario en Firestore...
Tokens encontrados para ese usuario: 1
Envíos aceptados por Firebase: 1. Fallidos: 0.
```

El número dependerá de los tokens guardados bajo ese UID.

¿Qué aparece en la consola después de publicar `CAIDA` y llega la notificación al Android?

---

# cual es el uid no se donde esta

Bro, el **UID** está en Firestore: es el nombre del documento que aparece justo después de la colección `usuarios`.

## Dónde encontrarlo

1. Abre Firebase → “Firestore Database” → “Datos”.
2. Haz clic en la colección `usuarios`.
3. En la columna de al lado aparecerá un identificador largo de letras y números. Ese es el UID que necesitas copiar.

La estructura que guarda tu código es esta:

```text
usuarios
└── ESTE_ES_EL_UID           ← copia este
    └── dispositivos
        └── ID de instalación
            ├── token
            ├── plataforma
            └── actualizadoUtc
```

Pégalo en la consola de `PuentePulsera` cuando te pida el UID y presiona Enter.

No es el campo `token`, ni el documento que está dentro de `dispositivos`, ni `alertapulserapro`. Si no ubicas la columna, mándame una captura después de abrir `usuarios`, sin mostrar el valor del token.

---

# eso

Sí, bro, ese identificador que aparece debajo de `usuarios` es el **UID**.[^19_1]

Cópialo completo y pégalo en la consola de `PuentePulsera` cuando te lo pida; después presiona Enter.

En la captura se corta por la derecha, así que no copies solo la parte visible ni agregues `usuarios/`: necesitas únicamente el identificador completo.

<span style="display:none">[^19_10][^19_11][^19_12][^19_13][^19_14][^19_15][^19_16][^19_17][^19_18][^19_2][^19_3][^19_4][^19_5][^19_6][^19_7][^19_8][^19_9]</span>

<div align="center">⁂</div>

[^19_1]: imagen.jpg

[^19_2]: imagen.jpg

[^19_3]: imagen.jpg

[^19_4]: imagen.jpg

[^19_5]: imagen.jpg

[^19_6]: imagen.jpg

[^19_7]: imagen.jpg

[^19_8]: imagen.jpg

[^19_9]: imagen.jpg

[^19_10]: imagen.jpg

[^19_11]: imagen.jpg

[^19_12]: imagen.jpg

[^19_13]: imagen.jpg

[^19_14]: imagen.jpg

[^19_15]: imagen.jpg

[^19_16]: imagen.jpg

[^19_17]: imagen.jpg

[^19_18]: imagen.jpg


---

# imagen.png

Bro, la captura confirma que el puente conecta a EMQX y recibe `CAIDA`. El problema está después: la consulta no encontró tokens para el UID que introdujiste. Todavía no intentó enviar la notificación.[^20_1]

Por el código que pusimos, ese mensaje puede salir si el UID no coincide, si no hay documentos en su subcolección `dispositivos` o si esos documentos no tienen un campo `token` con contenido. No cambiemos el código todavía.

## Revisa esta ruta exacta

En Firestore, abre:

```text
usuarios
└── UID que introdujiste en la consola
    └── dispositivos
        └── ID de instalación
            └── token
```

1. Haz clic en el documento debajo de `usuarios`.
2. Comprueba que dentro aparezca `dispositivos`.
3. Abre `dispositivos` y luego el documento que contiene.
4. Confirma que existe el campo `token` y tiene un valor, sin compartirlo.

Si esa ruta sí tiene el token, detén el puente con Enter, ejecútalo otra vez y vuelve a introducir el UID completo, respetando mayúsculas y minúsculas, sin `usuarios/` ni comillas. Después publica otra vez `CAIDA`.

¿Dentro del UID que seleccionaste sí aparece `dispositivos` con un documento y su campo `token`?

<div align="center">⁂</div>

[^20_1]: imagen.jpg


---

# imagen.png

Bro, aquí ya se ve algo concreto: el documento dentro de `dispositivos` está vacío. A la derecha dice “Este documento no contiene datos”; no aparecen `token`, `plataforma` ni `actualizadoUtc`.[^21_1]

Así que corrijo lo que dimos por confirmado: apareció la estructura en Firestore, pero esta captura no muestra el token guardado. No lo agregues manualmente; necesitamos revisar qué guardó la app.

## Primero haz esta comprobación

1. Deja abierta esa pantalla de Firestore.
2. En la app actualizada, pulsa otra vez “Activar notificaciones”.
3. Comprueba si termina exactamente con:

```text
Token registrado correctamente.
```

4. Actualiza la página de Firestore y vuelve a abrir el documento dentro de `dispositivos`.

Según el método que me compartiste, ese documento debería recibir estos tres campos:

```text
token
plataforma
actualizadoUtc
```

Si sigue vacío aunque la app diga `Token registrado correctamente.`, pégame únicamente el bloque actual que va desde:

```csharp
var datos = new Dictionary<string, object>
```

hasta:

```csharp
.SetDataAsync(datos);
```

Necesitamos ver cómo quedó en el código actual antes de cambiar nada más. No compartas el valor del token.

<div align="center">⁂</div>

[^21_1]: imagen.jpg


---

# si sale registrado y todo, refresque la pagina y aun no sale token

Va, bro. Entonces no es cuestión de refrescar otra vez. Hay que revisar cómo el plugin está convirtiendo los datos antes de guardarlos.

Tu código usaba `Dictionary<string, object>`, mientras que las pruebas del propio **Plugin.Firebase** muestran escrituras con `Dictionary<object, object>`. Vamos a probar ese cambio puntual; todavía no podemos asegurar que sea la causa, pero es una diferencia concreta que podemos comprobar.[^22_1]

## 1. Cambia solo este bloque en la app

En `MainPage.xaml.cs`, dentro de `OnActivarClicked`, reemplaza desde `var datos = ...` hasta el mensaje de éxito por esto:

```csharp
var datos = new Dictionary<object, object>
{
    { "token", token },
    { "plataforma", "android" },
    { "actualizadoUtc", DateTime.UtcNow.ToString("O") }
};

var ruta =
    $"usuarios/{usuario.Uid}/dispositivos/{instalacionId}";

await CrossFirebaseFirestore.Current
    .GetDocument(ruta)
    .SetDataAsync(datos);

EstadoLabel.Text = "Token registrado correctamente.";

await DisplayAlert(
    "Registro ejecutado",
    $"Revisa esta ruta en Firestore:\n\n{ruta}",
    "Aceptar");
```

El aviso muestra únicamente la ruta, no el token, y nos permitirá comprobar qué documento está usando realmente la app.

## 2. Ejecuta y comprueba

1. Guarda y ejecuta la app actualizada desde Visual Studio.
2. Pulsa “Activar notificaciones”.
3. Comprueba que aparece la nueva ventana “Registro ejecutado”. Si no aparece, no estás ejecutando este cambio.
4. En Firestore abre exactamente la ruta que indique la ventana.

Ahí deberían aparecer:

```text
token
plataforma
actualizadoUtc
```

No cambies todavía `PuentePulsera`, las reglas de Firestore ni agregues campos manualmente. Primero confirma si con este cambio ya aparecen los tres campos.

<span style="display:none">[^22_10][^22_2][^22_3][^22_4][^22_5][^22_6][^22_7][^22_8][^22_9]</span>

<div align="center">⁂</div>

[^22_1]: https://github.com/TobiasBuchholz/Plugin.Firebase/blob/master/tests/Plugin.Firebase.IntegrationTests/Firestore/FirestoreFixture.cs

[^22_2]: https://firebase.google.com/docs/firestore/query-data/get-data

[^22_3]: https://stackoverflow.com/questions/62392183/why-is-firestores-getdocument-method-returning-an-empty-dictionary

[^22_4]: https://rnfirebase.io/firestore/usage

[^22_5]: https://github.com/firebase/flutterfire/issues/12755

[^22_6]: https://softauthor.com/firebase-cloud-firestore-update-document-data/

[^22_7]: https://pub.dev/documentation/firebase_storage/latest/

[^22_8]: https://firebase.google.cn/docs/firestore/query-data/queries?hl=ar

[^22_9]: https://firebase.google.com/docs/firestore/manage-data/add-data

[^22_10]: https://github.com/TobiasBuchholz/Plugin.Firebase/blob/development/docs/firestore.md


---

# using Plugin.BLE;

using Plugin.BLE.Abstractions;
using Plugin.BLE.Abstractions.Contracts;
using Plugin.BLE.Abstractions.EventArgs;
using Plugin.Firebase.CloudMessaging;
using Plugin.Firebase.Auth;
using Plugin.Firebase.Firestore;

namespace AlertaPulsera;

public partial class MainPage : ContentPage
{
private IAdapter? \_adapter;
private readonly HashSet\<Guid> \_dispositivosVistos = new();
private bool \_buscando;
private bool \_paginaVisible;

```
public MainPage()
{
    InitializeComponent();
}

protected override void OnAppearing()
{
    base.OnAppearing();
    _paginaVisible = true;
}

protected override async void OnDisappearing()
{
    _paginaVisible = false;
    base.OnDisappearing();

    try
    {
        if (_adapter?.IsScanning == true)
        {
            await _adapter.StopScanningForDevicesAsync();
        }
    }
    catch (Exception ex)
    {
        System.Diagnostics.Debug.WriteLine(ex);
    }
}

private async void OnBuscarBluetoothClicked(
    object sender,
    EventArgs e)
{
    if (_buscando)
        return;

    _buscando = true;
    BuscarBluetoothButton.IsEnabled = false;

    try
    {
        EstadoBluetoothLabel.Text = "Solicitando permisos...";

        var permiso = await Permissions
            .RequestAsync<PermisosBluetooth>();

        if (permiso != PermissionStatus.Granted)
        {
            EstadoBluetoothLabel.Text =
                "Debes permitir el acceso a dispositivos cercanos " +
                "o ubicación, según tu versión de Android.";
            return;
        }

        var bluetooth = CrossBluetoothLE.Current;

        if (bluetooth.State != BluetoothState.On)
        {
            EstadoBluetoothLabel.Text =
                "Bluetooth no disponible o apagado. " +
                "Actívalo en los ajustes del celular.";
            return;
        }

        _adapter = bluetooth.Adapter;
        _adapter.ScanTimeout = 10000;

        _dispositivosVistos.Clear();
        DispositivosLayout.Children.Clear();

        _adapter.DeviceDiscovered += OnDispositivoEncontrado;

        EstadoBluetoothLabel.Text =
            "Buscando dispositivos BLE durante 10 segundos...";

        await _adapter.StartScanningForDevicesAsync();

        if (_paginaVisible)
        {
            EstadoBluetoothLabel.Text =
                $"Búsqueda terminada: " +
                $"{_dispositivosVistos.Count} dispositivos encontrados.";
        }
    }
    catch (Exception ex)
    {
        EstadoBluetoothLabel.Text = "No se pudo buscar Bluetooth.";

        await DisplayAlert(
            "Bluetooth",
            ex.Message,
            "Aceptar");
    }
    finally
    {
        if (_adapter != null)
        {
            _adapter.DeviceDiscovered -= OnDispositivoEncontrado;
        }

        _buscando = false;
        BuscarBluetoothButton.IsEnabled = true;
    }
}

private void OnDispositivoEncontrado(
    object? sender,
    DeviceEventArgs e)
{
    var dispositivo = e.Device;

    MainThread.BeginInvokeOnMainThread(() =>
    {
        if (!_paginaVisible || !_buscando)
            return;

        if (!_dispositivosVistos.Add(dispositivo.Id))
            return;

        string nombre = string.IsNullOrWhiteSpace(dispositivo.Name)
            ? "Dispositivo sin nombre"
            : dispositivo.Name;

        DispositivosLayout.Children.Add(new Label
        {
            Text = $"{nombre}\n" +
                   $"ID: {dispositivo.Id}\n" +
                   $"Señal: {dispositivo.Rssi} dBm",
            FontSize = 14,
            Margin = new Thickness(0, 5)
        });
    });
}

private async void OnActivarClicked(object sender, EventArgs e)
{
    if (sender is Button boton)
        boton.IsEnabled = false;

    try
    {
        EstadoLabel.Text = "Configurando...";
```

\#if ANDROID
if (OperatingSystem.IsAndroidVersionAtLeast(33))
{
var permiso = await Permissions
.RequestAsync\<Permissions.PostNotifications>();

```
            if (permiso != PermissionStatus.Granted)
            {
                EstadoLabel.Text =
                    "Debes permitir las notificaciones.";
                return;
            }
        }
```

\#endif

```
        EstadoLabel.Text = "Iniciando sesión...";

        var auth = CrossFirebaseAuth.Current;
        var usuario = auth.CurrentUser;

        if (usuario == null)
        {
            usuario = await auth.SignInAnonymouslyAsync();
        }

        if (usuario == null)
        {
            throw new InvalidOperationException(
                "No se pudo iniciar la sesión.");
        }

        EstadoLabel.Text = "Obteniendo token...";

        var token = await CrossFirebaseCloudMessaging
            .Current.GetTokenAsync();

        if (string.IsNullOrWhiteSpace(token))
        {
            throw new InvalidOperationException(
                "Firebase no devolvió un token.");
        }

        TokenEditor.Text = token;

        const string claveInstalacion = "pulsera_instalacion_id";

        var instalacionId = Preferences.Default.Get(
            claveInstalacion,
            string.Empty);

        if (string.IsNullOrWhiteSpace(instalacionId))
        {
            instalacionId = Guid.NewGuid().ToString("N");

            Preferences.Default.Set(
                claveInstalacion,
                instalacionId);
        }

        EstadoLabel.Text = "Guardando token en Firebase...";

        var datos = new Dictionary<string, object>
        {
            ["token"] = token,
            ["plataforma"] = "android",
            ["actualizadoUtc"] = DateTime.UtcNow.ToString("O")
        };

        var ruta =
            $"usuarios/{usuario.Uid}/dispositivos/{instalacionId}";

        await CrossFirebaseFirestore.Current
            .GetDocument(ruta)
            .SetDataAsync(datos);

        EstadoLabel.Text = "Token registrado correctamente.";
    }
    catch (Exception ex)
    {
        EstadoLabel.Text = "No se pudo registrar el token.";

        await DisplayAlert(
            "Configuración",
            ex.Message,
            "Aceptar");
    }
    finally
    {
        if (sender is Button botonFinal)
            botonFinal.IsEnabled = true;
    }
}

private async void OnCopiarClicked(object sender, EventArgs e)
{
    if (!string.IsNullOrWhiteSpace(TokenEditor.Text))
    {
        await Clipboard.Default.SetTextAsync(TokenEditor.Text);

        await DisplayAlert(
            "Listo",
            "Token copiado.",
            "Aceptar");
    }
}
```

}

Sí, bro: en el código que acabas de pegar todavía está `Dictionary<string, object>`. Aún no tiene el cambio que vamos a probar.

No toques la parte de Bluetooth. Dentro de `OnActivarClicked`, reemplaza este bloque:

```csharp
var datos = new Dictionary<string, object>
{
    ["token"] = token,
    ["plataforma"] = "android",
    ["actualizadoUtc"] = DateTime.UtcNow.ToString("O")
};

var ruta =
    $"usuarios/{usuario.Uid}/dispositivos/{instalacionId}";

await CrossFirebaseFirestore.Current
    .GetDocument(ruta)
    .SetDataAsync(datos);

EstadoLabel.Text = "Token registrado correctamente.";
```

por este:

```csharp
var datos = new Dictionary<object, object>
{
    { "token", token },
    { "plataforma", "android" },
    { "actualizadoUtc", DateTime.UtcNow.ToString("O") }
};

var ruta =
    $"usuarios/{usuario.Uid}/dispositivos/{instalacionId}";

await CrossFirebaseFirestore.Current
    .GetDocument(ruta)
    .SetDataAsync(datos);

EstadoLabel.Text = "Token registrado correctamente.";

await DisplayAlert(
    "Registro ejecutado",
    $"Revisa esta ruta en Firestore:\n\n{ruta}",
    "Aceptar");
```


## Después del cambio

1. Guarda y ejecuta la app desde Visual Studio.
2. Pulsa “Activar notificaciones”.
3. Comprueba que aparezca la nueva ventana **“Registro ejecutado”**. Esa será nuestra señal de que se ejecutó esta modificación.
4. Actualiza Firestore y abre exactamente la ruta que indique esa ventana.

Lo que buscamos es que el documento deje de estar vacío y muestre `token`, `plataforma` y `actualizadoUtc`. No agregues esos campos a mano ni cambies el puente todavía; primero comprobemos el resultado de esta prueba.

---

# no salio pero igual yo creo q se esta corriendo la version pasada

Sí, bro: si no apareció la ventana nueva, todavía no confirmamos que esté ejecutándose ese cambio. Pero no demos por hecho que sea una versión vieja: vamos a comprobar directamente si entra al método que estás editando.

## Pon un punto de interrupción

1. En `MainPage.xaml.cs`, busca esta línea dentro de `OnActivarClicked`:

```csharp
EstadoLabel.Text = "Configurando...";
```

2. Haz clic en el margen izquierdo de esa línea. Debe aparecer un círculo rojo.
3. Guarda todo y ejecuta con **F5**.
4. Pulsa “Activar notificaciones” en la app.

Dime si Visual Studio se detiene en esa línea y la marca en amarillo.

- Si se detiene, comprobaremos qué instrucciones ejecuta a continuación.
- Si no se detiene, revisaremos el proyecto, el dispositivo y el enlace del botón.

No borres ni desinstales nada todavía. Esta prueba nos ayudará a distinguir el problema sin seguir cambiando Firebase.

---

# ya pero no me esta llegando la notificacion

Ya avanzamos, bro: ahora el puente recibe `CAIDA`, encuentra **1 token** y reporta **1 envío aceptado**, sin fallos. Eso aparece en tu captura. Pero que Firebase acepte el mensaje no confirma que el celular lo haya recibido ni mostrado; son etapas distintas.[^25_1][^25_2]

## Primero prueba con la app en segundo plano

En el envío habitual de FCM, una notificación puede mostrarse automáticamente con la app en segundo plano, mientras que con la app abierta necesita manejo adicional para mostrarse. Por eso vamos a separar esos dos casos antes de modificar más código.[^25_3]

1. Abre `AlertaPulsera` en el celular.
2. Pulsa el botón Inicio del teléfono para dejarla en segundo plano. No uses “Forzar detención”.
3. Deja el puente ejecutándose en la laptop.
4. Vuelve a enviar `CAIDA` a `pulsera/prueba`.
5. Revisa también la cortina de notificaciones, no solo si aparece un aviso emergente.

Esta prueba depende de que el puente envíe un bloque `Notification`; un mensaje que solo contiene `Data` no se convierte automáticamente en una notificación visible.[^25_3]

## Si tampoco aparece

Pégame únicamente el bloque de `PuentePulsera` donde construyes y envías el mensaje: desde `new Message` o `new MulticastMessage` hasta la llamada `Send…Async`.

Con eso podremos comprobar si estás enviando una notificación con título y cuerpo o solamente datos. No pegues el token, contraseñas MQTT ni el archivo de credenciales.

¿Con la app en segundo plano aparece en la cortina de notificaciones?

<span style="display:none">[^25_10][^25_11][^25_12][^25_13][^25_14][^25_15][^25_16][^25_17][^25_18][^25_19][^25_20][^25_21][^25_22][^25_23][^25_24][^25_25][^25_26][^25_27][^25_28][^25_29][^25_30][^25_31][^25_4][^25_5][^25_6][^25_7][^25_8][^25_9]</span>

<div align="center">⁂</div>

[^25_1]: imagen.jpg

[^25_2]: https://firebase.google.com/docs/cloud-messaging/understand-delivery

[^25_3]: https://firebase.google.com/docs/cloud-messaging/android/receive?authuser=00

[^25_4]: imagen.jpg

[^25_5]: imagen.jpg

[^25_6]: imagen.jpg

[^25_7]: imagen.jpg

[^25_8]: imagen.jpg

[^25_9]: imagen.jpg

[^25_10]: imagen.jpg

[^25_11]: imagen.jpg

[^25_12]: imagen.jpg

[^25_13]: imagen.jpg

[^25_14]: imagen.jpg

[^25_15]: imagen.jpg

[^25_16]: imagen.jpg

[^25_17]: imagen.jpg

[^25_18]: imagen.jpg

[^25_19]: imagen.jpg

[^25_20]: imagen.jpg

[^25_21]: imagen.jpg

[^25_22]: imagen.jpg

[^25_23]: imagen.jpg

[^25_24]: https://firebase.google.com/docs/cloud-messaging/receive-messages?platform=android\&authuser=002

[^25_25]: https://firebase.google.com/docs/cloud-messaging/android/receive-messages?authuser=4

[^25_26]: https://firebase.google.com/docs/cloud-messaging/android/receive-messages

[^25_27]: https://firebase.google.com/docs/cloud-messaging/receive-messages

[^25_28]: https://firebase.google.com/docs/cloud-messaging/android/get-started

[^25_29]: https://firebase.google.com/docs/cloud-messaging/troubleshooting

[^25_30]: https://firebase.google.com/docs/cloud-messaging/manage-tokens

[^25_31]: https://firebase.google.com/docs/cloud-messaging/android/receive-messages.md.txt


---

# lo tengo q mandar como json? o plain text el mensaje de caida

Mándalo como **Plain text**, bro, igual que en la prueba que ya llegó al puente:

- Topic: `pulsera/prueba`
- Formato: `Plain text`
- Mensaje exacto:

```text
CAIDA
```

Sin comillas, sin llaves y sin acento.

Tu captura ya muestra que con ese mensaje el puente recibe `CAIDA`, encuentra el token y ejecuta el envío a Firebase. No necesitas cambiarlo a JSON para esta prueba.[^26_1]

El bloque `Notification` que te mencioné es parte del código de envío de `PuentePulsera`, no del texto que publicas en MQTT.

<div align="center">⁂</div>

[^26_1]: imagen.jpg


---

# {

try
{
var mensaje = new Message
{
Token = tokenDestino,

```
                    Notification = new Notification
                    {
                        Title = "Alerta de pulsera",

                        Body =
                            "Prueba desde MQTT: se detectó una posible caída."
                    },

                    Android = new AndroidConfig
                    {
                        Priority = Priority.High
                    }
                };

                await FirebaseMessaging
                    .DefaultInstance
                    .SendAsync(mensaje);

                aceptados++;
            }
            catch (FirebaseMessagingException ex)
            {
                fallidos++;

                Console.WriteLine(
                    $"Firebase rechazó un envío. " +
                    $"Código: {ex.MessagingErrorCode}");
            }
            catch (Exception ex)
            {
                fallidos++;

                Console.WriteLine(
                    $"No se pudo completar un envío: {ex.Message}");
            }
        }

        Console.WriteLine(
            $"Envíos aceptados por Firebase: {aceptados}. " +
            $"Fallidos: {fallidos}.");
    }
    catch (Exception ex)
    {
        Console.WriteLine("Error procesando la alerta:");
        Console.WriteLine(ex.Message);
    }
};

mqtt.DisconnectedAsync += e =>
{
    Console.WriteLine();
    Console.WriteLine(
        $"MQTT desconectado. Motivo: {e.Reason}");

    Console.WriteLine(
        "Si no detuviste el puente, revisa la conexión y vuelve a ejecutarlo.");

    return System.Threading.Tasks.Task.CompletedTask;
};

var opciones = new MqttClientOptionsBuilder()
    .WithClientId(
        "PuentePulsera-" + Guid.NewGuid().ToString("N"))
    .WithTcpServer(servidor, 8883)
    .WithCredentials(usuario, claveMqtt.ToString())
    .WithTlsOptions(tls => tls.UseTls())
    .Build();

claveMqtt.Clear();

Console.WriteLine();
Console.WriteLine("Conectando a EMQX...");

await mqtt.ConnectAsync(opciones);

var suscripcion = factory
    .CreateSubscribeOptionsBuilder()
    .WithTopicFilter(f => f.WithTopic("pulsera/prueba"))
    .Build();

var resultadoSuscripcion = await mqtt.SubscribeAsync(suscripcion);

foreach (var item in resultadoSuscripcion.Items)
{
    Console.WriteLine(
        $"Resultado de suscripción: {item.ResultCode}");
}

Console.WriteLine();
Console.WriteLine("Conectado a EMQX.");
Console.WriteLine("Esperando CAIDA en el tema pulsera/prueba.");
Console.WriteLine(
    "Los destinatarios se consultarán en Firestore en cada alerta.");

Console.WriteLine();
Console.WriteLine("Mantén esta consola abierta.");
Console.WriteLine("Presiona Enter para detener el puente.");

Console.ReadLine();

if (mqtt.IsConnected)
{
    await mqtt.DisconnectAsync(
        new MqttClientDisconnectOptionsBuilder().Build());
}
```

}
catch (Exception ex)
{
Console.WriteLine();
Console.WriteLine("ERROR:");
Console.WriteLine(ex.Message);
Console.WriteLine("\\nPresiona Enter para salir.");
Console.ReadLine();
} en advertencia dice message.token esta obsoleto

Sí, bro: el bloque que pegaste sí incluye `Notification`, con título y cuerpo. No estás enviando solamente datos.

Sobre la advertencia: **`Message.Token`** fue marcado como obsoleto en Firebase Admin .NET 3.6.0; las notas oficiales indican que la alternativa nueva es `Fid`. Eso no demuestra que la advertencia sea la causa de que no aparezca la notificación.[^27_1]

## No cambies `Token` por `Fid` todavía

Tu `tokenDestino` contiene el token FCM obtenido con `GetTokenAsync()`. No debemos pasarlo sin más a una propiedad destinada a un identificador de instalación Firebase. Además, el `instalacionId` de tu app es un GUID generado por ti, no un FID de Firebase.

Deja el puente como está por ahora: necesitamos revisar la recepción y visualización en Android, no cambiar a la vez el tipo de destinatario.

## Comprueba el permiso en el celular

Ve a:

```text
Ajustes → Aplicaciones → AlertaPulsera → Notificaciones
```

Comprueba que estén permitidas. Si aparecen categorías o canales de notificación, revisa también que estén habilitados. Android permite bloquear las notificaciones de la aplicación y controlar su comportamiento por canal.[^27_2][^27_3]

Después:

1. Abre `AlertaPulsera`.
2. Pulsa Inicio para dejarla en segundo plano, sin forzar su detención.
3. Publica `CAIDA` como texto plano en `pulsera/prueba`.
4. Revisa la cortina de notificaciones.

## Si sigue sin aparecer

Pégame el contenido actual de estos archivos de la app, no del puente:

- `Platforms/Android/MainActivity.cs`
- `Platforms/Android/AndroidManifest.xml`
- La parte de `MauiProgram.cs` donde inicializas Firebase.

No incluyas `google-services.json`, tokens ni credenciales. Con esos bloques podremos revisar la configuración Android antes de proponerte otro cambio.

<span style="display:none">[^27_10][^27_11][^27_12][^27_13][^27_14][^27_15][^27_4][^27_5][^27_6][^27_7][^27_8][^27_9]</span>

<div align="center">⁂</div>

[^27_1]: https://firebase.google.com/support/release-notes/admin/dotnet

[^27_2]: https://developer.android.com/develop/ui/compose/notifications/notification-permission

[^27_3]: https://developer.android.com/develop/ui/compose/notifications/channels

[^27_4]: https://stackoverflow.com/questions/79057439/how-to-create-a-persistent-notification-channel-in-android-to-access-and-modify

[^27_5]: https://firebase.google.com/docs/auth/admin/errors

[^27_6]: https://dev.to/senanurincekara/how-to-receive-firebase-notifications-in-the-background-in-android-3kf8

[^27_7]: https://github.com/zo0r/react-native-push-notification/issues/1496

[^27_8]: https://github.com/firebase/firebase-admin-node/issues/2822

[^27_9]: https://learn.microsoft.com/en-gb/answers/questions/1181354/how-can-i-request-permission-for-push-notification

[^27_10]: https://github.com/firebase/firebase-admin-dotnet/issues

[^27_11]: https://github.com/firebase/firebase-admin-dotnet/issues/370

[^27_12]: https://firebase.google.com/docs/cloud-messaging/send/v2-api

[^27_13]: https://firebase.google.com/docs/cloud-messaging/android/get-started

[^27_14]: https://context7.com/firebase/firebase-admin-dotnet

[^27_15]: https://firebase.google.com/docs/cloud-messaging/manage-tokens


---

# ya jalo

¡Excelente, bro! Entonces ya funcionó la prueba completa:

```text
CAIDA en MQTT → PuentePulsera → Firebase → notificación en el celular
```

Por ahora deja el código como está y mantén **PuentePulsera** ejecutándose en la laptop para seguir haciendo pruebas.

La prueba que acabas de confirmar es con la app en el estado en que la tenías; todavía no demos por comprobado que se muestre igual con la app abierta en pantalla.

---

# y q mas hago

Ahora sigue **hacer que la ESP32 mande la alerta**, bro, en lugar de escribir `CAIDA` manualmente. Primero probaría ese paso solo, antes de mezclar sensores y Bluetooth.

## 1. Prueba el envío desde la ESP32

La siguiente prueba sería:

```text
ESP32 publica CAIDA en pulsera/prueba
                  ↓
PuentePulsera lo recibe en la laptop
                  ↓
Llega la notificación al celular
```

Por ahora propondría dispararlo con un comando desde el monitor serie o un botón, sin depender todavía de detectar una caída. Así comprobamos esa conexión por separado.

## 2. Después integra la detección

El comportamiento que habías planteado era: detectar una posible caída, activar buzzer y vibración, esperar **10 segundos** para cancelar con el botón y enviar la alerta si no se cancela. Ese sigue siendo el objetivo de la integración.

```text
Posible caída
      ↓
Buzzer + vibración
      ↓
¿Se cancela dentro de 10 segundos?
      ├─ Sí → cancelar aviso
      └─ No → publicar CAIDA
```


## 3. Luego completa la configuración desde la app

Después retomaría la parte de Bluetooth para enviarle la red Wi-Fi a la pulsera desde la app, que también formaba parte de tu diseño.

No cambiemos todo a la vez: conserva el puente que ya funcionó y avancemos con la ESP32.

¿La ESP32 ya se conecta a EMQX y publica mensajes, o todavía falta esa parte?

<span style="display:none">[^29_1][^29_2][^29_3][^29_4][^29_5]</span>

<div align="center">⁂</div>

[^29_1]: https://www.perplexity.ai/search/0432475b-d279-4244-9a2f-a50478fedb57

[^29_2]: https://www.perplexity.ai/search/b83611e6-4a31-4765-8800-61e2f5d9567c

[^29_3]: https://www.perplexity.ai/search/b8e6bc14-6181-4bad-8c78-a3fcc74b4209

[^29_4]: https://www.perplexity.ai/search/1b117272-336d-4a27-9ed0-7e739a5dcaed

[^29_5]: https://www.perplexity.ai/search/adcb8e72-f4e3-47e9-a7f1-625908ccf83d


---

# necesito que tambien mande la notificacion con la app ejecutandose

Sí, bro: necesitas que aparezca también con **la app abierta en pantalla**, no solo minimizada.

En Android, Firebase entrega esos mensajes a la app cuando está en primer plano, pero la presentación de la notificación necesita manejo del lado de la aplicación. En tu caso, `Plugin.Firebase.CloudMessaging` ya incluye una función para mostrar notificaciones locales; su configuración de Android requiere crear un canal y asignarlo a `FirebaseCloudMessagingImplementation.ChannelId`. No agreguemos otro plugin todavía.[^30_1][^30_2]

## Qué vamos a cambiar

El ajuste será en **AlertaPulsera**, no en `PuentePulsera`. El puente puede seguir enviando el mismo `Notification` con título y cuerpo.

Pégame el contenido actual de:

```text
Platforms/Android/MainActivity.cs
```

Y dime qué versión tienes instalada de:

```text
Plugin.Firebase.CloudMessaging
```

La puedes ver en Visual Studio, en las dependencias de paquetes NuGet del proyecto.

Con eso te preparo el archivo ajustado a tu configuración para mostrar la notificación con la app abierta, sin alterar lo que ya funciona en segundo plano.

<span style="display:none">[^30_10][^30_3][^30_4][^30_5][^30_6][^30_7][^30_8][^30_9]</span>

<div align="center">⁂</div>

[^30_1]: https://firebase.google.com/docs/cloud-messaging/android/receive?authuser=9

[^30_2]: https://github.com/TobiasBuchholz/Plugin.Firebase/blob/development/docs/cloud_messaging.md

[^30_3]: https://firebase.google.com/docs/cloud-messaging/android/receive?authuser=2

[^30_4]: https://rnfirebase.io/messaging/usage

[^30_5]: https://www.nuget.org/packages/Plugin.Firebase.CloudMessaging

[^30_6]: https://capawesome.io/docs/sdks/capacitor/firebase/cloud-messaging/

[^30_7]: https://firebase.google.com/docs/cloud-messaging/android/receive-messages

[^30_8]: https://firebase.google.com/docs/cloud-messaging/android/receive-messages.md.txt

[^30_9]: https://firebase.google.com/docs/cloud-messaging/android/get-started

[^30_10]: https://firebase.google.com/docs/cloud-messaging/troubleshooting


---

# oye pero si tengo cerrada la app no me va a mandar nada?

Sí, bro: con la app cerrada también puede llegarte la notificación. No necesitas dejarla abierta; justamente para eso estamos usando Firebase. Lo que falta ajustar es que también se muestre cuando la tienes abierta en pantalla.[^31_1]

## La diferencia es cómo la cierras

| Estado de AlertaPulsera en Android | Qué esperar |
| :-- | :-- |
| Minimizada o con el celular bloqueado | Puede recibir y mostrar la notificación. |
| Sin ejecutarse, pero sin haber usado “Forzar detención” | También puede recibirla; no necesita tener la pantalla de la app abierta. |
| Detenida desde Ajustes → “Forzar detención” | Debes abrirla otra vez para que vuelva a recibir mensajes. |
| Abierta en pantalla | El aviso no se muestra automáticamente por defecto; ese es el caso que vamos a configurar. |

Estas diferencias forman parte del comportamiento de FCM; no es lo mismo que la app no esté ejecutándose a que Android la tenga detenida explícitamente.[^31_1]

En tu montaje hay otra distinción importante: puedes cerrar la app del celular, pero **PuentePulsera** debe seguir funcionando en la laptop, porque es quien recibe `CAIDA` y hace el envío a Firebase.

Para comprobarlo ahora, deja el puente abierto, pulsa Inicio en el celular, bloquea la pantalla y manda otra vez `CAIDA`. Esa prueba verificará tu configuración actual con el teléfono bloqueado, sin cambiar código.

<span style="display:none">[^31_10][^31_2][^31_3][^31_4][^31_5][^31_6][^31_7][^31_8][^31_9]</span>

<div align="center">⁂</div>

[^31_1]: https://firebase.google.com/docs/cloud-messaging/flutter/receive-messages

[^31_2]: https://firebase.google.com/support/troubleshooter/fcm/delivery/diagnose/android/received/sent/notification/forcestop-false

[^31_3]: https://firebase.google.com/support/release-notes/ios

[^31_4]: https://firebase.google.com/docs/cloud-messaging/android-message-priority

[^31_5]: https://firebase.google.com/docs/cloud-messaging/web/receive-messages

[^31_6]: https://firebase.google.com/docs/cloud-messaging/receive-messages

[^31_7]: https://firebase.google.com/products/cloud-messaging

[^31_8]: https://firebase.google.com/docs/cloud-messaging/manage-tokens

[^31_9]: https://firebase.google.com/docs/cloud-messaging/network-configuration

[^31_10]: https://firebase.google.com/docs/remote-config


---

# si ahora que tambien muestre abierta

Sí, bro. Vamos a configurarlo en Android sin tocar el puente que ya funciona.

El plugin que usas ya contempla mostrar una notificación local con la app abierta; su documentación indica que hay que configurar el canal de notificaciones en `MainActivity`. No necesitamos instalar otro paquete de entrada.[^32_1]

## Pásame este archivo

Abre en Visual Studio:

```text
Platforms
  → Android
    → MainActivity.cs
```

Pega aquí su contenido completo. Con eso te lo devuelvo modificado, conservando la inicialización que ya tienes y sin duplicar métodos.

No es `MainPage.xaml.cs`: ahora necesitamos **`MainActivity.cs`**.

<div align="center">⁂</div>

[^32_1]: https://github.com/TobiasBuchholz/Plugin.Firebase/blob/development/docs/cloud_messaging.md


---

# using Android.App;

using Android.Content.PM;
using Android.OS;

namespace AlertaPulsera
{
[Activity(Theme = "@style/Maui.SplashTheme", MainLauncher = true, LaunchMode = LaunchMode.SingleTop, ConfigurationChanges = ConfigChanges.ScreenSize | ConfigChanges.Orientation | ConfigChanges.UiMode | ConfigChanges.ScreenLayout | ConfigChanges.SmallestScreenSize | ConfigChanges.Density)]
public class MainActivity : MauiAppCompatActivity
{
}
}

Perfecto, bro. Reemplaza todo el contenido de **`Platforms/Android/MainActivity.cs`** por este:

```csharp
using Android.App;
using Android.Content;
using Android.Content.PM;
using Android.OS;
using Plugin.Firebase.CloudMessaging;

namespace AlertaPulsera
{
    [Activity(
        Theme = "@style/Maui.SplashTheme",
        MainLauncher = true,
        LaunchMode = LaunchMode.SingleTop,
        ConfigurationChanges =
            ConfigChanges.ScreenSize |
            ConfigChanges.Orientation |
            ConfigChanges.UiMode |
            ConfigChanges.ScreenLayout |
            ConfigChanges.SmallestScreenSize |
            ConfigChanges.Density)]
    public class MainActivity : MauiAppCompatActivity
    {
        protected override void OnCreate(Bundle? savedInstanceState)
        {
            base.OnCreate(savedInstanceState);

            CrearCanalNotificaciones();
            ProcesarIntent(Intent);
        }

        protected override void OnNewIntent(Intent? intent)
        {
            base.OnNewIntent(intent);

            ProcesarIntent(intent);
        }

        private static void ProcesarIntent(Intent? intent)
        {
            if (intent != null)
            {
                FirebaseCloudMessagingImplementation.OnNewIntent(intent);
            }
        }

        private void CrearCanalNotificaciones()
        {
            if (Build.VERSION.SdkInt < BuildVersionCodes.O)
                return;

            var canalId = $"{PackageName}.alertas";

            var canal = new NotificationChannel(
                canalId,
                "Alertas de la pulsera",
                NotificationImportance.High)
            {
                Description = "Avisos de posibles caídas de la pulsera."
            };

            var administrador =
                GetSystemService(NotificationService)
                as NotificationManager;

            administrador?.CreateNotificationChannel(canal);

            FirebaseCloudMessagingImplementation.ChannelId = canalId;
        }
    }
}
```

Este cambio configura el canal que utiliza el plugin para mostrar notificaciones y añade el manejo de los intents al abrir la app desde un aviso; es el patrón de integración usado con `Plugin.Firebase.CloudMessaging` en Android.[^33_1][^33_2]

## Prueba con la app abierta

1. Guarda y detén la ejecución anterior en Visual Studio.
2. Ejecuta otra vez la app actualizada, sin desinstalarla.
3. Deja `AlertaPulsera` abierta en pantalla.
4. Mantén `PuentePulsera` ejecutándose en la laptop.
5. Publica como antes:

```text
Topic: pulsera/prueba
Mensaje: CAIDA
Formato: Plain text
```


Revisa tanto el aviso emergente como la cortina de notificaciones.

No cambies el puente ni agregues otro controlador de notificaciones todavía. Si compila pero sigue sin mostrarse abierta, el siguiente paso será revisar la versión y la configuración del plugin en `MauiProgram.cs`, en lugar de duplicar el envío.

<span style="display:none">[^33_10][^33_11][^33_12][^33_13][^33_14][^33_15][^33_3][^33_4][^33_5][^33_6][^33_7][^33_8][^33_9]</span>

<div align="center">⁂</div>

[^33_1]: https://stackoverflow.com/questions/77200988/push-notification-on-maui-application-using-fcm

[^33_2]: https://programemos.net/notificaciones-push-firebase-azure-function-maui/

[^33_3]: https://stackoverflow.com/questions/56990720/is-there-a-way-to-show-firebase-notifications-in-the-foreground-on-android-and-i

[^33_4]: https://github.com/TobiasBuchholz/Plugin.Firebase/issues/236

[^33_5]: https://stackoverflow.com/questions/76045900/net-maui-why-would-push-notifications-not-work-the-same-after-publishing

[^33_6]: https://forum.ionicframework.com/t/firebase-plugin-issue-with-ionic-3/177665/18

[^33_7]: https://www.npmjs.com/package/@pluggableai/fanmeter-sdk

[^33_8]: https://github.com/arnesson/cordova-plugin-firebase/issues/817

[^33_9]: https://www.reddit.com/r/dotnetMAUI/comments/1fija6g/push_notifications/

[^33_10]: https://developers.connectycube.com/nativescript/push-notifications/

[^33_11]: https://www.andreasnesheim.no/push-notifications-in-net-maui-with-firebase/

[^33_12]: https://dotcubetechnologies.com/blogs/push-notifications-capacitor

[^33_13]: https://www.outsystems.com/forums/discussion/101620/cloud-messaging-plugin-firebase-how-to-show-only-1-notification-at-a-time-ei/

[^33_14]: https://github.com/TobiasBuchholz/Plugin.Firebase/blob/development/docs/cloud_messaging.md

[^33_15]: https://www.nuget.org/packages/Plugin.Firebase.CloudMessaging/


---

# no me esta jalando otra vez

Vamos a ubicar dónde se corta, bro, sin cambiar más código a ciegas. ¿No llega solo con la app abierta, o ahora tampoco minimizada?

También corrijo algo de mi indicación anterior: crear el canal no basta por sí solo para asegurar que aparezca con la app abierta. En el tipo de mensaje que estás enviando, el comportamiento en primer plano depende del manejo de la app.[^34_1]

## Haz esta prueba corta

1. Deja `PuentePulsera` ejecutándose en la laptop.
2. Abre la app y pulsa “Activar notificaciones”; espera a que termine el registro.
3. Pulsa Inicio para dejarla en segundo plano, sin forzar su detención.
4. Publica `CAIDA` como texto plano en `pulsera/prueba`.
5. Revisa la cortina de notificaciones y la consola del puente.

Pásame estas dos cosas:

- Si llegó minimizada o tampoco llegó.
- Las líneas de la consola desde `MQTT recibido` hasta `Envíos aceptados...`, o el error que aparezca.

Si Visual Studio ni siquiera te deja ejecutar la app, pega el error de compilación en lugar de hacer la prueba. No compartas tokens ni credenciales.

<span style="display:none">[^34_10][^34_2][^34_3][^34_4][^34_5][^34_6][^34_7][^34_8][^34_9]</span>

<div align="center">⁂</div>

[^34_1]: https://firebase.google.com/docs/cloud-messaging/customize-messages/set-message-type

[^34_2]: https://firebase.google.com/docs/cloud-messaging/android/receive-messages

[^34_3]: https://firebase.google.com/docs/cloud-messaging/android/get-started

[^34_4]: https://firebase.google.com/docs/cloud-messaging/web/receive-messages

[^34_5]: https://firebase.google.com/docs/cloud-messaging/troubleshooting

[^34_6]: https://firebase.google.com/docs/cloud-messaging/android-message-priority

[^34_7]: https://firebase.google.com/docs/cloud-messaging/flutter/receive-messages

[^34_8]: https://firebase.google.com/docs/cloud-messaging/understand-delivery

[^34_9]: https://firebase.google.com/docs/cloud-messaging

[^34_10]: https://firebase.google.com/docs/cloud-messaging/receive-messages


---

# a no ya jalo

¡Va, bro! Entonces no cambiemos más código por ahora.

¿Esta vez apareció la notificación con **AlertaPulsera abierta en pantalla**? Eso es lo que nos falta confirmar para dar por terminada esta parte.

---

# si, falta configurar lo de los pulsos

Perfecto, bro: ya confirmaste las notificaciones con la app abierta. Ahora seguimos con **los pulsos en la app**, sin tocar lo que ya funciona.

## Lo que vamos a integrar

Propongo este flujo:

```text
Sensor de pulso
      ↓
ESP32 calcula los latidos por minuto
      ↓
Publica la lectura en MQTT
      ↓
AlertaPulsera muestra los BPM mientras está abierta
```

Las alertas de caída seguirán por separado, mediante el puente y Firebase.

## Primero necesito ver qué tienes listo

¿La ESP32 ya muestra una lectura de pulsos en el monitor serie de Arduino?

- Si ya muestra pulsos, pégame el código actual de la ESP32 para integrar la publicación.
- Si todavía no, dime qué sensor estás usando finalmente: `MAX30102`, `Pulse Sensor` u otro, y qué placa ESP32 tienes.

No incluyas la contraseña del Wi-Fi ni las credenciales de EMQX en el código que compartas.

---

# si muestra pero quiero dejar configurada la parte de la app

Sí, bro: dejamos preparada **la app para recibir y mostrar los BPM**, y después conectamos los datos reales de la ESP32. No hace falta cambiar ahora el código del sensor.

## Cómo la dejaremos

- Un apartado “Frecuencia cardíaca”.
- El valor en `BPM`.
- Un estado inicial “Esperando lectura…”, sin mostrar un pulso inventado.
- La recepción de lecturas por MQTT mientras la app está abierta.
- Las notificaciones de caída se mantienen como ya funcionan.


## Pásame estos archivos de AlertaPulsera

1. **`MainPage.xaml`**, completo.
2. `MainPage.xaml.cs`, la versión actual.
3. El archivo `.csproj` del proyecto, para revisar los paquetes instalados.

También necesito el topic y un ejemplo exacto del mensaje que publicará los pulsos, si ya los definiste. Por ejemplo, dime si envías solo un número o un objeto JSON; no cambies el formato todavía.

Con eso te preparo los cambios sobre tu pantalla actual, conservando Bluetooth y el registro de notificaciones. No pegues contraseñas, tokens ni credenciales.

---

# no o sea solo va a mandar los pulsos a la app, un promedio que saque la esp32

Ah, ya te entendí, bro: **la ESP32 calcula el promedio** y solo manda ese resultado a la app. La app no calcula ni vuelve a promediar nada; únicamente muestra el valor recibido.

Por ejemplo:

```text
ESP32 calcula: 76 BPM
        ↓
Envía el valor por MQTT
        ↓
La app muestra: 76 BPM
```

Las alertas de caída quedan aparte, como ya funcionan.

Para dejar lista esa pantalla, pégame primero **`MainPage.xaml`**. Le agregamos el apartado “Frecuencia cardíaca promedio”, con `-- BPM` y “Esperando lectura…” hasta que llegue el primer dato.

---

# shi, y ps se va a estar actualizado cada 10 segundos digamos

Sí, bro, lo dejamos así: **la ESP32 enviará un promedio cada 10 segundos** y la app mostrará el último que reciba, sin volver a calcularlo.

```text
ESP32 calcula el promedio
          ↓
Lo publica cada 10 segundos
          ↓
La app actualiza el valor mostrado
```

En la pantalla propongo:

```text
Frecuencia cardíaca promedio

          76 BPM

Última lectura recibida: 12:39:10
```

Antes del primer mensaje mostrará `-- BPM` y “Esperando lectura…”. Si dejan de llegar datos, queremos que se indique que la lectura está desactualizada, en lugar de aparentar que sigue siendo actual.

Solo dejemos clara una diferencia: publicar cada 10 segundos no define por sí solo el periodo del promedio. Para empezar, podemos acordar que cada envío contenga el promedio de las lecturas válidas de los últimos 10 segundos.

Pégame **`MainPage.xaml`** y preparamos ese apartado sin tocar las notificaciones ni Bluetooth.

---

# o sea el envio va a caer de la esp32 ahi voy a ver cada cuanto lo va a hacer

Sí, ya te entendí, bro: **la ESP32 decide cada cuánto envía el promedio**. No dejamos un intervalo fijo de 10 segundos en la app.

La app simplemente:

- Espera el dato por MQTT.
- Muestra el promedio de BPM tal como llega.
- Actualiza la pantalla cada vez que recibe otro valor.

Mientras no llegue una lectura nueva, conserva la última y muestra cuándo la recibió. Antes de la primera lectura, aparece `-- BPM` y “Esperando lectura…”.

Pégame **`MainPage.xaml`** y agregamos ese apartado sin tocar Bluetooth ni las notificaciones que ya funcionan.

---

# \<?xml version="1.0" encoding="utf-8" ?>

\<ContentPage
xmlns="http://schemas.microsoft.com/dotnet/2021/maui"
xmlns:x="http://schemas.microsoft.com/winfx/2009/xaml"
x:Class="AlertaPulsera.MainPage"
Title="Alerta Pulsera">

```
<ScrollView>
    <VerticalStackLayout Padding="25" Spacing="15">

        <Label
            Text="Alerta Pulsera"
            FontSize="30"
            HorizontalOptions="Center" />

        <Label
            Text="Frecuencia cardíaca"
            FontSize="22" />

        <Label
            x:Name="PulsosLabel"
            Text="-- BPM"
            FontSize="40"
            HorizontalOptions="Center" />

        <Label
            Text="Sin datos. Recepción de pulsos pendiente de integrar."
            HorizontalTextAlignment="Center" />

        <BoxView HeightRequest="1" Color="Gray" />

        <Label
            Text="Buscar pulsera"
            FontSize="22" />

        <Button
            x:Name="BuscarBluetoothButton"
            Text="Buscar dispositivos Bluetooth"
            Clicked="OnBuscarBluetoothClicked" />

        <Label
            x:Name="EstadoBluetoothLabel"
            Text="Sin búsqueda iniciada." />

        <VerticalStackLayout
            x:Name="DispositivosLayout"
            Spacing="10" />

        <BoxView HeightRequest="1" Color="Gray" />

        <Label
            Text="Wi-Fi de la pulsera"
            FontSize="22" />

        <Entry
            x:Name="WifiNombreEntry"
            Placeholder="Nombre de la red Wi-Fi"
            MaxLength="32" />

        <Entry
            x:Name="WifiClaveEntry"
            Placeholder="Contraseña del Wi-Fi"
            IsPassword="True" />

        <Button
            Text="Enviar configuración Wi-Fi"
            IsEnabled="False" />

        <Label
            Text="Envío pendiente de integrar con el programa de la ESP32."
            FontSize="14" />

        <BoxView HeightRequest="1" Color="Gray" />

        <Label
            Text="Notificaciones"
            FontSize="22" />

        <Label
            x:Name="EstadoLabel"
            Text="Configura las notificaciones para recibir alertas."
            FontSize="18" />

        <Button
            Text="Activar notificaciones - PRUEBA 2"
            Clicked="OnActivarClicked" />

        <Label Text="Token de este dispositivo:" />

        <Editor
            x:Name="TokenEditor"
            IsReadOnly="True"
            HeightRequest="180"
            Placeholder="Aquí aparecerá el token de Firebase" />

        <Button
            Text="Copiar token"
            Clicked="OnCopiarClicked" />

    </VerticalStackLayout>
</ScrollView>
```

\</ContentPage>

Tu pantalla ya tiene `PulsosLabel`, bro. Solo vamos a preparar el estado y la hora de recepción, sin establecer cada cuánto debe enviar la ESP32.

## Cambia únicamente la sección de pulsos

Reemplaza desde el `Label` que dice “Frecuencia cardíaca” hasta antes del primer `BoxView` por esto:

```xml
<Label
    Text="Frecuencia cardíaca promedio"
    FontSize="22" />

<Label
    x:Name="PulsosLabel"
    Text="-- BPM"
    FontSize="40"
    HorizontalOptions="Center" />

<Label
    x:Name="EstadoPulsosLabel"
    Text="Esperando lectura de la pulsera..."
    HorizontalTextAlignment="Center" />

<Label
    x:Name="UltimaLecturaPulsosLabel"
    Text="Última lectura recibida: --"
    FontSize="14"
    HorizontalTextAlignment="Center" />
```

Deja el resto del XAML igual: Bluetooth, Wi-Fi y notificaciones no cambian.

## Qué queda preparado

Cuando integremos la recepción, actualizaremos esos tres elementos:

```text
76 BPM
Promedio recibido de la pulsera.
Última lectura recibida: 12:40:15
```

Por ahora esto solo prepara la pantalla; todavía no conecta la app a MQTT ni recibe lecturas. No añadiremos un temporizador para generar o solicitar pulsos: la actualización ocurrirá cuando llegue un mensaje de la ESP32.

Para agregar esa recepción sin sobrescribir cambios recientes, pégame el **`MainPage.xaml.cs` actual** y el contenido del **`.csproj`** de `AlertaPulsera`. Omite cualquier contraseña o credencial si aparece.

---

# o sea solo que diga frecuencia cardiaca, no ocupa decir la ultima o promedio, se supone que es un estimado de la frecuencia cardiaca actual de la persona

Sí, bro: que la pantalla diga solo **“Frecuencia cardíaca”** y muestre el valor en BPM. Sin “promedio” ni hora de la última lectura.

Deja esa sección así, antes del primer `BoxView`:

```xml
<Label
    Text="Frecuencia cardíaca"
    FontSize="22" />

<Label
    x:Name="PulsosLabel"
    Text="-- BPM"
    FontSize="40"
    HorizontalOptions="Center" />

<Label
    x:Name="EstadoPulsosLabel"
    Text="Esperando lectura de la pulsera..."
    HorizontalTextAlignment="Center" />
```

Cuando llegue un dato, mostraremos, por ejemplo, `76 BPM` y quitaremos el texto “Esperando lectura…”. La app mostrará el valor que envíe la ESP32, sin calcular otro promedio ni imponer un intervalo de actualización.

Si ya agregaste `UltimaLecturaPulsosLabel`, elimínalo. El resto de la pantalla se queda igual.

---

# ya lo puse bro

Va, bro, ya quedó preparada la parte visual.

Ahora sigue conectar la recepción de MQTT para que **`PulsosLabel`** cambie cuando llegue el dato de la ESP32.

Pégame:

1. `MainPage.xaml.cs` actual, para conservar lo que ya funciona de Bluetooth y notificaciones.
2. `AlertaPulsera.csproj`, para revisar los paquetes que tienes instalados.

Si ya definiste el topic de pulsos y el formato del mensaje, inclúyelos con un ejemplo; si todavía no, los definimos antes de integrar la recepción. No compartas contraseñas ni tokens.

---

# \<Label

Text="Frecuencia cardíaca"
FontSize="22" />

\<Label
x:Name="PulsosLabel"
Text="-- BPM"
FontSize="40"
HorizontalOptions="Center" />

\<Label
x:Name="EstadoPulsosLabel"
Text="Esperando lectura de la pulsera..."
HorizontalTextAlignment="Center" /> \<Project Sdk="Microsoft.NET.Sdk">

\<PropertyGroup>

```
\<TargetFrameworks>net9.0-android\</TargetFrameworks>
```

\<!-- Uncomment to also build the tizen app. You will need to install tizen by following this: [https://github.com/Samsung/Tizen.NET](https://github.com/Samsung/Tizen.NET) -->

```
\<!-- \<TargetFrameworks>$(TargetFrameworks);net9.0-tizen\</TargetFrameworks> -->
```

\<!-- Note for MacCatalyst:
The default runtime is maccatalyst-x64, except in Release config, in which case the default is maccatalyst-x64;maccatalyst-arm64.

```
When specifying both architectures, use the plural \<RuntimeIdentifiers> instead of the singular \<RuntimeIdentifier>.
```

The Mac App Store will NOT accept apps with ONLY maccatalyst-arm64 indicated;
either BOTH runtimes must be indicated or ONLY macatalyst-x64. -->

```
\<!-- For example: \<RuntimeIdentifiers>maccatalyst-x64;maccatalyst-arm64\</RuntimeIdentifiers> -->
```

\<OutputType>Exe\</OutputType>
\<RootNamespace>AlertaPulsera\</RootNamespace>
\<UseMaui>true\</UseMaui>
\<SingleProject>true\</SingleProject>
\<ImplicitUsings>enable\</ImplicitUsings>
\<Nullable>enable\</Nullable>

\<!-- Display name -->
\<ApplicationTitle>AlertaPulsera\</ApplicationTitle>

\<!-- App Identifier -->
\<ApplicationId>com.companyname.alertapulsera\</ApplicationId>

\<!-- Versions -->
\<ApplicationDisplayVersion>1.0\</ApplicationDisplayVersion>
\<ApplicationVersion>1\</ApplicationVersion>

\<!-- To develop, package, and publish an app to the Microsoft Store, see: [https://aka.ms/MauiTemplateUnpackaged](https://aka.ms/MauiTemplateUnpackaged) -->
\<WindowsPackageType>None\</WindowsPackageType>

\<SupportedOSPlatformVersion Condition="$([MSBuild]::GetTargetPlatformIdentifier('$(TargetFramework)')) == 'ios'">15.0\</SupportedOSPlatformVersion>
\<SupportedOSPlatformVersion Condition="$([MSBuild]::GetTargetPlatformIdentifier('$(TargetFramework)')) == 'maccatalyst'">15.0\</SupportedOSPlatformVersion>
\<SupportedOSPlatformVersion Condition="$([MSBuild]::GetTargetPlatformIdentifier('$(TargetFramework)')) == 'android'">23.0\</SupportedOSPlatformVersion>
\<SupportedOSPlatformVersion Condition="$([MSBuild]::GetTargetPlatformIdentifier('$(TargetFramework)')) == 'windows'">10.0.17763.0\</SupportedOSPlatformVersion>
\<TargetPlatformMinVersion Condition="$([MSBuild]::GetTargetPlatformIdentifier('$(TargetFramework)')) == 'windows'">10.0.17763.0\</TargetPlatformMinVersion>
\<SupportedOSPlatformVersion Condition="$([MSBuild]::GetTargetPlatformIdentifier('$(TargetFramework)')) == 'tizen'">6.5\</SupportedOSPlatformVersion>
\</PropertyGroup>

\<PropertyGroup Condition="'$(Configuration)|$(TargetFramework)|$(Platform)'=='Release|net9.0-android|AnyCPU'">
\<AndroidPackageFormat>apk\</AndroidPackageFormat>
\</PropertyGroup>

\<ItemGroup>
\<!-- App Icon -->
\<MauiIcon Include="Resources\\AppIcon\\appicon.svg" ForegroundFile="Resources\\AppIcon\\appiconfg.svg" Color="#512BD4" />

\<!-- Splash Screen -->
\<MauiSplashScreen Include="Resources\\Splash\\splash.svg" Color="#512BD4" BaseSize="128,128" />

\<!-- Images -->
\<MauiImage Include="Resources\\Images\*" />
\<MauiImage Update="Resources\\Images\\dotnet_bot.png" Resize="True" BaseSize="300,185" />

\<!-- Custom Fonts -->
\<MauiFont Include="Resources\\Fonts\*" />

\<!-- Raw Assets (also remove the "Resources\\Raw" prefix) -->
\<MauiAsset Include="Resources\\Raw\*\*" LogicalName="%(RecursiveDir)%(Filename)%(Extension)" />
\</ItemGroup>

\<ItemGroup>
\<PackageReference Include="Microsoft.Maui.Controls" Version="$(MauiVersion)" />
\<PackageReference Include="Microsoft.Extensions.Logging.Debug" Version="9.0.8" />
\</ItemGroup>
\<ItemGroup>
\<GoogleServicesJson Include="google-services.json" />

\<PackageReference Include="Plugin.BLE"
Version="3.2.1" />

\<PackageReference Include="Plugin.Firebase.CloudMessaging"
Version="4.0.0" />

\<PackageReference Include="Plugin.Firebase.Auth"
Version="4.0.0" />

\<PackageReference Include="Plugin.Firebase.Firestore"
Version="4.0.0" />
\</ItemGroup>

\</Project>

Va, bro. El bloque de pulsos quedó como lo querías. En el `.csproj` que pegaste todavía no aparece un paquete MQTT.

## Falta el código de la pantalla

Lo primero que enviaste es el fragmento de **`MainPage.xaml`**. Ahora necesito **`MainPage.xaml.cs`**, que es otro archivo: empieza con líneas `using ...` y contiene métodos como:

```csharp
OnBuscarBluetoothClicked
OnActivarClicked
OnCopiarClicked
```

En el Explorador de soluciones, despliega la flechita junto a `MainPage.xaml` y abre `MainPage.xaml.cs`. Pega su contenido actual para agregar la recepción sin borrar los cambios que hicieron funcionar las notificaciones.

## Conserva los archivos separados

- Los elementos `<Label ... />` van en `MainPage.xaml`.

```
- El bloque `<Project ...> ... </Project>` va en `AlertaPulsera.csproj`.
```

Si solo los pegaste juntos aquí para mostrármelos, está bien; no necesitas cambiar nada.

También dime si ya tienes definido el topic de pulsos y un ejemplo del mensaje que enviará la ESP32. Si aún no los definiste, basta con decirlo. No incluyas contraseñas ni tokens.

---

# using Plugin.BLE;

using Plugin.BLE.Abstractions;
using Plugin.BLE.Abstractions.Contracts;
using Plugin.BLE.Abstractions.EventArgs;
using Plugin.Firebase.CloudMessaging;
using Plugin.Firebase.Auth;
using Plugin.Firebase.Firestore;

namespace AlertaPulsera;

public partial class MainPage : ContentPage
{
private IAdapter? \_adapter;
private readonly HashSet\<Guid> \_dispositivosVistos = new();
private bool \_buscando;
private bool \_paginaVisible;

```
public MainPage()
{
    InitializeComponent();
}

protected override void OnAppearing()
{
    base.OnAppearing();
    _paginaVisible = true;
}

protected override async void OnDisappearing()
{
    _paginaVisible = false;
    base.OnDisappearing();

    try
    {
        if (_adapter?.IsScanning == true)
        {
            await _adapter.StopScanningForDevicesAsync();
        }
    }
    catch (Exception ex)
    {
        System.Diagnostics.Debug.WriteLine(ex);
    }
}

private async void OnBuscarBluetoothClicked(
    object sender,
    EventArgs e)
{
    if (_buscando)
        return;

    _buscando = true;
    BuscarBluetoothButton.IsEnabled = false;

    try
    {
        EstadoBluetoothLabel.Text = "Solicitando permisos...";

        var permiso = await Permissions
            .RequestAsync<PermisosBluetooth>();

        if (permiso != PermissionStatus.Granted)
        {
            EstadoBluetoothLabel.Text =
                "Debes permitir el acceso a dispositivos cercanos " +
                "o ubicación, según tu versión de Android.";
            return;
        }

        var bluetooth = CrossBluetoothLE.Current;

        if (bluetooth.State != BluetoothState.On)
        {
            EstadoBluetoothLabel.Text =
                "Bluetooth no disponible o apagado. " +
                "Actívalo en los ajustes del celular.";
            return;
        }

        _adapter = bluetooth.Adapter;
        _adapter.ScanTimeout = 10000;

        _dispositivosVistos.Clear();
        DispositivosLayout.Children.Clear();

        _adapter.DeviceDiscovered += OnDispositivoEncontrado;

        EstadoBluetoothLabel.Text =
            "Buscando dispositivos BLE durante 10 segundos...";

        await _adapter.StartScanningForDevicesAsync();

        if (_paginaVisible)
        {
            EstadoBluetoothLabel.Text =
                $"Búsqueda terminada: " +
                $"{_dispositivosVistos.Count} dispositivos encontrados.";
        }
    }
    catch (Exception ex)
    {
        EstadoBluetoothLabel.Text = "No se pudo buscar Bluetooth.";

        await DisplayAlert(
            "Bluetooth",
            ex.Message,
            "Aceptar");
    }
    finally
    {
        if (_adapter != null)
        {
            _adapter.DeviceDiscovered -= OnDispositivoEncontrado;
        }

        _buscando = false;
        BuscarBluetoothButton.IsEnabled = true;
    }
}

private void OnDispositivoEncontrado(
    object? sender,
    DeviceEventArgs e)
{
    var dispositivo = e.Device;

    MainThread.BeginInvokeOnMainThread(() =>
    {
        if (!_paginaVisible || !_buscando)
            return;

        if (!_dispositivosVistos.Add(dispositivo.Id))
            return;

        string nombre = string.IsNullOrWhiteSpace(dispositivo.Name)
            ? "Dispositivo sin nombre"
            : dispositivo.Name;

        DispositivosLayout.Children.Add(new Label
        {
            Text = $"{nombre}\n" +
                   $"ID: {dispositivo.Id}\n" +
                   $"Señal: {dispositivo.Rssi} dBm",
            FontSize = 14,
            Margin = new Thickness(0, 5)
        });
    });
}

private async void OnActivarClicked(object sender, EventArgs e)
{
    if (sender is Button boton)
        boton.IsEnabled = false;

    try
    {
        EstadoLabel.Text = "Configurando...";
```

\#if ANDROID
if (OperatingSystem.IsAndroidVersionAtLeast(33))
{
var permiso = await Permissions
.RequestAsync\<Permissions.PostNotifications>();

```
            if (permiso != PermissionStatus.Granted)
            {
                EstadoLabel.Text =
                    "Debes permitir las notificaciones.";
                return;
            }
        }
```

\#endif

```
        EstadoLabel.Text = "Iniciando sesión...";

        var auth = CrossFirebaseAuth.Current;
        var usuario = auth.CurrentUser;

        if (usuario == null)
        {
            usuario = await auth.SignInAnonymouslyAsync();
        }

        if (usuario == null)
        {
            throw new InvalidOperationException(
                "No se pudo iniciar la sesión.");
        }

        EstadoLabel.Text = "Obteniendo token...";

        var token = await CrossFirebaseCloudMessaging
            .Current.GetTokenAsync();

        if (string.IsNullOrWhiteSpace(token))
        {
            throw new InvalidOperationException(
                "Firebase no devolvió un token.");
        }

        TokenEditor.Text = token;

        const string claveInstalacion = "pulsera_instalacion_id";

        var instalacionId = Preferences.Default.Get(
            claveInstalacion,
            string.Empty);

        if (string.IsNullOrWhiteSpace(instalacionId))
        {
            instalacionId = Guid.NewGuid().ToString("N");

            Preferences.Default.Set(
                claveInstalacion,
                instalacionId);
        }

        EstadoLabel.Text = "Guardando token en Firebase...";

        var datos = new Dictionary<object, object>
```

{
{ "token", token },
{ "plataforma", "android" },
{ "actualizadoUtc", DateTime.UtcNow.ToString("O") }
};

```
        var ruta =
            $"usuarios/{usuario.Uid}/dispositivos/{instalacionId}";

        await CrossFirebaseFirestore.Current
            .GetDocument(ruta)
            .SetDataAsync(datos);

        EstadoLabel.Text = "Token registrado correctamente.";

        await DisplayAlert(
            "Registro ejecutado",
            $"Revisa esta ruta en Firestore:\n\n{ruta}",
            "Aceptar");
    }
    catch (Exception ex)
    {
        EstadoLabel.Text = "No se pudo registrar el token.";

        await DisplayAlert(
            "Configuración",
            ex.Message,
            "Aceptar");
    }
    finally
    {
        if (sender is Button botonFinal)
            botonFinal.IsEnabled = true;
    }
}

private async void OnCopiarClicked(object sender, EventArgs e)
{
    if (!string.IsNullOrWhiteSpace(TokenEditor.Text))
    {
        await Clipboard.Default.SetTextAsync(TokenEditor.Text);

        await DisplayAlert(
            "Listo",
            "Token copiado.",
            "Aceptar");
    }
}
```

}

Ya tengo el código correcto, bro. Vamos a conservar Bluetooth y Firebase tal como están y agregar la recepción de pulsos por separado.

## 1. Agrega MQTT al proyecto de la app

En `AlertaPulsera.csproj`, dentro de un `<ItemGroup>` de paquetes, agrega esta línea sin borrar las demás:

```xml
<PackageReference Include="MQTTnet" Version="4.3.7.1207" />
```

Usaremos esa versión concreta para que el código que preparemos coincida con su API. El paquete incluye el cliente MQTT para .NET.[^45_1]

Guarda el archivo y deja que Visual Studio restaure los paquetes.

## 2. Definamos el mensaje de pulsos

Como todavía no me has indicado un topic ni un formato existente, propongo para la primera prueba:


| Campo | Valor propuesto |
| :-- | :-- |
| Topic | `pulsera/prueba/pulsos` |
| Formato | Plain text |
| Ejemplo de mensaje | `76` |
| Lo que mostrará la app | `76 BPM` |

Es una propuesta para probar, no un cambio que ya debas hacer en la ESP32. Si tu programa ya publica con otro topic o formato, adaptamos la app a ese.

La app actualizará el valor cada vez que llegue un mensaje, sin temporizador de 10 segundos y sin calcular otro promedio.

## 3. Falta confirmar la conexión

¿Usaremos el mismo servidor EMQX del puente, con TLS en el puerto `8883`, y te sirve el topic `pulsera/prueba/pulsos` con un número como mensaje?

No pegues usuario ni contraseña. En el código dejaremos indicado dónde introducirlos localmente.

<span style="display:none">[^45_10][^45_2][^45_3][^45_4][^45_5][^45_6][^45_7][^45_8][^45_9]</span>

<div align="center">⁂</div>

[^45_1]: https://www.nuget.org/packages/MQTTnet/4.3.7.1207

[^45_2]: https://www.nuget.org/packages/MQTTnet.Extensions.ManagedClient/4.3.7.1207

[^45_3]: https://www.nuget.org/packages/MQTTnet.Extensions.WebSocket4Net

[^45_4]: https://nugetmusthaves.com/tag/mqtt

[^45_5]: https://www.nuget.org/packages/MQTTnet/5.2.0

[^45_6]: https://libraries.io/nuget/MQTTnet.Extensions.WebSocket4Net

[^45_7]: https://github.com/zkyvette425/com.kc.mqtt/blob/main/MQTTnet.4.3.7.1207.meta

[^45_8]: https://www.nuget.org/packages/MQTTnet/3.0.7

[^45_9]: https://www.nuget.org/packages/MQTTnet.Extensions.WebSocket4Net/4.3.7.1207

[^45_10]: https://stackoverflow.com/questions/79638640/mqttnet-not-being-able-to-connect-to-broker-anymore


---

# Sí, usamos el mismo servidor EMQX de antes

Va, bro. Usaremos el mismo EMQX y dejaremos lista una primera prueba: publicar `76` y que la app muestre **`76 BPM`**, sin tocar Bluetooth ni Firebase.

Para esta prueba propongo el topic `pulsera/prueba/pulsos`. Después lo podemos ajustar al que use la ESP32.

## 1. Confirma el paquete

En `AlertaPulsera.csproj` debe estar esta línea dentro de un `<ItemGroup>`:

```xml
<PackageReference Include="MQTTnet" Version="4.3.7.1207" />
```

El código siguiente usa la API de MQTTnet 4: crea el cliente, conecta con TLS y se suscribe para recibir mensajes.[^46_1]

## 2. Agrega un botón a la sección de pulsos

En `MainPage.xaml`, justo después de `EstadoPulsosLabel`, agrega:

```xml
<Button
    x:Name="ConectarPulsosButton"
    Text="Conectar pulsos"
    Clicked="OnConectarPulsosClicked" />
```

Usaremos un botón primero para comprobar la conexión. Cuando funcione, podemos hacerla automática.

## 3. Agrega estos `using`

Arriba de `MainPage.xaml.cs`, junto a los demás:

```csharp
using MQTTnet;
using MQTTnet.Client;
using System.Globalization;
```


## 4. Agrega estos campos dentro de `MainPage`

Ponlos debajo de:

```csharp
private bool _paginaVisible;
```

Agrega:

```csharp
private IMqttClient? _clientePulsos;
private bool _conectandoPulsos;

private const string TopicPulsos = "pulsera/prueba/pulsos";

// Completa estos valores localmente.
// Servidor: solo el host, sin mqtts:// ni :8883.
private const string ServidorPulsos = "TU_HOST_EMQX";
private const string UsuarioPulsos = "TU_USUARIO_MQTT";
private const string ClavePulsos = "TU_CLAVE_MQTT";
```

Copia el servidor desde la configuración de tu puente, pero no cambies ni elimines el código del puente.

Las credenciales en el código son solo para esta prueba local: no publiques el proyecto ni distribuyas una app con una cuenta administrativa del broker.

## 5. Agrega este método dentro de `MainPage`

Pégalo antes de la última llave `}` del archivo, sin reemplazar los métodos existentes:

```csharp
private async void OnConectarPulsosClicked(
    object sender,
    EventArgs e)
{
    if (_conectandoPulsos)
        return;

    _conectandoPulsos = true;
    ConectarPulsosButton.IsEnabled = false;

    try
    {
        EstadoPulsosLabel.Text = "Conectando a EMQX...";

        if (_clientePulsos == null)
        {
            _clientePulsos = new MqttFactory().CreateMqttClient();

            _clientePulsos.ApplicationMessageReceivedAsync += args =>
            {
                if (args.ApplicationMessage.Topic != TopicPulsos)
                    return Task.CompletedTask;

                var texto = args.ApplicationMessage
                    .ConvertPayloadToString()
                    .Trim();

                var valido = double.TryParse(
                    texto,
                    NumberStyles.Float,
                    CultureInfo.InvariantCulture,
                    out var bpm);

                MainThread.BeginInvokeOnMainThread(() =>
                {
                    if (!_paginaVisible)
                        return;

                    if (!valido || !double.IsFinite(bpm) || bpm <= 0)
                    {
                        PulsosLabel.Text = "-- BPM";
                        EstadoPulsosLabel.Text =
                            "Lectura no válida. Esperando un valor de BPM.";
                        return;
                    }

                    PulsosLabel.Text = $"{bpm:0.#} BPM";
                    EstadoPulsosLabel.Text = string.Empty;
                });

                return Task.CompletedTask;
            };

            _clientePulsos.DisconnectedAsync += args =>
            {
                MainThread.BeginInvokeOnMainThread(() =>
                {
                    PulsosLabel.Text = "-- BPM";
                    EstadoPulsosLabel.Text =
                        "Conexión de pulsos perdida. Pulsa Conectar pulsos.";
                });

                return Task.CompletedTask;
            };
        }

        using var tiempoLimite =
            new CancellationTokenSource(TimeSpan.FromSeconds(20));

        if (!_clientePulsos.IsConnected)
        {
            var opciones = new MqttClientOptionsBuilder()
                .WithClientId(
                    "AlertaPulsera-" + Guid.NewGuid().ToString("N"))
                .WithTcpServer(ServidorPulsos, 8883)
                .WithCredentials(UsuarioPulsos, ClavePulsos)
                .WithTlsOptions(tls => tls.UseTls())
                .WithCleanSession()
                .Build();

            await _clientePulsos.ConnectAsync(
                opciones,
                tiempoLimite.Token);
        }

        EstadoPulsosLabel.Text = "Suscribiendo a pulsos...";

        var suscripcion = new MqttFactory()
            .CreateSubscribeOptionsBuilder()
            .WithTopicFilter(f => f.WithTopic(TopicPulsos))
            .Build();

        var resultado = await _clientePulsos.SubscribeAsync(
            suscripcion,
            tiempoLimite.Token);

        foreach (var item in resultado.Items)
        {
            if ((int)item.ResultCode >= 128)
            {
                throw new InvalidOperationException(
                    "EMQX rechazó la suscripción: " +
                    item.ResultCode);
            }
        }

        EstadoPulsosLabel.Text =
            "Conectado. Esperando lectura de la pulsera...";
    }
    catch (OperationCanceledException)
    {
        EstadoPulsosLabel.Text =
            "La conexión tardó demasiado. Intenta de nuevo.";
    }
    catch (Exception ex)
    {
        EstadoPulsosLabel.Text =
            "No se pudo conectar la recepción de pulsos.";

        await DisplayAlert(
            "Pulsos",
            ex.Message,
            "Aceptar");
    }
    finally
    {
        _conectandoPulsos = false;
        ConectarPulsosButton.IsEnabled = true;
    }
}
```


## 6. Prueba sin cambiar aún la ESP32

Ejecuta la app y pulsa “Conectar pulsos”. Cuando diga que está esperando lectura, publica desde tu cliente MQTT:

```text
Topic: pulsera/prueba/pulsos
Formato: Plain text
Mensaje: 76
Retain: desactivado
```

La pantalla debe mostrar:

```text
Frecuencia cardíaca

76 BPM
```

Después publica `82`: debe cambiar a `82 BPM`. No hay temporizador de actualización; cambia al recibir cada mensaje.

Esta primera versión no incluye reconexión automática: si pierde la conexión, pulsa nuevamente “Conectar pulsos”. Y la ruta de pulsos será directa: `ESP32 → EMQX → app`; no agregues este topic al puente de alertas.

<span style="display:none">[^46_10][^46_2][^46_3][^46_4][^46_5][^46_6][^46_7][^46_8][^46_9]</span>

<div align="center">⁂</div>

[^46_1]: https://testmqtt.com/learn/mqtt-csharp-mqttnet

[^46_2]: https://stackoverflow.com/questions/74874755/mqttnet-version-4-1-3-563-basic-example

[^46_3]: https://github.com/dotnet/MQTTnet/issues/1785

[^46_4]: https://stackoverflow.com/questions/72728179/how-to-correctly-trigger-an-async-process-when-receiving-a-message-via-mqttnet

[^46_5]: https://connectmq.com/blog/mqtt-client-libraries/

[^46_6]: https://connectmq.com/blog/unity-mqtt-client/

[^46_7]: https://github.com/dotnet/MQTTnet/wiki/Client

[^46_8]: https://www.emqx.com/en/blog/connecting-to-serverless-mqtt-broker-with-mqttnet-in-csharp

[^46_9]: https://learn.microsoft.com/en-us/answers/questions/1303887/how-to-connect-mqtt-server-send-and-receive-messag

[^46_10]: https://testmqtt.com/learn/mqtt-aspnet-core


---

# imagen.png

Ese error **CS0246** significa que el proyecto todavía no está reconociendo la referencia a MQTTnet, bro. No es un problema del servidor EMQX ni de tus credenciales.

## Instálalo en AlertaPulsera

En Visual Studio:

1. Detén la ejecución de la app.
2. En el Explorador de soluciones, haz clic derecho sobre el proyecto **AlertaPulsera**, no sobre la solución ni sobre `PuentePulsera`.
3. Selecciona “Administrar paquetes NuGet”.
4. En “Examinar”, busca `MQTTnet`.
5. Selecciona la versión **4.3.7.1207** e instálala. Es la versión para la que te pasé el código.[^47_1]

Si ya aparece instalada esa versión, no la instales otra vez: continúa con la restauración.

## Restaura y recompila

1. Guarda todos los archivos.
2. Haz clic derecho en la solución → “Restaurar paquetes NuGet”.
3. Ve a “Compilar” → “Recompilar solución”.

Deja estos `using` tal como están:

```csharp
using MQTTnet;
using MQTTnet.Client;
using System.Globalization;
```

Si el paquete se instala correctamente pero sigue apareciendo el error, pégame el primer error de la ventana “Salida” al restaurar o recompilar. No cambies todavía el resto del código.

<span style="display:none">[^47_2]</span>

<div align="center">⁂</div>

[^47_1]: https://www.nuget.org/packages/MQTTnet/4.3.7.1207

[^47_2]: imagen.jpg


---

# private IMqttClient? \_clientePulsos;

private bool \_conectandoPulsos;

private const string TopicPulsos = "pulsera/prueba/pulsos";

// Completa estos valores localmente.
// Servidor: solo el host, sin mqtts:// ni :8883.
private const string ServidorPulsos = "TU_HOST_EMQX";
private const string UsuarioPulsos = "TU_USUARIO_MQTT";
private const string ClavePulsos = "TU_CLAVE_MQTT" o sea ahi tengo q poner lo de puente pulsera?

Sí, bro: ahí van los datos de conexión a EMQX que usas en `PuentePulsera`, no los de Firebase.


| En la app | Qué debes poner |
| :-- | :-- |
| `ServidorPulsos` | El mismo host que usas en `servidor` en el puente. Solo el dominio, sin `mqtts://`, sin puerto y sin `/`. |
| `UsuarioPulsos` | El usuario MQTT que introduces al ejecutar el puente. |
| `ClavePulsos` | La contraseña MQTT de ese usuario, no la contraseña de tu cuenta del panel de EMQX. |

EMQX utiliza esos datos para autenticar la conexión MQTT; el puerto TLS `8883` ya está configurado en el método que te pasé.[^48_1]

Déjalo con esta estructura, sustituyendo los textos por tus valores reales solo en tu computadora:

```csharp
private const string ServidorPulsos = "TU_HOST_REAL";
private const string UsuarioPulsos = "TU_USUARIO_REAL";
private const string ClavePulsos = "TU_CONTRASEÑA_REAL";
```

Ojo: en el fragmento que pegaste falta el punto y coma `;` al final de `ClavePulsos`.

No cambies esta línea:

```csharp
private const string TopicPulsos = "pulsera/prueba/pulsos";
```

Después guarda, ejecuta la app y pulsa “Conectar pulsos”. Para probar, publica en ese topic el mensaje `76` como texto plano.

No pegues aquí las credenciales ni copies a la app el archivo de credenciales de Firebase.

<span style="display:none">[^48_10][^48_2][^48_3][^48_4][^48_5][^48_6][^48_7][^48_8][^48_9]</span>

<div align="center">⁂</div>

[^48_1]: https://docs.emqx.com/en/cloud/latest/deployments/tls_ssl.html

[^48_2]: https://docs.emqx.com/en/emqx/latest/guides/network/emqx-mqtt-tls.html

[^48_3]: https://docs.emqx.com/en/emqx/latest/get-started/deploy/kubernetes/operator/tasks/configure-emqx-tls.html

[^48_4]: https://docs.emqx.com/en/emqx/v4.4/advanced/auth.html

[^48_5]: https://docs.emqx.com/en/emqx/latest/guides/network/overview.html

[^48_6]: https://docs.emqx.com/en/cloud/latest/deployments/port_guide_dedicated.md

[^48_7]: https://docs.emqx.com/en/emqx/latest/guides/configuration/listener.html

[^48_8]: https://docs.emqx.com/en/emqx-edge/latest/bridges/tcp-bridge-quick-start.html

[^48_9]: https://www.emqx.com/en/blog/connecting-to-serverless-mqtt-broker-with-mqttnet-in-csharp

[^48_10]: https://docs.emqx.com/en/cloud/latest/deployments/port_guide_serverless.html


---

# me aparece q no conecta

Va, bro. Necesitamos el error exacto para saber qué está fallando; “no conecta” todavía no distingue entre servidor, credenciales, TLS o suscripción.

## ¿Qué dice la ventana “Pulsos”?

Al pulsar “Conectar pulsos”, el código que agregamos debería mostrar una ventana con el detalle del error. Mándame ese texto o una captura.

Si solo aparece:

```text
La conexión tardó demasiado. Intenta de nuevo.
```

dímelo tal cual.

## Mientras tanto, verifica estos datos

- `ServidorPulsos`: el mismo dominio que usa el puente, sin `mqtts://`, sin `:8883` y sin espacios.
- `UsuarioPulsos` y `ClavePulsos`: los de autenticación MQTT de EMQX, no los del panel web.
- Que el puente siga conectándose al mismo servidor.

EMQX recomienda comprobar dirección, puerto y autenticación antes de modificar la conexión TLS.[^49_1]

No cambies Firebase ni desactives la validación de certificados. Pásame únicamente el mensaje del error, sin contraseñas ni tokens, y seguimos desde ahí.

<span style="display:none">[^49_10][^49_2][^49_3][^49_4][^49_5][^49_6][^49_7][^49_8][^49_9]</span>

<div align="center">⁂</div>

[^49_1]: https://docs.emqx.com/en/cloud/latest/deployments/port_guide_serverless.md

[^49_2]: https://docs.emqx.com/en/cloud/latest/deployments/mtls_best_practices.html

[^49_3]: https://docs.emqx.com/en/cloud/latest/deployments/byoc_ssl.html

[^49_4]: https://docs.emqx.com/en/emqx/latest/guides/network/emqx-mqtt-tls.html

[^49_5]: https://docs.emqx.com/en/emqx/latest/guides/network/overview.html

[^49_6]: https://docs.emqx.com/en/cloud/latest/connect_to_deployments/deploy_mqtt_broker.html

[^49_7]: https://docs.emqx.com/en/cloud/latest/deployments/tls_ssl.html

[^49_8]: https://docs.emqx.com/en/cloud/latest/deployments/port_guide_serverless.html

[^49_9]: https://docs.emqx.com/en/cloud/latest/faq/deploy.md

[^49_10]: https://docs.emqx.com/en/cloud/latest/faq/deploy.html


---

# autenthication failed, see inner exception, pero el user y la clave si estan bien

Sí, bro: ese mensaje no significa necesariamente que el usuario o la contraseña estén mal. También puede aparecer cuando falla la negociación **TLS**, antes de que EMQX llegue a validar tus credenciales. Necesitamos ver la excepción interna para distinguirlo.[^50_1][^50_2]

## Cambia solo el bloque de error de pulsos

Dentro de `OnConectarPulsosClicked`, busca este bloque:

```csharp
catch (Exception ex)
{
    EstadoPulsosLabel.Text =
        "No se pudo conectar la recepción de pulsos.";

    await DisplayAlert(
        "Pulsos",
        ex.Message,
        "Aceptar");
}
```

Reemplázalo por este:

```csharp
catch (Exception ex)
{
    EstadoPulsosLabel.Text =
        "No se pudo conectar la recepción de pulsos.";

    var detalle = new System.Text.StringBuilder();

    for (Exception? error = ex;
         error != null;
         error = error.InnerException)
    {
        detalle.AppendLine(error.GetType().Name);
        detalle.AppendLine(error.Message);
        detalle.AppendLine();
    }

    System.Diagnostics.Debug.WriteLine(ex.ToString());

    await DisplayAlert(
        "Detalle de conexión",
        detalle.ToString(),
        "Aceptar");
}
```

Esto mostrará los errores que ahora quedan ocultos detrás de “see inner exception”. En .NET, `InnerException` contiene la excepción que provocó el error exterior.[^50_3]

## Vuelve a probar

Guarda, ejecuta la app y pulsa “Conectar pulsos”. Pásame el texto completo de la nueva ventana o una captura, ocultando cualquier dato sensible.

Por ahora no cambies las credenciales ni desactives la validación de certificados. Primero veamos si el detalle señala un certificado, el nombre del servidor, la versión TLS u otra causa.[^50_1]

<span style="display:none">[^50_10][^50_11][^50_12][^50_13][^50_14][^50_15][^50_4][^50_5][^50_6][^50_7][^50_8][^50_9]</span>

<div align="center">⁂</div>

[^50_1]: https://learn.microsoft.com/en-us/dotnet/core/extensions/sslstream-troubleshooting

[^50_2]: https://github.com/dotnet/MQTTnet/issues/1113

[^50_3]: https://learn.microsoft.com/en-my/dotnet/api/system.exception.getbaseexception?view=net-11.0-pp

[^50_4]: https://stackoverflow.com/questions/78425274/the-ssl-connection-could-not-be-established-see-inner-exception-in-asp-net-core

[^50_5]: https://github.com/dotnet/android/issues/4481

[^50_6]: https://stackoverflow.com/questions/71935657/c-sharp-the-ssl-connection-could-not-be-established-see-inner-exception

[^50_7]: https://github.com/dotnet/runtime/issues/51161

[^50_8]: https://techcommunity.microsoft.com/discussions/dotnet-runtime/the-ssl-connection-could-not-be-established/3971293

[^50_9]: https://github.com/xamarin/xamarin-android/issues/4481

[^50_10]: https://github.com/dotnet/MQTTnet/issues/883

[^50_11]: https://learn.microsoft.com/pdf?url=https://learn.microsoft.com/en-us/dotnet/api/\_splitted/system.security.authentication/toc.json?view=net-9.0

[^50_12]: https://devzone.nordicsemi.com/f/nordic-q-a/106403/connecting-subscribing-to-mqtt-nrfcloud-with-net-and-mqttnet

[^50_13]: https://learn.microsoft.com/tr-tr/dotnet/api/system.security.authentication.authenticationexception?view=net-9.0\&viewFallbackFrom=dotnet-uwp-10.0

[^50_14]: https://github.com/dotnet/MQTTnet/issues/998

[^50_15]: https://learn.microsoft.com/en-us/answers/questions/337198/tcp-tls-communication-in-xamarin-forms-application


---

# imagen.png

Bro, la captura ya muestra que el fallo está en la conexión **SSL/TLS de Android**: termina en `Interop+AndroidCrypto+SslException`. No muestra un rechazo explícito del usuario o la contraseña por parte de EMQX. Todavía falta identificar por qué falla TLS.[^51_1]

## 1. Prueba este cambio puntual

En `OnConectarPulsosClicked`, busca:

```csharp
.WithTlsOptions(tls => tls.UseTls())
```

Y reemplázalo por:

```csharp
.WithTlsOptions(tls =>
{
    tls.UseTls();
    tls.WithSslProtocols(
        System.Security.Authentication.SslProtocols.Tls12);
})
```

Esto limita la conexión a **TLS 1.2** como prueba de compatibilidad; no garantiza resolverlo ni desactiva la validación del certificado. MQTTnet permite configurar el protocolo TLS con `WithSslProtocols`.[^51_2]

Guarda, detén la ejecución anterior, vuelve a ejecutar y pulsa “Conectar pulsos”.

## 2. Si sigue fallando, necesitamos la salida completa

El bloque que agregamos ya incluye:

```csharp
System.Diagnostics.Debug.WriteLine(ex.ToString());
```

En Visual Studio:

1. Abre “Ver” → “Salida”.
2. En “Mostrar salida de”, selecciona “Depurar”.
3. Repite el intento de conexión.
4. Busca `SslException` y copia el bloque del error, incluyendo cualquier línea con `Caused by`, `SSLHandshakeException` o `CertPathValidatorException`.

Los errores TLS pueden deberse a negociación del protocolo o validación del certificado; el mensaje genérico de la ventana no permite distinguirlos.[^51_3]

No agregues `return true` a un validador de certificados ni actives “aceptar cualquier certificado”. Pásame el resultado de esta prueba y, si falla, ese bloque de salida sin credenciales.

<span style="display:none">[^51_10][^51_11][^51_4][^51_5][^51_6][^51_7][^51_8][^51_9]</span>

<div align="center">⁂</div>

[^51_1]: imagen.jpg

[^51_2]: https://github.com/dotnet/MQTTnet/issues/1828

[^51_3]: https://learn.microsoft.com/en-us/dotnet/core/extensions/sslstream-troubleshooting

[^51_4]: https://docs.emqx.com/en/emqx/latest/guides/network/mqtt-client-tls.html

[^51_5]: https://github.com/dotnet/MQTTnet/discussions/2134

[^51_6]: https://www.emqx.com/en/blog/tag/android

[^51_7]: https://www.emqx.com/en/blog/android-mqtt-ssl-tls-authentication

[^51_8]: https://www.emqx.com/en/blog/emqx-server-ssl-tls-secure-connection-configuration-guide

[^51_9]: https://github.com/emqx/MQTT-Client-Examples/blob/master/mqtt-client-Android/README_ZH.md

[^51_10]: https://www.emqx.com/en/blog/tag/ssl-tls

[^51_11]: https://github.com/dotnet/MQTTnet/issues/883


---

# Thread finished: \<Thread Pool> \#12

Thread finished: \<Thread Pool> \#2

[EGL_emulation] app_time_stats: avg=5696.81ms min=20.15ms max=45357.26ms count=8

[WindowOnBackDispatcher] sendCancelIfRunning: isInProgress=false callback=android.view.ViewRootImpl\$\$ExternalSyntheticLambda11@3ec13cb

[HWUI] endAllActiveAnimators on 0x7955fc4dc4d0 (RippleDrawable) with handle 0x79562c477f80

[EGL_emulation] app_time_stats: avg=5104.11ms min=21.51ms max=45675.14ms count=9

Thread started: \<Thread Pool> \#13

[EGL_emulation] app_time_stats: avg=267.50ms min=20.77ms max=1603.08ms count=7

Thread started: \<Thread Pool> \#14

[e.alertapulsera] Explicit concurrent mark compact GC freed 1049KB AllocSpace bytes, 3(60KB) LOS objects, 49% free, 4920KB/9841KB, paused 3.335ms,6.770ms total 81.381ms

Thread started: \<Thread Pool> \#15

Thread started: \<Thread Pool> \#16

[System.err] javax.net.ssl.SSLHandshakeException: Read error: ssl=0x7955cc432318: Failure in SSL library, usually a protocol error

[System.err] error:100000df:SSL routines:OPENSSL_internal:UNEXPECTED_MESSAGE (external/boringssl/src/ssl/handshake_client.cc:1068 0x795468bcdd4b:0x00000000)

[System.err] at com.android.org.conscrypt.SSLUtils.toSSLHandshakeException(SSLUtils.java:356)

[System.err] at com.android.org.conscrypt.ConscryptEngine.convertException(ConscryptEngine.java:1127)

[System.err] at com.android.org.conscrypt.ConscryptEngine.unwrap(ConscryptEngine.java:912)

[System.err] at com.android.org.conscrypt.ConscryptEngine.unwrap(ConscryptEngine.java:740)

[System.err] at com.android.org.conscrypt.ConscryptEngine.unwrap(ConscryptEngine.java:705)

[System.err] at com.android.org.conscrypt.Java8EngineWrapper.unwrap(Java8EngineWrapper.java:237)

[System.err] at net.dot.android.crypto.DotnetProxyTrustManager.verifyRemoteCertificate(Native Method)

[System.err] at net.dot.android.crypto.DotnetProxyTrustManager.checkServerTrusted(DotnetProxyTrustManager.java:32)

[System.err] at com.android.org.conscrypt.Platform.checkServerTrusted(Platform.java:265)

[System.err] at com.android.org.conscrypt.ConscryptEngine.verifyCertificateChain(ConscryptEngine.java:1631)

[System.err] at com.android.org.conscrypt.NativeCrypto.ENGINE_SSL_read_direct(Native Method)

[System.err] at com.android.org.conscrypt.NativeSsl.readDirectByteBuffer(NativeSsl.java:570)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextDataDirect(ConscryptEngine.java:1088)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextDataHeap(ConscryptEngine.java:1108)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextData(ConscryptEngine.java:1080)

[System.err] at com.android.org.conscrypt.ConscryptEngine.unwrap(ConscryptEngine.java:869)

[System.err] at com.android.org.conscrypt.ConscryptEngine.unwrap(ConscryptEngine.java:740)

[System.err] at com.android.org.conscrypt.ConscryptEngine.unwrap(ConscryptEngine.java:705)

[System.err] at com.android.org.conscrypt.Java8EngineWrapper.unwrap(Java8EngineWrapper.java:237)

[System.err] Caused by: javax.net.ssl.SSLProtocolException: Read error: ssl=0x7955cc432318: Failure in SSL library, usually a protocol error

[System.err] error:100000df:SSL routines:OPENSSL_internal:UNEXPECTED_MESSAGE (external/boringssl/src/ssl/handshake_client.cc:1068 0x795468bcdd4b:0x00000000)

[System.err] at com.android.org.conscrypt.NativeCrypto.ENGINE_SSL_read_direct(Native Method)

[System.err] at com.android.org.conscrypt.NativeSsl.readDirectByteBuffer(NativeSsl.java:570)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextDataDirect(ConscryptEngine.java:1088)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextDataHeap(ConscryptEngine.java:1108)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextData(ConscryptEngine.java:1080)

[System.err] at com.android.org.conscrypt.ConscryptEngine.unwrap(ConscryptEngine.java:869)

[System.err] ... 16 more

[System.err] javax.net.ssl.SSLHandshakeException

[System.err] at com.android.org.conscrypt.SSLUtils.toSSLHandshakeException(SSLUtils.java:356)

[System.err] at com.android.org.conscrypt.ConscryptEngine.convertException(ConscryptEngine.java:1127)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextData(ConscryptEngine.java:1082)

[System.err] at com.android.org.conscrypt.ConscryptEngine.unwrap(ConscryptEngine.java:869)

[System.err] at com.android.org.conscrypt.ConscryptEngine.unwrap(ConscryptEngine.java:740)

[System.err] at com.android.org.conscrypt.ConscryptEngine.unwrap(ConscryptEngine.java:705)

[System.err] at com.android.org.conscrypt.Java8EngineWrapper.unwrap(Java8EngineWrapper.java:237)

[System.err] Caused by: java.security.cert.CertificateException

[System.err] at net.dot.android.crypto.DotnetProxyTrustManager.checkServerTrusted(DotnetProxyTrustManager.java:33)

[System.err] at com.android.org.conscrypt.Platform.checkServerTrusted(Platform.java:265)

[System.err] at com.android.org.conscrypt.ConscryptEngine.verifyCertificateChain(ConscryptEngine.java:1631)

[System.err] at com.android.org.conscrypt.NativeCrypto.ENGINE_SSL_read_direct(Native Method)

[System.err] at com.android.org.conscrypt.NativeSsl.readDirectByteBuffer(NativeSsl.java:570)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextDataDirect(ConscryptEngine.java:1088)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextDataHeap(ConscryptEngine.java:1108)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextData(ConscryptEngine.java:1080)

[System.err] ... 4 more

[0:] MQTTnet.Exceptions.MqttCommunicationException: Authentication failed, see inner exception.
---> System.Security.Authentication.AuthenticationException: Authentication failed, see inner exception.
---> Interop+AndroidCrypto+SslException: Exception of type 'Interop+AndroidCrypto+SslException' was thrown.
--- End of inner exception stack trace ---

at System.Net.Security.SslStream.\<ForceAuthenticationAsync>d\_\_157\`1$$
[System.Net.Security.AsyncReadWriteAdapter, System.Net.Security, Version=9.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a]
$$.MoveNext()

at MQTTnet.Implementations.MqttTcpChannel.ConnectAsync(CancellationToken cancellationToken)
at MQTTnet.Implementations.MqttTcpChannel.ConnectAsync(CancellationToken cancellationToken)
at MQTTnet.Adapter.MqttChannelAdapter.\<>c\_\_DisplayClass30_0.\<<ConnectAsync>b\_\_1>d.MoveNext()
--- End of stack trace from previous location ---
at MQTTnet.Adapter.MqttChannelAdapter.ConnectAsync(CancellationToken cancellationToken)
--- End of inner exception stack trace ---
at MQTTnet.Adapter.MqttChannelAdapter.WrapAndThrowException(Exception exception)
at MQTTnet.Adapter.MqttChannelAdapter.ConnectAsync(CancellationToken cancellationToken)
at MQTTnet.Client.MqttClient.ConnectInternal(IMqttChannelAdapter channelAdapter, CancellationToken cancellationToken)
at MQTTnet.Client.MqttClient.ConnectAsync(MqttClientOptions options, CancellationToken cancellationToken)
at MQTTnet.Client.MqttClient.ConnectAsync(MqttClientOptions options, CancellationToken cancellationToken)
at AlertaPulsera.MainPage.OnConectarPulsosClicked(Object sender, EventArgs e) in C:\\Users\\Sergio\\source\\repos\\AlertaPulsera\\AlertaPulsera\\MainPage.xaml.cs:line 369

[EGL_emulation] app_time_stats: avg=61.96ms min=7.61ms max=956.20ms count=26

[EGL_emulation] app_time_stats: avg=188.80ms min=20.84ms max=926.16ms count=7

[EGL_emulation] app_time_stats: avg=241.69ms min=12.14ms max=1254.87ms count=7

Bro, el registro confirma que sigue fallando el establecimiento de **TLS**, no muestra un rechazo de usuario o contraseña. Las líneas importantes son:

```text
SSLHandshakeException
OPENSSL_internal:UNEXPECTED_MESSAGE
Caused by: java.security.cert.CertificateException
```

Aparece un error durante la validación del certificado, pero todavía no dice si es por confianza, nombre del servidor u otra incidencia en la negociación. No conviene instalar certificados ni cambiar credenciales a ciegas.

## Agrega este diagnóstico a la configuración TLS

Reemplaza únicamente el bloque `.WithTlsOptions(...)` por este:

```csharp
.WithTlsOptions(tls =>
{
    tls.UseTls();

    tls.WithSslProtocols(
        System.Security.Authentication.SslProtocols.Tls12);

    tls.WithCertificateValidationHandler(context =>
    {
        System.Diagnostics.Debug.WriteLine(
            $"[PULSOS TLS] Errores: {context.SslPolicyErrors}");

        if (context.Certificate != null)
        {
            System.Diagnostics.Debug.WriteLine(
                $"[PULSOS TLS] Certificado: {context.Certificate.Subject}");

            System.Diagnostics.Debug.WriteLine(
                $"[PULSOS TLS] Emisor: {context.Certificate.Issuer}");
        }

        if (context.Chain != null)
        {
            foreach (var estado in context.Chain.ChainStatus)
            {
                System.Diagnostics.Debug.WriteLine(
                    $"[PULSOS TLS] Cadena: {estado.Status} " +
                    $"{estado.StatusInformation}");
            }
        }

        return context.SslPolicyErrors ==
            System.Net.Security.SslPolicyErrors.None;
    });
})
```

MQTTnet permite inspeccionar `SslPolicyErrors` y el estado de la cadena mediante este manejador. El código solo acepta el certificado cuando no hay errores: no usa el peligroso `return true` incondicional. [^52_1000][^52_1006]

## Qué necesito del siguiente intento

Ejecuta de nuevo y copia de “Salida → Depurar” las líneas que empiecen por:

```text
[PULSOS TLS]
```

Si no aparece ninguna, dímelo: también es un dato útil. Además, pega el bloque que construye tus opciones, desde `new MqttClientOptionsBuilder()` hasta `.Build()`, sustituyendo cualquier host, usuario o contraseña escritos directamente por `"OCULTO"`.

Así revisamos la configuración real sin tocar Bluetooth, Firebase ni el resto de la app.

<span style="display:none">[^52_1][^52_10][^52_11][^52_12][^52_13][^52_14][^52_15][^52_16][^52_17][^52_18][^52_19][^52_2][^52_20][^52_21][^52_22][^52_23][^52_24][^52_25][^52_26][^52_27][^52_28][^52_29][^52_3][^52_30][^52_31][^52_32][^52_33][^52_34][^52_35][^52_36][^52_37][^52_4][^52_5][^52_6][^52_7][^52_8][^52_9]</span>

<div align="center">⁂</div>

[^52_1]: imagen.jpg

[^52_2]: imagen.jpg

[^52_3]: imagen.jpg

[^52_4]: imagen.jpg

[^52_5]: imagen.jpg

[^52_6]: imagen.jpg

[^52_7]: imagen.jpg

[^52_8]: imagen.jpg

[^52_9]: imagen.jpg

[^52_10]: imagen.jpg

[^52_11]: imagen.jpg

[^52_12]: imagen.jpg

[^52_13]: imagen.jpg

[^52_14]: imagen.jpg

[^52_15]: imagen.jpg

[^52_16]: imagen.jpg

[^52_17]: imagen.jpg

[^52_18]: imagen.jpg

[^52_19]: imagen.jpg

[^52_20]: imagen.jpg

[^52_21]: imagen.jpg

[^52_22]: imagen.jpg

[^52_23]: https://stackoverflow.com/questions/63223539/ssl-error-the-message-received-was-unexpected-or-badly-formatted-for-a-net-ap

[^52_24]: https://github.com/dotnet/MQTTnet/blob/master/Samples/Client/Client_Connection_Samples.cs

[^52_25]: https://stackoverflow.com/questions/57680987/how-to-fix-the-the-message-received-was-unexpected-or-badly-formatted

[^52_26]: https://www.reddit.com/r/csharp/comments/1fkjaoo/mqttnet_how_to_reset_the_remotevalidationcallback/

[^52_27]: https://oneuptime.com/blog/post/2025-12-23-fix-ssl-certificate-problem-errors/view

[^52_28]: https://stackoverflow.com/questions/63367614/pfx-certificate-imported-for-tls-ssl-encryption-of-mqttnet-client-messages-works

[^52_29]: https://github.com/dotnet/MQTTnet/issues/2233

[^52_30]: https://learn.microsoft.com/en-us/dotnet/api/system.net.security.remotecertificatevalidationcallback?view=net-10.0

[^52_31]: https://sslinsights.com/how-to-fix-error-ssl-unexpected-message/

[^52_32]: https://github.com/dotnet/MQTTnet/issues/2040

[^52_33]: https://learn.microsoft.com/es-es/windows/win32/secauthn/schannel-error-codes-for-tls-and-ssl-alerts

[^52_34]: https://community.home-assistant.io/t/connecting-to-a-mqtt-over-tls-not-working/462114

[^52_35]: https://intl.cloud.tencent.com/pt/document/product/1294/76766

[^52_36]: https://www.bevywise.com/mqtt-broker/resources/dotnet-mqtt-client.html

[^52_37]: https://staticintl.cloudcachetci.com/doc/pdf/product/pdf/1294_76460_en.pdf


---

# using Plugin.BLE;

using Plugin.BLE.Abstractions;
using Plugin.BLE.Abstractions.Contracts;
using Plugin.BLE.Abstractions.EventArgs;
using Plugin.Firebase.CloudMessaging;
using Plugin.Firebase.Auth;
using Plugin.Firebase.Firestore;
using MQTTnet;
using MQTTnet.Client;
using System.Globalization;

namespace AlertaPulsera;
public partial class MainPage : ContentPage
{
private IAdapter? \_adapter;
private readonly HashSet\<Guid> \_dispositivosVistos = new();
private bool \_buscando;
private bool \_paginaVisible;
private IMqttClient? \_clientePulsos;
private bool \_conectandoPulsos;

```
private const string TopicPulsos = "pulsera/prueba/pulsos";

// Completa estos valores localmente.
// Servidor: solo el host, sin mqtts:// ni :8883.
private const string ServidorPulsos = "i1f747d1.ala.us-east-1.emqxsl.com";
private const string UsuarioPulsos = "puente-pulsera";
private const string ClavePulsos = "DiegoGare03";

public MainPage()
{
    InitializeComponent();
}

protected override void OnAppearing()
{
    base.OnAppearing();
    _paginaVisible = true;
}

protected override async void OnDisappearing()
{
    _paginaVisible = false;
    base.OnDisappearing();

    try
    {
        if (_adapter?.IsScanning == true)
        {
            await _adapter.StopScanningForDevicesAsync();
        }
    }
    catch (Exception ex)
    {
        System.Diagnostics.Debug.WriteLine(ex);
    }
}

private async void OnBuscarBluetoothClicked(
    object sender,
    EventArgs e)
{
    if (_buscando)
        return;

    _buscando = true;
    BuscarBluetoothButton.IsEnabled = false;

    try
    {
        EstadoBluetoothLabel.Text = "Solicitando permisos...";

        var permiso = await Permissions
            .RequestAsync<PermisosBluetooth>();

        if (permiso != PermissionStatus.Granted)
        {
            EstadoBluetoothLabel.Text =
                "Debes permitir el acceso a dispositivos cercanos " +
                "o ubicación, según tu versión de Android.";
            return;
        }

        var bluetooth = CrossBluetoothLE.Current;

        if (bluetooth.State != BluetoothState.On)
        {
            EstadoBluetoothLabel.Text =
                "Bluetooth no disponible o apagado. " +
                "Actívalo en los ajustes del celular.";
            return;
        }

        _adapter = bluetooth.Adapter;
        _adapter.ScanTimeout = 10000;

        _dispositivosVistos.Clear();
        DispositivosLayout.Children.Clear();

        _adapter.DeviceDiscovered += OnDispositivoEncontrado;

        EstadoBluetoothLabel.Text =
            "Buscando dispositivos BLE durante 10 segundos...";

        await _adapter.StartScanningForDevicesAsync();

        if (_paginaVisible)
        {
            EstadoBluetoothLabel.Text =
                $"Búsqueda terminada: " +
                $"{_dispositivosVistos.Count} dispositivos encontrados.";
        }
    }
    catch (Exception ex)
    {
        EstadoBluetoothLabel.Text = "No se pudo buscar Bluetooth.";

        await DisplayAlert(
            "Bluetooth",
            ex.Message,
            "Aceptar");
    }
    finally
    {
        if (_adapter != null)
        {
            _adapter.DeviceDiscovered -= OnDispositivoEncontrado;
        }

        _buscando = false;
        BuscarBluetoothButton.IsEnabled = true;
    }
}

private void OnDispositivoEncontrado(
    object? sender,
    DeviceEventArgs e)
{
    var dispositivo = e.Device;

    MainThread.BeginInvokeOnMainThread(() =>
    {
        if (!_paginaVisible || !_buscando)
            return;

        if (!_dispositivosVistos.Add(dispositivo.Id))
            return;

        string nombre = string.IsNullOrWhiteSpace(dispositivo.Name)
            ? "Dispositivo sin nombre"
            : dispositivo.Name;

        DispositivosLayout.Children.Add(new Label
        {
            Text = $"{nombre}\n" +
                   $"ID: {dispositivo.Id}\n" +
                   $"Señal: {dispositivo.Rssi} dBm",
            FontSize = 14,
            Margin = new Thickness(0, 5)
        });
    });
}

private async void OnActivarClicked(object sender, EventArgs e)
{
    if (sender is Button boton)
        boton.IsEnabled = false;

    try
    {
        EstadoLabel.Text = "Configurando...";
```

\#if ANDROID
if (OperatingSystem.IsAndroidVersionAtLeast(33))
{
var permiso = await Permissions
.RequestAsync\<Permissions.PostNotifications>();

```
            if (permiso != PermissionStatus.Granted)
            {
                EstadoLabel.Text =
                    "Debes permitir las notificaciones.";
                return;
            }
        }
```

\#endif

```
        EstadoLabel.Text = "Iniciando sesión...";

        var auth = CrossFirebaseAuth.Current;
        var usuario = auth.CurrentUser;

        if (usuario == null)
        {
            usuario = await auth.SignInAnonymouslyAsync();
        }

        if (usuario == null)
        {
            throw new InvalidOperationException(
                "No se pudo iniciar la sesión.");
        }

        EstadoLabel.Text = "Obteniendo token...";

        var token = await CrossFirebaseCloudMessaging
            .Current.GetTokenAsync();

        if (string.IsNullOrWhiteSpace(token))
        {
            throw new InvalidOperationException(
                "Firebase no devolvió un token.");
        }

        TokenEditor.Text = token;

        const string claveInstalacion = "pulsera_instalacion_id";

        var instalacionId = Preferences.Default.Get(
            claveInstalacion,
            string.Empty);

        if (string.IsNullOrWhiteSpace(instalacionId))
        {
            instalacionId = Guid.NewGuid().ToString("N");

            Preferences.Default.Set(
                claveInstalacion,
                instalacionId);
        }

        EstadoLabel.Text = "Guardando token en Firebase...";

        var datos = new Dictionary<object, object>
```

{
{ "token", token },
{ "plataforma", "android" },
{ "actualizadoUtc", DateTime.UtcNow.ToString("O") }
};

```
        var ruta =
            $"usuarios/{usuario.Uid}/dispositivos/{instalacionId}";

        await CrossFirebaseFirestore.Current
            .GetDocument(ruta)
            .SetDataAsync(datos);

        EstadoLabel.Text = "Token registrado correctamente.";

        await DisplayAlert(
            "Registro ejecutado",
            $"Revisa esta ruta en Firestore:\n\n{ruta}",
            "Aceptar");
    }
    catch (Exception ex)
    {
        EstadoLabel.Text = "No se pudo registrar el token.";

        await DisplayAlert(
            "Configuración",
            ex.Message,
            "Aceptar");
    }
    finally
    {
        if (sender is Button botonFinal)
            botonFinal.IsEnabled = true;
    }
}

private async void OnCopiarClicked(object sender, EventArgs e)
{
    if (!string.IsNullOrWhiteSpace(TokenEditor.Text))
    {
        await Clipboard.Default.SetTextAsync(TokenEditor.Text);

        await DisplayAlert(
            "Listo",
            "Token copiado.",
            "Aceptar");
    }
}

private async void OnConectarPulsosClicked(
object sender,
EventArgs e)
{
    if (_conectandoPulsos)
        return;

    _conectandoPulsos = true;
    ConectarPulsosButton.IsEnabled = false;

    try
    {
        EstadoPulsosLabel.Text = "Conectando a EMQX...";

        if (_clientePulsos == null)
        {
            _clientePulsos = new MqttFactory().CreateMqttClient();

            _clientePulsos.ApplicationMessageReceivedAsync += args =>
            {
                if (args.ApplicationMessage.Topic != TopicPulsos)
                    return Task.CompletedTask;

                var texto = args.ApplicationMessage
                    .ConvertPayloadToString()
                    .Trim();

                var valido = double.TryParse(
                    texto,
                    NumberStyles.Float,
                    CultureInfo.InvariantCulture,
                    out var bpm);

                MainThread.BeginInvokeOnMainThread(() =>
                {
                    if (!_paginaVisible)
                        return;

                    if (!valido || !double.IsFinite(bpm) || bpm <= 0)
                    {
                        PulsosLabel.Text = "-- BPM";
                        EstadoPulsosLabel.Text =
                            "Lectura no válida. Esperando un valor de BPM.";
                        return;
                    }

                    PulsosLabel.Text = $"{bpm:0.#} BPM";
                    EstadoPulsosLabel.Text = string.Empty;
                });

                return Task.CompletedTask;
            };

            _clientePulsos.DisconnectedAsync += args =>
            {
                MainThread.BeginInvokeOnMainThread(() =>
                {
                    PulsosLabel.Text = "-- BPM";
                    EstadoPulsosLabel.Text =
                        "Conexión de pulsos perdida. Pulsa Conectar pulsos.";
                });

                return Task.CompletedTask;
            };
        }

        using var tiempoLimite =
            new CancellationTokenSource(TimeSpan.FromSeconds(20));

        if (!_clientePulsos.IsConnected)
        {
            var opciones = new MqttClientOptionsBuilder()
                .WithClientId(
                    "AlertaPulsera-" + Guid.NewGuid().ToString("N"))
                .WithTcpServer(ServidorPulsos, 8883)
                .WithCredentials(UsuarioPulsos, ClavePulsos)
```

.WithTlsOptions(tls =>
{
tls.UseTls();
tls.WithSslProtocols(
System.Security.Authentication.SslProtocols.Tls12);
}).WithCleanSession()
.Build();

```
            await _clientePulsos.ConnectAsync(
                opciones,
                tiempoLimite.Token);
        }

        EstadoPulsosLabel.Text = "Suscribiendo a pulsos...";

        var suscripcion = new MqttFactory()
            .CreateSubscribeOptionsBuilder()
            .WithTopicFilter(f => f.WithTopic(TopicPulsos))
            .Build();

        var resultado = await _clientePulsos.SubscribeAsync(
            suscripcion,
            tiempoLimite.Token);

        foreach (var item in resultado.Items)
        {
            if ((int)item.ResultCode >= 128)
            {
                throw new InvalidOperationException(
                    "EMQX rechazó la suscripción: " +
                    item.ResultCode);
            }
        }

        EstadoPulsosLabel.Text =
            "Conectado. Esperando lectura de la pulsera...";
    }
    catch (OperationCanceledException)
    {
        EstadoPulsosLabel.Text =
            "La conexión tardó demasiado. Intenta de nuevo.";
    }
    catch (Exception ex)
    {
        EstadoPulsosLabel.Text =
            "No se pudo conectar la recepción de pulsos.";

        var detalle = new System.Text.StringBuilder();

        for (Exception? error = ex;
             error != null;
             error = error.InnerException)
        {
            detalle.AppendLine(error.GetType().Name);
            detalle.AppendLine(error.Message);
            detalle.AppendLine();
        }

        System.Diagnostics.Debug.WriteLine(ex.ToString());

        await DisplayAlert(
            "Detalle de conexión",
            detalle.ToString(),
            "Aceptar");
    }
    finally
    {
        _conectandoPulsos = false;
        ConectarPulsosButton.IsEnabled = true;
    }
}
```

} dime que es para que el esp32 acepte el wifi que mandas de la app y se conecte a bluetooth con este

Con este código todavía no se envía el Wi-Fi a la ESP32 ni se establece una conexión Bluetooth con ella: solo se buscan dispositivos BLE y se muestran en pantalla.

Lo que quieres implementar se llama **aprovisionamiento Wi-Fi por BLE**: la app se conecta por Bluetooth a la ESP32, le envía el nombre y la contraseña de la red, y la ESP32 usa esos datos para conectarse al Wi-Fi. Espressif admite este funcionamiento, pero debe estar implementado en ambos lados: app y firmware de la ESP32. [^53_1011]

## Qué hace tu código ahora

| Parte | Lo que hace |
| :-- | :-- |
| `OnBuscarBluetoothClicked` | Solicita permisos y busca dispositivos BLE durante 10 segundos. |
| `OnDispositivoEncontrado` | Agrega una etiqueta con nombre, ID y señal. No conecta con el dispositivo. |
| `OnActivarClicked` | Registra el token de notificaciones en Firebase. |
| `OnConectarPulsosClicked` | Conecta la app a EMQX y se suscribe al topic de pulsos. No configura el Wi-Fi de la ESP32. |

Además, en el código que pegaste no hay ninguna lectura de los campos de nombre y contraseña del Wi-Fi ni una operación que envíe esos datos por Bluetooth.

## Qué falta para que funcione

El flujo debe ser:

```text
1. La ESP32 anuncia su servicio Bluetooth BLE.
                     ↓
2. La app encuentra la ESP32 y permite seleccionarla.
                     ↓
3. La app se conecta a su servicio BLE.
                     ↓
4. El usuario introduce el nombre y la contraseña del Wi-Fi.
                     ↓
5. La app envía esos datos usando el protocolo acordado.
                     ↓
6. La ESP32 recibe los datos e intenta conectarse al Wi-Fi.
                     ↓
7. La ESP32 informa si la conexión fue exitosa.
```

Para que ambos lados se entiendan, deben coincidir el servicio y las características BLE —identificados mediante **UUID**— y el formato de los mensajes. Si la ESP32 usa el aprovisionamiento oficial de Espressif, hay que respetar su protocolo; no basta con enviar cualquier texto con la contraseña. [^53_1012][^53_1017]

Por eso no sería correcto inventarte ahora un UUID o un mensaje como `wifi|clave`: podría no coincidir con lo que espera tu ESP32.

## Antes de continuar

Pegaste una contraseña MQTT en el código. Cámbiala en EMQX y actualízala localmente tanto en el puente como en la app. No hace falta que vuelvas a compartirla.

Pásame el código que tienes cargado en la ESP32 —sin contraseñas ni tokens— y el fragmento de `MainPage.xaml` donde están los campos y el botón para enviar el Wi-Fi. Con eso podemos agregar la conexión y el envío compatibles con tu ESP32, conservando Bluetooth, Firebase y los pulsos que ya tienes.

<span style="display:none">[^53_1][^53_10][^53_11][^53_12][^53_13][^53_14][^53_15][^53_2][^53_3][^53_4][^53_5][^53_6][^53_7][^53_8][^53_9]</span>

<div align="center">⁂</div>

[^53_1]: https://docs.espressif.com/projects/esp-idf/en/v5.2.1/esp32/api-reference/provisioning/wifi_provisioning.html

[^53_2]: https://docs.espressif.com/projects/esp-idf/en/stable/esp32/api-reference/provisioning/provisioning.html

[^53_3]: https://docs.espressif.com/projects/esp-idf/en/stable/esp32/api-guides/ble/blufi.html

[^53_4]: https://docs.espressif.com/projects/esp-idf/zh_CN/v4.3/esp32/api-reference/provisioning/wifi_provisioning.html

[^53_5]: https://docs.espressif.com/projects/esp-idf/en/v4.4/esp32/api-reference/provisioning/provisioning.html

[^53_6]: https://docs.espressif.com/projects/esp-idf/en/v6.1.1/esp32s3/api-guides/ble/get-started/ble-data-exchange.html

[^53_7]: https://docs.espressif.com/projects/esp-idf/en/v5.0.6/esp32s3/api-reference/provisioning/wifi_provisioning.html

[^53_8]: https://docs.espressif.com/projects/esp-idf/en/v4.4/esp32s2/api-reference/provisioning/wifi_provisioning.html

[^53_9]: https://docs.espressif.com/projects/esp-idf/en/v4.4-beta1/esp32/api-reference/provisioning/wifi_provisioning.html

[^53_10]: https://docs.espressif.com/projects/esp-idf/en/stable/esp32c3/api-reference/bluetooth/bt_le.html

[^53_11]: https://docs.espressif.com/projects/esp-idf/en/release-v4.2/esp32/api-reference/provisioning/wifi_provisioning.html

[^53_12]: https://docs.espressif.com/projects/esp-idf/en/release-v5.4/esp32/api-reference/provisioning/wifi_provisioning.html

[^53_13]: https://docs.espressif.com/projects/esp-idf/en/release-v4.4/esp32/api-reference/provisioning/wifi_provisioning.html

[^53_14]: https://docs.espressif.com/projects/esp-idf/en/v5.5-rc1/esp32/api-reference/provisioning/wifi_provisioning.html

[^53_15]: https://docs.espressif.com/projects/esp-idf/en/v4.3-beta2/esp32/api-reference/provisioning/wifi_provisioning.html


---

# private const string ServidorPulsos = "i1f747d1.ala.us-east-1.emqxsl.com";

private const string UsuarioPulsos = "puente-pulsera";
private const string ClavePulsos = ""; aqui ke va ps o sea en general

Ahí van los datos para que la app se conecte al servidor **EMQX**, no los datos del Wi-Fi ni del Bluetooth:

```csharp
private const string ServidorPulsos = "HOST_DE_EMQX";
private const string UsuarioPulsos = "USUARIO_MQTT";
private const string ClavePulsos = "CONTRASEÑA_MQTT";
```

- `ServidorPulsos`: la dirección del servidor EMQX. En tu código ya pusiste un host.
- `UsuarioPulsos`: el usuario MQTT que configuraste para conectarte al servidor, como el que utiliza `PuentePulsera`.
- `ClavePulsos`: la contraseña MQTT de ese usuario. **No es** la contraseña del Wi-Fi ni la de tu cuenta del panel de EMQX.

En resumen: en las comillas vacías de `ClavePulsos` va la contraseña MQTT que usas en el puente. Como la anterior quedó compartida aquí, pon la nueva después de cambiarla en EMQX; actualízala también en el puente y no la pegues en el chat.

Los datos del Wi-Fi de tu casa van aparte, en los campos de la app destinados a enviárselos a la ESP32.

---

# a y donde hice ese usuario?

Ese usuario se crea en el panel de **EMQX Cloud**, dentro de tu servidor; no en Firebase ni en Visual Studio. No tengo confirmado cuándo lo creaste, pero puedes revisar si `puente-pulsera` está registrado ahí.

## Dónde encontrarlo

1. Entra al panel de EMQX Cloud con tu cuenta.
2. Abre tu despliegue, el servidor que estás usando para la pulsera.
3. En el menú izquierdo, entra en **Access Control** → **Authentication**. Según la interfaz, puede aparecer como “Client Authentication”.
4. Busca el usuario `puente-pulsera`. Esa sección muestra los usuarios MQTT registrados.[^55_1][^55_2]

Si aparece, ese es el nombre que va aquí:

```csharp
private const string UsuarioPulsos = "puente-pulsera";
```

Si no recuerdas su contraseña, puedes cambiarla con el icono de editar junto al usuario. Después pon la nueva contraseña en `ClavePulsos` y actualízala también en `PuentePulsera`. Como la anterior quedó compartida en el chat, cámbiala aunque todavía la recuerdes.[^55_1]

Si el usuario no aparece, se crea desde esa misma pantalla con “Add”: eliges un nombre de usuario y una contraseña, y confirmas. Escribirlos en C\# por sí solo no crea el usuario en EMQX.[^55_3]

<span style="display:none">[^55_10][^55_4][^55_5][^55_6][^55_7][^55_8][^55_9]</span>

<div align="center">⁂</div>

[^55_1]: https://docs.emqx.com/en/cloud/latest/deployments/default_auth.html

[^55_2]: https://docs.emqx.com/en/cloud/latest/connect_to_deployments/mqttx.html

[^55_3]: https://docs.emqx.com/en/cloud/latest/create/serverless.html

[^55_4]: https://docs.emqx.com/en/cloud/latest/connect_to_deployments/apache_nifi.html

[^55_5]: https://docs.emqx.com/en/cloud/latest/connect_to_deployments/esp8266.html

[^55_6]: https://docs.emqx.com/en/cloud/latest/deployments/redis_auth.html

[^55_7]: https://docs.emqx.com/en/cloud/latest/quick_start/introduction.md

[^55_8]: https://docs.emqx.com/en/cloud/latest/create/serverless.md

[^55_9]: https://docs.emqx.com/en/cloud/latest/faq/deploy.html

[^55_10]: https://docs.emqx.com/en/cloud/latest/connect_to_deployments/mqttfx.html


---

# a si ese es pero ya lo puse y me sigue dando lo de autenticacion

Sí, entonces no sigamos cambiando el usuario ni la contraseña. El error que compartiste antes ocurre en **TLS**, al establecer la conexión segura:

```text
SSLHandshakeException
UNEXPECTED_MESSAGE
java.security.cert.CertificateException
```

Aunque diga “Authentication failed”, en ese registro se refiere a la autenticación de la conexión segura, no necesariamente al usuario MQTT. .NET también genera `AuthenticationException` cuando falla esa negociación. [^56_1031]

## Falta el diagnóstico en el código que pegaste

Tu último código todavía tiene solamente esto:

```csharp
.WithTlsOptions(tls =>
{
    tls.UseTls();
    tls.WithSslProtocols(
        System.Security.Authentication.SslProtocols.Tls12);
})
```

No incluye el bloque de diagnóstico del certificado que te pasé. Reemplaza únicamente esa parte por:

```csharp
.WithTlsOptions(tls =>
{
    tls.UseTls();

    tls.WithSslProtocols(
        System.Security.Authentication.SslProtocols.Tls12);

    tls.WithCertificateValidationHandler(context =>
    {
        System.Diagnostics.Debug.WriteLine(
            $"[PULSOS TLS] Errores: {context.SslPolicyErrors}");

        if (context.Chain != null)
        {
            foreach (var estado in context.Chain.ChainStatus)
            {
                System.Diagnostics.Debug.WriteLine(
                    $"[PULSOS TLS] Cadena: {estado.Status} " +
                    $"{estado.StatusInformation}");
            }
        }

        return context.SslPolicyErrors ==
            System.Net.Security.SslPolicyErrors.None;
    });
})
```

Esto nos permite inspeccionar la validación sin aceptar certificados con errores. No uses `return true` para saltarte la comprobación. [^56_1000][^56_1030]

Después ejecuta, pulsa “Conectar pulsos” y, en “Ver → Salida → Depurar”, copia las líneas que empiecen por `[PULSOS TLS]`. Si no aparece ninguna, dime eso; no hace falta volver a compartir las credenciales.

<span style="display:none">[^56_1][^56_10][^56_11][^56_12][^56_13][^56_14][^56_15][^56_16][^56_2][^56_3][^56_4][^56_5][^56_6][^56_7][^56_8][^56_9]</span>

<div align="center">⁂</div>

[^56_1]: https://github.com/dotnet/MQTTnet/blob/master/Samples/Client/Client_Connection_Samples.cs

[^56_2]: https://learn.microsoft.com/en-us/azure/event-grid/mqtt-transport-layer-security-flow

[^56_3]: https://learn.microsoft.com/en-us/azure/iot-operations/manage-mqtt-broker/howto-configure-brokerlistener

[^56_4]: https://learn.microsoft.com/en-us/dotnet/core/extensions/httpclient-sni

[^56_5]: https://learn.microsoft.com/en-us/azure/iot-hub/iot-mqtt-connect-to-iot-hub

[^56_6]: https://learn.microsoft.com/en-us/azure/iot-hub/iot-hub-devguide-protocols

[^56_7]: https://learn.microsoft.com/en-us/azure/iot-dps/iot-mqtt-connect-to-iot-dps

[^56_8]: https://learn.microsoft.com/en-us/azure/iot-operations/manage-mqtt-broker/howto-test-connection

[^56_9]: https://learn.microsoft.com/en-us/dotnet/core/extensions/sslstream-best-practices

[^56_10]: https://learn.microsoft.com/en-us/dotnet/api/system.net.security.sslstream?view=net-9.0

[^56_11]: http://www.learn.microsoft.com/en-us/dotnet/articles/core/extensions/sslstream-best-practices

[^56_12]: https://learn.microsoft.com/th-th/ dotnet/core/extensions/sslstream-best-practices

[^56_13]: https://learn.microsoft.com/en-us/dotnet/api/system.net.security.sslstream.authenticateasclientasync?view=net-10.0

[^56_14]: https://learn.microsoft.com/en-us/dotnet/api/system.net.security.sslstream.authenticateasserver?view=net-11.0\&viewFallbackFrom=net-10.0-pp

[^56_15]: https://learn.microsoft.com/nb-no/dotnet/api/system.net.security.sslstream.authenticateasclient?view=net-6.0-pp

[^56_16]: https://learn.microsoft.com/en-us/dotnet/core/extensions/sslstream-troubleshooting


---

# err\] at com.android.org.conscrypt.Platform.checkServerTrusted(Platform.java:265)

[System.err] at com.android.org.conscrypt.ConscryptEngine.verifyCertificateChain(ConscryptEngine.java:1631)

[System.err] at com.android.org.conscrypt.NativeCrypto.ENGINE_SSL_read_direct(Native Method)

[System.err] at com.android.org.conscrypt.NativeSsl.readDirectByteBuffer(NativeSsl.java:570)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextDataDirect(ConscryptEngine.java:1088)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextDataHeap(ConscryptEngine.java:1108)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextData(ConscryptEngine.java:1080)

[System.err] ... 4 more

[e.alertapulsera] Explicit concurrent mark compact GC freed 2689KB AllocSpace bytes, 3(60KB) LOS objects, 49% free, 4647KB/9294KB, paused 3.399ms,3.312ms total 28.786ms

[0:] MQTTnet.Exceptions.MqttCommunicationException: Authentication failed, see inner exception.
---> System.Security.Authentication.AuthenticationException: Authentication failed, see inner exception.
---> Interop+AndroidCrypto+SslException: Exception of type 'Interop+AndroidCrypto+SslException' was thrown.
--- End of inner exception stack trace ---

at System.Net.Security.SslStream.\<ForceAuthenticationAsync>d\_\_157\`1$$
[System.Net.Security.AsyncReadWriteAdapter, System.Net.Security, Version=9.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a]
$$.MoveNext()

at MQTTnet.Implementations.MqttTcpChannel.ConnectAsync(CancellationToken cancellationToken)
at MQTTnet.Implementations.MqttTcpChannel.ConnectAsync(CancellationToken cancellationToken)
at MQTTnet.Adapter.MqttChannelAdapter.\<>c\_\_DisplayClass30_0.\<<ConnectAsync>b\_\_1>d.MoveNext()
--- End of stack trace from previous location ---
at MQTTnet.Adapter.MqttChannelAdapter.ConnectAsync(CancellationToken cancellationToken)
--- End of inner exception stack trace ---
at MQTTnet.Adapter.MqttChannelAdapter.WrapAndThrowException(Exception exception)
at MQTTnet.Adapter.MqttChannelAdapter.ConnectAsync(CancellationToken cancellationToken)
at MQTTnet.Client.MqttClient.ConnectInternal(IMqttChannelAdapter channelAdapter, CancellationToken cancellationToken)
at MQTTnet.Client.MqttClient.ConnectAsync(MqttClientOptions options, CancellationToken cancellationToken)
at MQTTnet.Client.MqttClient.ConnectAsync(MqttClientOptions options, CancellationToken cancellationToken)
at AlertaPulsera.MainPage.OnConectarPulsosClicked(Object sender, EventArgs e) in C:\\Users\\Sergio\\source\\repos\\AlertaPulsera\\AlertaPulsera\\MainPage.xaml.cs:line 398

[EGL_emulation] app_time_stats: avg=113.10ms min=2.82ms max=1334.22ms count=17

[EGL_emulation] app_time_stats: avg=134.07ms min=7.09ms max=1299.83ms count=11
sigue dando lo mismo

Sí, sigue fallando en **TLS**, antes de completar la conexión MQTT. Este fragmento no contiene las líneas `[PULSOS TLS]`, así que todavía no tenemos el resultado del diagnóstico del certificado. El mensaje `Authentication failed` por sí solo no demuestra que la contraseña esté mal: también se genera cuando falla la autenticación de la conexión segura. [^57_1031]

No te voy a pedir que vuelvas a cambiar las credenciales ni a pegar el mismo bloque. Vamos a separar el problema con una prueba.

## 1. Prueba la app en un celular físico

Los mensajes `EGL_emulation` indican que esta ejecución está en el emulador.

Ejecuta la misma app en un Android físico, preferentemente conectado al mismo Wi-Fi de la laptop, y pulsa “Conectar pulsos”. No cambies el host, el puerto `8883` ni las opciones de seguridad para esta prueba.

- Si conecta en el celular, habremos acotado el fallo al entorno del emulador.
- Si falla igual, seguiremos revisando la configuración TLS compartida por ambas ejecuciones.

Es una prueba para localizar la causa, no una garantía de solución.

## 2. Confirma si el diagnóstico llegó a ejecutarse

En Visual Studio, dentro de “Salida → Depurar”, busca exactamente:

```text
[PULSOS TLS]
```

Necesitamos distinguir estas dos situaciones:

- Hay líneas: copia esas líneas, especialmente `Errores:` y `Cadena:`.
- No hay ninguna: dime “no aparece PULSOS TLS”. No debemos asumir que el certificado fue aceptado o rechazado si el manejador no produjo salida.

No desactives la validación del certificado para conseguir que conecte; la conexión debe verificar la identidad del servidor. [^57_1030]

¿Puedes probarlo en un celular físico y decirme si conecta y si aparece alguna línea `[PULSOS TLS]`?

<span style="display:none">[^57_1][^57_10][^57_11][^57_12][^57_13][^57_14][^57_15][^57_16][^57_17][^57_2][^57_3][^57_4][^57_5][^57_6][^57_7][^57_8][^57_9]</span>

<div align="center">⁂</div>

[^57_1]: https://learn.microsoft.com/en-us/dotnet/core/extensions/sslstream-best-practices

[^57_2]: https://learn.microsoft.com/en-us/dotnet/api/system.net.security.sslstream?view=net-9.0

[^57_3]: https://www.emqx.com/en

[^57_4]: https://android.googlesource.com/platform/external/grpc-grpc/+/179b4e81a04ddad8bb1bc4de0e1ed2141969f9cd^2..179b4e81a04ddad8bb1bc4de0e1ed2141969f9cd/

[^57_5]: https://www.techqe.com/how-do-i-connect-to-emqx-the-complete-mqtt-integration-guide/

[^57_6]: https://cvemanager.app.bluemind.net/cvemanager/report/5.0.4

[^57_7]: https://www.nuget.org/packages/MQTTnet/

[^57_8]: https://cloud.tencent.com/developer/ask/sof/116573303

[^57_9]: https://mqttx.app/web

[^57_10]: https://cvemanager.app.bluemind.net/cvemanager/report/5.4.3

[^57_11]: https://cvemanager.app.bluemind.net/cvemanager/report/5.7.1

[^57_12]: https://www.unpac.me/results/86ea1b21-de2e-4521-8697-015d79baf9a9/

[^57_13]: https://dev.to/emqtech/emqx-mqtt-broker-troubleshooting-connection-issues-1he0

[^57_14]: https://www.unpac.me/results/6fe08dd8-9a96-445d-ac65-24ed23dde922

[^57_15]: https://learn.microsoft.com/en-us/azure/iot-hub/mqtt-v5-get-started

[^57_16]: https://docs.emqx.com/en/emqx/latest/develop/data-integration/data-bridge-mqtt.html

[^57_17]: https://docs.emqx.com/en/emqx/latest/


---

# [EGL_emulation] Opening libGLESv2_emulation.so

[HWUI] Failed to choose config with EGL_SWAP_BEHAVIOR_PRESERVED, retrying without...

[HWUI] Failed to initialize 101010-2 format, error = EGL_SUCCESS

[Gralloc4] mapper 4.x is not supported

[MaterialButton] MaterialButton manages its own background to control elevation, shape, color and states. Consider using backgroundTint, shapeAppearance and other attributes where available. A custom background will ignore these attributes and you should consider handling interaction states such as pressed, focused and disabled

[e.alertapulsera] Compiler allocated 5174KB to compile void android.view.ViewRootImpl.performTraversals()

[MaterialButton] MaterialButton manages its own background to control elevation, shape, color and states. Consider using backgroundTint, shapeAppearance and other attributes where available. A custom background will ignore these attributes and you should consider handling interaction states such as pressed, focused and disabled

[CompatChangeReporter] Compat change id reported: 303326708; UID 10209; state: ENABLED

[monodroid-assembly] open_from_bundles: failed to load bundled assembly Xamarin.AndroidX.Emoji2.dll

[monodroid-assembly] open_from_bundles: the assembly might have been uploaded to the device with FastDev instead

Loaded assembly: /data/data/com.companyname.alertapulsera/files/.__override__/x86_64/Xamarin.AndroidX.Emoji2.dll [External]

[MaterialButton] MaterialButton manages its own background to control elevation, shape, color and states. Consider using backgroundTint, shapeAppearance and other attributes where available. A custom background will ignore these attributes and you should consider handling interaction states such as pressed, focused and disabled

[MaterialButton] MaterialButton manages its own background to control elevation, shape, color and states. Consider using backgroundTint, shapeAppearance and other attributes where available. A custom background will ignore these attributes and you should consider handling interaction states such as pressed, focused and disabled

[MaterialButton] MaterialButton manages its own background to control elevation, shape, color and states. Consider using backgroundTint, shapeAppearance and other attributes where available. A custom background will ignore these attributes and you should consider handling interaction states such as pressed, focused and disabled

[HWUI] Davey! duration=13184ms; Flags=1, FrameTimelineVsyncId=104511, IntendedVsync=8558679617674, Vsync=8569529617240, InputEventId=0, HandleInputStart=8569545273260, AnimationStart=8569545376260, PerformTraversalsStart=8569546081860, DrawStart=8571444395060, FrameDeadline=8558696284340, FrameInterval=8569539539660, FrameStartTime=16666666, SyncQueued=8571648895060, SyncStart=8571650667560, IssueDrawCommandsStart=8571654816160, SwapBuffers=8571848976560, FrameCompleted=8571866011860, DequeueBufferDuration=49700, QueueBufferDuration=1160900, GpuCompleted=8571866011860, SwapBuffersCompleted=8571858068460, DisplayPresentTime=0, CommandSubmissionCompleted=8571848976560,

[e.alertapulsera] Compiler allocated 5417KB to compile void android.view.ViewRootImpl.performTraversals()

[Choreographer] Skipped 168 frames! The application may be doing too much work on its main thread.

[HWUI] Davey! duration=2835ms; Flags=0, FrameTimelineVsyncId=104572, IntendedVsync=8569579617238, Vsync=8572379617126, InputEventId=0, HandleInputStart=8572382467560, AnimationStart=8572382512260, PerformTraversalsStart=8572383603060, DrawStart=8572390838660, FrameDeadline=8571896283812, FrameInterval=8572381450560, FrameStartTime=16666666, SyncQueued=8572392494360, SyncStart=8572393030660, IssueDrawCommandsStart=8572393205560, SwapBuffers=8572399199160, FrameCompleted=8572415568260, DequeueBufferDuration=100000, QueueBufferDuration=348900, GpuCompleted=8572415568260, SwapBuffersCompleted=8572403324960, DisplayPresentTime=4, CommandSubmissionCompleted=8572399199160,

[AssistStructure] Flattened final assist data: 1744 bytes, containing 1 windows, 9 views

Thread started: \<Thread Pool> \#11

Thread started: \<Thread Pool> \#12

[EGL_emulation] app_time_stats: avg=442.18ms min=8.87ms max=1900.81ms count=7

[monodroid-assembly] open_from_bundles: failed to load bundled assembly System.Net.WebSockets.dll

[monodroid-assembly] open_from_bundles: the assembly might have been uploaded to the device with FastDev instead

Loaded assembly: /data/data/com.companyname.alertapulsera/files/.__override__/x86_64/System.Net.WebSockets.dll [External]

[monodroid-assembly] open_from_bundles: failed to load bundled assembly System.Net.NameResolution.dll

[monodroid-assembly] open_from_bundles: the assembly might have been uploaded to the device with FastDev instead

Loaded assembly: /data/data/com.companyname.alertapulsera/files/.__override__/x86_64/System.Net.NameResolution.dll [External]

[ProfileInstaller] Installing profile for com.companyname.alertapulsera

[monodroid-assembly] open_from_bundles: failed to load bundled assembly System.Formats.Asn1.dll

[monodroid-assembly] open_from_bundles: the assembly might have been uploaded to the device with FastDev instead

Loaded assembly: /data/data/com.companyname.alertapulsera/files/.__override__/x86_64/System.Formats.Asn1.dll [External]

[monodroid-assembly] open_from_bundles: failed to load bundled assembly System.Runtime.Numerics.dll

[monodroid-assembly] open_from_bundles: the assembly might have been uploaded to the device with FastDev instead

Loaded assembly: /data/data/com.companyname.alertapulsera/files/.__override__/x86_64/System.Runtime.Numerics.dll [External]

[0:] [PULSOS TLS] Errores: RemoteCertificateChainErrors

[EGL_emulation] app_time_stats: avg=30.50ms min=4.39ms max=946.93ms count=54

[0:] [PULSOS TLS] Certificado: CN=\*.ala.us-east-1.emqxsl.com

[0:] [PULSOS TLS] Emisor: CN=Encryption Everywhere DV TLS CA - G2, OU=www.digicert.com, O=DigiCert Inc, C=US

[0:] [PULSOS TLS] Cadena: RevocationStatusUnknown Unable to determine revocation status due to network error

[0:] [PULSOS TLS] Cadena: RevocationStatusUnknown The certificate's revocation status could not be determined.

[System.err] javax.net.ssl.SSLHandshakeException: Read error: ssl=0x7955cc42e598: Failure in SSL library, usually a protocol error

[System.err] error:100000df:SSL routines:OPENSSL_internal:UNEXPECTED_MESSAGE (external/boringssl/src/ssl/handshake_client.cc:1068 0x795468bcdd4b:0x00000000)

[System.err] at com.android.org.conscrypt.SSLUtils.toSSLHandshakeException(SSLUtils.java:356)

[System.err] at com.android.org.conscrypt.ConscryptEngine.convertException(ConscryptEngine.java:1127)

[System.err] at com.android.org.conscrypt.ConscryptEngine.unwrap(ConscryptEngine.java:912)

[System.err] at com.android.org.conscrypt.ConscryptEngine.unwrap(ConscryptEngine.java:740)

[System.err] at com.android.org.conscrypt.ConscryptEngine.unwrap(ConscryptEngine.java:705)

[System.err] at com.android.org.conscrypt.Java8EngineWrapper.unwrap(Java8EngineWrapper.java:237)

[System.err] at net.dot.android.crypto.DotnetProxyTrustManager.verifyRemoteCertificate(Native Method)

[System.err] at net.dot.android.crypto.DotnetProxyTrustManager.checkServerTrusted(DotnetProxyTrustManager.java:32)

[System.err] at com.android.org.conscrypt.Platform.checkServerTrusted(Platform.java:265)

[System.err] at com.android.org.conscrypt.ConscryptEngine.verifyCertificateChain(ConscryptEngine.java:1631)

[System.err] at com.android.org.conscrypt.NativeCrypto.ENGINE_SSL_read_direct(Native Method)

[System.err] at com.android.org.conscrypt.NativeSsl.readDirectByteBuffer(NativeSsl.java:570)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextDataDirect(ConscryptEngine.java:1088)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextDataHeap(ConscryptEngine.java:1108)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextData(ConscryptEngine.java:1080)

[System.err] at com.android.org.conscrypt.ConscryptEngine.unwrap(ConscryptEngine.java:869)

[System.err] at com.android.org.conscrypt.ConscryptEngine.unwrap(ConscryptEngine.java:740)

[System.err] at com.android.org.conscrypt.ConscryptEngine.unwrap(ConscryptEngine.java:705)

[System.err] at com.android.org.conscrypt.Java8EngineWrapper.unwrap(Java8EngineWrapper.java:237)

[System.err] Caused by: javax.net.ssl.SSLProtocolException: Read error: ssl=0x7955cc42e598: Failure in SSL library, usually a protocol error

[System.err] error:100000df:SSL routines:OPENSSL_internal:UNEXPECTED_MESSAGE (external/boringssl/src/ssl/handshake_client.cc:1068 0x795468bcdd4b:0x00000000)

[System.err] at com.android.org.conscrypt.NativeCrypto.ENGINE_SSL_read_direct(Native Method)

[System.err] at com.android.org.conscrypt.NativeSsl.readDirectByteBuffer(NativeSsl.java:570)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextDataDirect(ConscryptEngine.java:1088)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextDataHeap(ConscryptEngine.java:1108)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextData(ConscryptEngine.java:1080)

[System.err] at com.android.org.conscrypt.ConscryptEngine.unwrap(ConscryptEngine.java:869)

[System.err] ... 16 more

[System.err] javax.net.ssl.SSLHandshakeException

[System.err] at com.android.org.conscrypt.SSLUtils.toSSLHandshakeException(SSLUtils.java:356)

[System.err] at com.android.org.conscrypt.ConscryptEngine.convertException(ConscryptEngine.java:1127)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextData(ConscryptEngine.java:1082)

[System.err] at com.android.org.conscrypt.ConscryptEngine.unwrap(ConscryptEngine.java:869)

[System.err] at com.android.org.conscrypt.ConscryptEngine.unwrap(ConscryptEngine.java:740)

[System.err] at com.android.org.conscrypt.ConscryptEngine.unwrap(ConscryptEngine.java:705)

[System.err] at com.android.org.conscrypt.Java8EngineWrapper.unwrap(Java8EngineWrapper.java:237)

[System.err] Caused by: java.security.cert.CertificateException

[System.err] at net.dot.android.crypto.DotnetProxyTrustManager.checkServerTrusted(DotnetProxyTrustManager.java:33)

[System.err] at com.android.org.conscrypt.Platform.checkServerTrusted(Platform.java:265)

[System.err] at com.android.org.conscrypt.ConscryptEngine.verifyCertificateChain(ConscryptEngine.java:1631)

[System.err] at com.android.org.conscrypt.NativeCrypto.ENGINE_SSL_read_direct(Native Method)

[System.err] at com.android.org.conscrypt.NativeSsl.readDirectByteBuffer(NativeSsl.java:570)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextDataDirect(ConscryptEngine.java:1088)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextDataHeap(ConscryptEngine.java:1108)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextData(ConscryptEngine.java:1080)

[System.err] ... 4 more

[0:] MQTTnet.Exceptions.MqttCommunicationException: Authentication failed, see inner exception.
---> System.Security.Authentication.AuthenticationException: Authentication failed, see inner exception.
---> Interop+AndroidCrypto+SslException: Exception of type 'Interop+AndroidCrypto+SslException' was thrown.
--- End of inner exception stack trace ---

at System.Net.Security.SslStream.\<ForceAuthenticationAsync>d\_\_157\`1$$
[System.Net.Security.AsyncReadWriteAdapter, System.Net.Security, Version=9.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a]
$$.MoveNext()

at MQTTnet.Implementations.MqttTcpChannel.ConnectAsync(CancellationToken cancellationToken)
at MQTTnet.Implementations.MqttTcpChannel.ConnectAsync(CancellationToken cancellationToken)
at MQTTnet.Adapter.MqttChannelAdapter.\<>c\_\_DisplayClass30_0.\<<ConnectAsync>b\_\_1>d.MoveNext()
--- End of stack trace from previous location ---
at MQTTnet.Adapter.MqttChannelAdapter.ConnectAsync(CancellationToken cancellationToken)
--- End of inner exception stack trace ---
at MQTTnet.Adapter.MqttChannelAdapter.WrapAndThrowException(Exception exception)
at MQTTnet.Adapter.MqttChannelAdapter.ConnectAsync(CancellationToken cancellationToken)
at MQTTnet.Client.MqttClient.ConnectInternal(IMqttChannelAdapter channelAdapter, CancellationToken cancellationToken)
at MQTTnet.Client.MqttClient.ConnectAsync(MqttClientOptions options, CancellationToken cancellationToken)
at MQTTnet.Client.MqttClient.ConnectAsync(MqttClientOptions options, CancellationToken cancellationToken)
at AlertaPulsera.MainPage.OnConectarPulsosClicked(Object sender, EventArgs e) in C:\\Users\\Sergio\\source\\repos\\AlertaPulsera\\AlertaPulsera\\MainPage.xaml.cs:line 398

[EGL_emulation] app_time_stats: avg=100.85ms min=12.50ms max=1305.08ms count=22

[EGL_emulation] app_time_stats: avg=135.83ms min=6.04ms max=1283.45ms count=11

El subproceso 4 terminó con código 0 (0x0).
El subproceso 11 terminó con código 0 (0x0).
Thread finished: \<Thread Pool> \#4

Thread finished: \<Thread Pool> \#11

Thread finished: \<Thread Pool> \#8

Ahora sí encontramos el motivo concreto, bro. La línea clave es:

```text
RevocationStatusUnknown
Unable to determine revocation status due to network error
```

La conexión se está rechazando porque no se pudo consultar si el certificado fue revocado. Esto no demuestra que el certificado esté revocado ni que la contraseña MQTT sea incorrecta. El mismo problema de `RevocationStatusUnknown` en Android está documentado en MQTTnet. [^58_1055]

## Reemplaza únicamente el bloque TLS

Dentro de `OnConectarPulsosClicked`, reemplaza todo el bloque `.WithTlsOptions(...)`, incluido el manejador de diagnóstico, por este:

```csharp
.WithTlsOptions(tls =>
{
    tls.UseTls();

    tls.WithSslProtocols(
        System.Security.Authentication.SslProtocols.Tls12);

    tls.WithRevocationMode(
        System.Security.Cryptography.X509Certificates
            .X509RevocationMode.NoCheck);
})
```

La construcción completa de opciones debe quedar así:

```csharp
var opciones = new MqttClientOptionsBuilder()
    .WithClientId(
        "AlertaPulsera-" + Guid.NewGuid().ToString("N"))
    .WithTcpServer(ServidorPulsos, 8883)
    .WithCredentials(UsuarioPulsos, ClavePulsos)
    .WithTlsOptions(tls =>
    {
        tls.UseTls();

        tls.WithSslProtocols(
            System.Security.Authentication.SslProtocols.Tls12);

        tls.WithRevocationMode(
            System.Security.Cryptography.X509Certificates
                .X509RevocationMode.NoCheck);
    })
    .WithCleanSession()
    .Build();
```

`WithRevocationMode` está disponible en MQTTnet 4.3.x y permite configurar esta comprobación específica. [^58_1056]

## Qué cambia y qué no

Este ajuste omite la consulta de revocación para esta conexión MQTT. No equivale a aceptar cualquier certificado: no estamos activando certificados no confiables, ignorando todos los errores de cadena ni usando `return true`. Es una reducción específica de seguridad: la app no podrá detectar un certificado revocado mediante esa consulta. Úsalo primero como prueba; para producción, lo preferible es resolver el acceso a los servicios de revocación y volver a habilitarla. [^58_1058]

Detén la app, vuelve a ejecutarla y pulsa “Conectar pulsos”. Si conecta, debería mostrar:

```text
Conectado. Esperando lectura de la pulsera...
```

Después puedes publicar `76` como texto plano en `pulsera/prueba/pulsos` para comprobar que aparece `76 BPM`. No necesitas modificar Bluetooth, Firebase ni el código que recibe los pulsos.

<span style="display:none">[^58_1][^58_10][^58_2][^58_3][^58_4][^58_5][^58_6][^58_7][^58_8][^58_9]</span>

<div align="center">⁂</div>

[^58_1]: https://github.com/dotnet/MQTTnet/issues/1978

[^58_2]: https://github.com/chkr1011/MQTTnet/wiki/Server

[^58_3]: https://github.com/dotnet/MQTTnet/discussions/2146

[^58_4]: https://github.com/dotnet/MQTTnet/issues/1986

[^58_5]: https://github.com/dotnet/MQTTnet/issues/1920

[^58_6]: https://docs.dndocs.com/n/MQTTnet/4.3.6.1152/api/MQTTnet.Client.MqttClientTlsOptionsBuilder.html

[^58_7]: https://docs.dndocs.com/n/MQTTnet/4.3.6.1152/api/MQTTnet.Client.MqttClientTlsOptions.html

[^58_8]: https://github.com/dotnet/MQTTnet/blob/master/Source/MQTTnet/Options/MqttClientTlsOptionsBuilder.cs

[^58_9]: https://www.reddit.com/r/csharp/comments/1fkjaoo/mqttnet_how_to_reset_the_remotevalidationcallback/

[^58_10]: https://github.com/dotnet/MQTTnet/wiki/Client


---

# [monodroid-assembly] open_from_bundles: the assembly might have been uploaded to the device with FastDev instead

Loaded assembly: /data/data/com.companyname.alertapulsera/files/.__override__/x86_64/Xamarin.AndroidX.Emoji2.dll [External]

[MaterialButton] MaterialButton manages its own background to control elevation, shape, color and states. Consider using backgroundTint, shapeAppearance and other attributes where available. A custom background will ignore these attributes and you should consider handling interaction states such as pressed, focused and disabled

[MaterialButton] MaterialButton manages its own background to control elevation, shape, color and states. Consider using backgroundTint, shapeAppearance and other attributes where available. A custom background will ignore these attributes and you should consider handling interaction states such as pressed, focused and disabled

[MaterialButton] MaterialButton manages its own background to control elevation, shape, color and states. Consider using backgroundTint, shapeAppearance and other attributes where available. A custom background will ignore these attributes and you should consider handling interaction states such as pressed, focused and disabled

[HWUI] Davey! duration=2332ms; Flags=1, FrameTimelineVsyncId=111803, IntendedVsync=9323496253748, Vsync=9323646253742, InputEventId=0, HandleInputStart=9323663409460, AnimationStart=9323663465060, PerformTraversalsStart=9323663536260, DrawStart=9325441527760, FrameDeadline=9323512920414, FrameInterval=9323658003060, FrameStartTime=16666666, SyncQueued=9325596505860, SyncStart=9325599477760, IssueDrawCommandsStart=9325610484660, SwapBuffers=9325794682760, FrameCompleted=9325831603860, DequeueBufferDuration=50900, QueueBufferDuration=462300, GpuCompleted=9325831603860, SwapBuffersCompleted=9325826672160, DisplayPresentTime=0, CommandSubmissionCompleted=9325794682760,

[e.alertapulsera] Compiler allocated 5417KB to compile void android.view.ViewRootImpl.performTraversals()

Thread started: \<Thread Pool> \#12

El subproceso 9 terminó con código 0 (0x0).
El subproceso 8 terminó con código 0 (0x0).
El subproceso 4 terminó con código 0 (0x0).
[Choreographer] Skipped 154 frames! The application may be doing too much work on its main thread.

[HWUI] Davey! duration=2631ms; Flags=0, FrameTimelineVsyncId=111832, IntendedVsync=9323696253740, Vsync=9326262920304, InputEventId=0, HandleInputStart=9326281318560, AnimationStart=9326281473560, PerformTraversalsStart=9326282937160, DrawStart=9326289530060, FrameDeadline=9325862920320, FrameInterval=9326270288860, FrameStartTime=16666666, SyncQueued=9326320352860, SyncStart=9326320968660, IssueDrawCommandsStart=9326321753660, SwapBuffers=9326324128060, FrameCompleted=9326328837160, DequeueBufferDuration=74500, QueueBufferDuration=3165200, GpuCompleted=9326328511060, SwapBuffersCompleted=9326328837160, DisplayPresentTime=8, CommandSubmissionCompleted=9326324128060,

[ProfileInstaller] Installing profile for com.companyname.alertapulsera

[AssistStructure] Flattened final assist data: 1744 bytes, containing 1 windows, 9 views

Thread finished: \<Thread Pool> \#9

Thread finished: \<Thread Pool> \#8

Thread finished: \<Thread Pool> \#4

El subproceso 2 terminó con código 0 (0x0).
El subproceso 12 terminó con código 0 (0x0).
Thread finished: \<Thread Pool> \#2

Thread finished: \<Thread Pool> \#12

[EGL_emulation] app_time_stats: avg=28417.03ms min=8.29ms max=197890.80ms count=7

[monodroid-assembly] open_from_bundles: failed to load bundled assembly System.Net.WebSockets.dll

[monodroid-assembly] open_from_bundles: the assembly might have been uploaded to the device with FastDev instead

Loaded assembly: /data/data/com.companyname.alertapulsera/files/.__override__/x86_64/System.Net.WebSockets.dll [External]

Thread started: \<Thread Pool> \#13

Thread started: \<Thread Pool> \#14

[monodroid-assembly] open_from_bundles: failed to load bundled assembly System.Net.NameResolution.dll

[monodroid-assembly] open_from_bundles: the assembly might have been uploaded to the device with FastDev instead

Loaded assembly: /data/data/com.companyname.alertapulsera/files/.__override__/x86_64/System.Net.NameResolution.dll [External]

Thread started: \<Thread Pool> \#15

[e.alertapulsera] Background concurrent mark compact GC freed 2008KB AllocSpace bytes, 8(160KB) LOS objects, 49% free, 5109KB/10219KB, paused 1.411ms,8.800ms total 88.247ms

[e.alertapulsera] Background concurrent mark compact GC freed 5142KB AllocSpace bytes, 0(0B) LOS objects, 49% free, 4996KB/9993KB, paused 3.580ms,5.239ms total 71.933ms

[EGL_emulation] app_time_stats: avg=33.18ms min=4.95ms max=899.75ms count=51

[monodroid-assembly] open_from_bundles: failed to load bundled assembly System.Formats.Asn1.dll

[monodroid-assembly] open_from_bundles: the assembly might have been uploaded to the device with FastDev instead

Loaded assembly: /data/data/com.companyname.alertapulsera/files/.__override__/x86_64/System.Formats.Asn1.dll [External]

[monodroid-assembly] open_from_bundles: failed to load bundled assembly System.Runtime.Numerics.dll

[monodroid-assembly] open_from_bundles: the assembly might have been uploaded to the device with FastDev instead

Loaded assembly: /data/data/com.companyname.alertapulsera/files/.__override__/x86_64/System.Runtime.Numerics.dll [External]

[0:] [PULSOS TLS] Errores: RemoteCertificateChainErrors

[0:] [PULSOS TLS] Certificado: CN=\*.ala.us-east-1.emqxsl.com

[0:] [PULSOS TLS] Emisor: CN=Encryption Everywhere DV TLS CA - G2, OU=www.digicert.com, O=DigiCert Inc, C=US

[0:] [PULSOS TLS] Cadena: RevocationStatusUnknown Unable to determine revocation status due to network error

[0:] [PULSOS TLS] Cadena: RevocationStatusUnknown The certificate's revocation status could not be determined.

[System.err] javax.net.ssl.SSLHandshakeException: Read error: ssl=0x7955cc42d758: Failure in SSL library, usually a protocol error

[System.err] error:100000df:SSL routines:OPENSSL_internal:UNEXPECTED_MESSAGE (external/boringssl/src/ssl/handshake_client.cc:1068 0x795468bcdd4b:0x00000000)

[System.err] at com.android.org.conscrypt.SSLUtils.toSSLHandshakeException(SSLUtils.java:356)

[System.err] at com.android.org.conscrypt.ConscryptEngine.convertException(ConscryptEngine.java:1127)

[System.err] at com.android.org.conscrypt.ConscryptEngine.unwrap(ConscryptEngine.java:912)

[System.err] at com.android.org.conscrypt.ConscryptEngine.unwrap(ConscryptEngine.java:740)

[System.err] at com.android.org.conscrypt.ConscryptEngine.unwrap(ConscryptEngine.java:705)

[System.err] at com.android.org.conscrypt.Java8EngineWrapper.unwrap(Java8EngineWrapper.java:237)

[System.err] at net.dot.android.crypto.DotnetProxyTrustManager.verifyRemoteCertificate(Native Method)

[System.err] at net.dot.android.crypto.DotnetProxyTrustManager.checkServerTrusted(DotnetProxyTrustManager.java:32)

[System.err] at com.android.org.conscrypt.Platform.checkServerTrusted(Platform.java:265)

[System.err] at com.android.org.conscrypt.ConscryptEngine.verifyCertificateChain(ConscryptEngine.java:1631)

[System.err] at com.android.org.conscrypt.NativeCrypto.ENGINE_SSL_read_direct(Native Method)

[System.err] at com.android.org.conscrypt.NativeSsl.readDirectByteBuffer(NativeSsl.java:570)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextDataDirect(ConscryptEngine.java:1088)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextDataHeap(ConscryptEngine.java:1108)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextData(ConscryptEngine.java:1080)

[System.err] at com.android.org.conscrypt.ConscryptEngine.unwrap(ConscryptEngine.java:869)

[System.err] at com.android.org.conscrypt.ConscryptEngine.unwrap(ConscryptEngine.java:740)

[System.err] at com.android.org.conscrypt.ConscryptEngine.unwrap(ConscryptEngine.java:705)

[System.err] at com.android.org.conscrypt.Java8EngineWrapper.unwrap(Java8EngineWrapper.java:237)

[System.err] Caused by: javax.net.ssl.SSLProtocolException: Read error: ssl=0x7955cc42d758: Failure in SSL library, usually a protocol error

[System.err] error:100000df:SSL routines:OPENSSL_internal:UNEXPECTED_MESSAGE (external/boringssl/src/ssl/handshake_client.cc:1068 0x795468bcdd4b:0x00000000)

[System.err] at com.android.org.conscrypt.NativeCrypto.ENGINE_SSL_read_direct(Native Method)

[System.err] at com.android.org.conscrypt.NativeSsl.readDirectByteBuffer(NativeSsl.java:570)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextDataDirect(ConscryptEngine.java:1088)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextDataHeap(ConscryptEngine.java:1108)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextData(ConscryptEngine.java:1080)

[System.err] at com.android.org.conscrypt.ConscryptEngine.unwrap(ConscryptEngine.java:869)

[System.err] ... 16 more

[System.err] javax.net.ssl.SSLHandshakeException

[System.err] at com.android.org.conscrypt.SSLUtils.toSSLHandshakeException(SSLUtils.java:356)

[System.err] at com.android.org.conscrypt.ConscryptEngine.convertException(ConscryptEngine.java:1127)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextData(ConscryptEngine.java:1082)

[System.err] at com.android.org.conscrypt.ConscryptEngine.unwrap(ConscryptEngine.java:869)

[System.err] at com.android.org.conscrypt.ConscryptEngine.unwrap(ConscryptEngine.java:740)

[System.err] at com.android.org.conscrypt.ConscryptEngine.unwrap(ConscryptEngine.java:705)

[System.err] at com.android.org.conscrypt.Java8EngineWrapper.unwrap(Java8EngineWrapper.java:237)

[System.err] Caused by: java.security.cert.CertificateException

[System.err] at net.dot.android.crypto.DotnetProxyTrustManager.checkServerTrusted(DotnetProxyTrustManager.java:33)

[System.err] at com.android.org.conscrypt.Platform.checkServerTrusted(Platform.java:265)

[System.err] at com.android.org.conscrypt.ConscryptEngine.verifyCertificateChain(ConscryptEngine.java:1631)

[System.err] at com.android.org.conscrypt.NativeCrypto.ENGINE_SSL_read_direct(Native Method)

[System.err] at com.android.org.conscrypt.NativeSsl.readDirectByteBuffer(NativeSsl.java:570)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextDataDirect(ConscryptEngine.java:1088)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextDataHeap(ConscryptEngine.java:1108)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextData(ConscryptEngine.java:1080)

[System.err] ... 4 more

Thread started: \<Thread Pool> \#16

[0:] MQTTnet.Exceptions.MqttCommunicationException: Authentication failed, see inner exception.
---> System.Security.Authentication.AuthenticationException: Authentication failed, see inner exception.
---> Interop+AndroidCrypto+SslException: Exception of type 'Interop+AndroidCrypto+SslException' was thrown.
--- End of inner exception stack trace ---

at System.Net.Security.SslStream.\<ForceAuthenticationAsync>d\_\_157\`1$$
[System.Net.Security.AsyncReadWriteAdapter, System.Net.Security, Version=9.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a]
$$.MoveNext()

at MQTTnet.Implementations.MqttTcpChannel.ConnectAsync(CancellationToken cancellationToken)
at MQTTnet.Implementations.MqttTcpChannel.ConnectAsync(CancellationToken cancellationToken)
at MQTTnet.Adapter.MqttChannelAdapter.\<>c\_\_DisplayClass30_0.\<<ConnectAsync>b\_\_1>d.MoveNext()
--- End of stack trace from previous location ---
at MQTTnet.Adapter.MqttChannelAdapter.ConnectAsync(CancellationToken cancellationToken)
--- End of inner exception stack trace ---
at MQTTnet.Adapter.MqttChannelAdapter.WrapAndThrowException(Exception exception)
at MQTTnet.Adapter.MqttChannelAdapter.ConnectAsync(CancellationToken cancellationToken)
at MQTTnet.Client.MqttClient.ConnectInternal(IMqttChannelAdapter channelAdapter, CancellationToken cancellationToken)
at MQTTnet.Client.MqttClient.ConnectAsync(MqttClientOptions options, CancellationToken cancellationToken)
at MQTTnet.Client.MqttClient.ConnectAsync(MqttClientOptions options, CancellationToken cancellationToken)
at AlertaPulsera.MainPage.OnConectarPulsosClicked(Object sender, EventArgs e) in C:\\Users\\Sergio\\source\\repos\\AlertaPulsera\\AlertaPulsera\\MainPage.xaml.cs:line 398

[EGL_emulation] app_time_stats: avg=61.47ms min=4.04ms max=651.95ms count=16

[EGL_emulation] app_time_stats: avg=233.36ms min=10.68ms max=1281.06ms count=6

[EGL_emulation] app_time_stats: avg=159.55ms min=2.78ms max=1252.33ms count=9

[WindowOnBackDispatcher] sendCancelIfRunning: isInProgress=false callback=android.view.ViewRootImpl\$\$ExternalSyntheticLambda11@cc29add

[InputEventReceiver] Attempted to finish an input event but the input event receiver has already been disposed.

Bro, hay un detalle importante: en esta ejecución siguen apareciendo las líneas del manejador anterior:

```text
[PULSOS TLS] Errores: RemoteCertificateChainErrors
[PULSOS TLS] Cadena: RevocationStatusUnknown
```

Eso confirma que el código de diagnóstico todavía se ejecuta. Puede que haya quedado junto al cambio nuevo o que se esté ejecutando una compilación anterior. El problema visible sigue siendo la consulta de revocación; no aparece un rechazo de las credenciales MQTT.

## 1. Reemplaza la construcción completa de opciones

Dentro de `OnConectarPulsosClicked`, reemplaza desde:

```csharp
var opciones = new MqttClientOptionsBuilder()
```

hasta su correspondiente `.Build();` por esto:

```csharp
var opciones = new MqttClientOptionsBuilder()
    .WithClientId(
        "AlertaPulsera-" + Guid.NewGuid().ToString("N"))
    .WithTcpServer(ServidorPulsos, 8883)
    .WithCredentials(UsuarioPulsos, ClavePulsos)
    .WithTlsOptions(tls =>
    {
        tls.UseTls();

        tls.WithSslProtocols(
            System.Security.Authentication.SslProtocols.Tls12);

        // Prueba temporal: omitir la consulta de revocación.
        tls.WithRevocationMode(
            System.Security.Cryptography.X509Certificates
                .X509RevocationMode.NoCheck);
    })
    .WithCleanSession()
    .Build();

System.Diagnostics.Debug.WriteLine(
    "[PULSOS CONFIG V2] Conectando con NoCheck");

await _clientePulsos.ConnectAsync(
    opciones,
    tiempoLimite.Token);
```

No dupliques el `await _clientePulsos.ConnectAsync(...)` que ya tienes: el bloque de arriba lo incluye.

MQTTnet aplica las opciones TLS que recibe mediante `WithTlsOptions`; por eso necesitamos comprobar que esta sea la configuración que realmente llega a la conexión.[^59_1]

## 2. Comprueba que no quedó el bloque anterior

En `MainPage.xaml.cs`, busca:

```text
WithCertificateValidationHandler
```

Para esta prueba, no debe quedar ese manejador dentro de la configuración de pulsos. Busca también `WithTlsOptions`: en esa construcción de opciones debe haber un solo bloque.

Este cambio mantiene la validación habitual del certificado, salvo la consulta de revocación. Es una prueba temporal con esa limitación de seguridad, no una solución ideal para producción.

## 3. Vuelve a compilar y ejecutar

1. Detén la depuración.
2. Guarda todos los archivos.
3. En Visual Studio, selecciona “Compilar → Recompilar solución”.
4. Ejecuta la app y pulsa “Conectar pulsos”.

En la salida debe aparecer exactamente:

```text
[PULSOS CONFIG V2] Conectando con NoCheck
```

Si sigue fallando, pásame la salida desde esa línea hasta el error. Si la línea no aparece, primero hay que resolver que se ejecute la versión nueva, en lugar de seguir cambiando TLS.

<span style="display:none">[^59_10][^59_2][^59_3][^59_4][^59_5][^59_6][^59_7][^59_8][^59_9]</span>

<div align="center">⁂</div>

[^59_1]: https://github.com/dotnet/MQTTnet/blob/master/Source/MQTTnet/Options/MqttClientOptionsBuilder.cs

[^59_2]: https://github.com/dotnet/MQTTnet/issues/2005

[^59_3]: https://github.com/dotnet/MQTTnet/blob/master/Source/MQTTnet.Server/Options/MqttServerOptionsBuilder.cs

[^59_4]: https://github.com/dotnet/MQTTnet/wiki/Server-and-client-method-documentation/0f56f23ddcd4812367fc577700c3f1940d57db4d

[^59_5]: https://www.nuget.org/packages/MQTTnet/4.3.7.1207

[^59_6]: https://stackoverflow.com/questions/79638640/mqttnet-not-being-able-to-connect-to-broker-anymore

[^59_7]: https://github.com/dotnet/MQTTnet/issues/2040

[^59_8]: https://github.com/dotnet/MQTTnet/blob/master/Source/MQTTnet/Options/MqttClientTlsOptionsBuilder.cs

[^59_9]: https://github.com/dotnet/MQTTnet/wiki/Client

[^59_10]: https://github.com/dotnet/MQTTnet/issues/1978


---

# [monodroid-assembly] open_from_bundles: the assembly might have been uploaded to the device with FastDev instead

Loaded assembly: /data/data/com.companyname.alertapulsera/files/.__override__/x86_64/Xamarin.AndroidX.Emoji2.dll [External]

[MaterialButton] MaterialButton manages its own background to control elevation, shape, color and states. Consider using backgroundTint, shapeAppearance and other attributes where available. A custom background will ignore these attributes and you should consider handling interaction states such as pressed, focused and disabled

[MaterialButton] MaterialButton manages its own background to control elevation, shape, color and states. Consider using backgroundTint, shapeAppearance and other attributes where available. A custom background will ignore these attributes and you should consider handling interaction states such as pressed, focused and disabled

[MaterialButton] MaterialButton manages its own background to control elevation, shape, color and states. Consider using backgroundTint, shapeAppearance and other attributes where available. A custom background will ignore these attributes and you should consider handling interaction states such as pressed, focused and disabled

[HWUI] Davey! duration=2332ms; Flags=1, FrameTimelineVsyncId=111803, IntendedVsync=9323496253748, Vsync=9323646253742, InputEventId=0, HandleInputStart=9323663409460, AnimationStart=9323663465060, PerformTraversalsStart=9323663536260, DrawStart=9325441527760, FrameDeadline=9323512920414, FrameInterval=9323658003060, FrameStartTime=16666666, SyncQueued=9325596505860, SyncStart=9325599477760, IssueDrawCommandsStart=9325610484660, SwapBuffers=9325794682760, FrameCompleted=9325831603860, DequeueBufferDuration=50900, QueueBufferDuration=462300, GpuCompleted=9325831603860, SwapBuffersCompleted=9325826672160, DisplayPresentTime=0, CommandSubmissionCompleted=9325794682760,

[e.alertapulsera] Compiler allocated 5417KB to compile void android.view.ViewRootImpl.performTraversals()

Thread started: \<Thread Pool> \#12

El subproceso 9 terminó con código 0 (0x0).
El subproceso 8 terminó con código 0 (0x0).
El subproceso 4 terminó con código 0 (0x0).
[Choreographer] Skipped 154 frames! The application may be doing too much work on its main thread.

[HWUI] Davey! duration=2631ms; Flags=0, FrameTimelineVsyncId=111832, IntendedVsync=9323696253740, Vsync=9326262920304, InputEventId=0, HandleInputStart=9326281318560, AnimationStart=9326281473560, PerformTraversalsStart=9326282937160, DrawStart=9326289530060, FrameDeadline=9325862920320, FrameInterval=9326270288860, FrameStartTime=16666666, SyncQueued=9326320352860, SyncStart=9326320968660, IssueDrawCommandsStart=9326321753660, SwapBuffers=9326324128060, FrameCompleted=9326328837160, DequeueBufferDuration=74500, QueueBufferDuration=3165200, GpuCompleted=9326328511060, SwapBuffersCompleted=9326328837160, DisplayPresentTime=8, CommandSubmissionCompleted=9326324128060,

[ProfileInstaller] Installing profile for com.companyname.alertapulsera

[AssistStructure] Flattened final assist data: 1744 bytes, containing 1 windows, 9 views

Thread finished: \<Thread Pool> \#9

Thread finished: \<Thread Pool> \#8

Thread finished: \<Thread Pool> \#4

El subproceso 2 terminó con código 0 (0x0).
El subproceso 12 terminó con código 0 (0x0).
Thread finished: \<Thread Pool> \#2

Thread finished: \<Thread Pool> \#12

[EGL_emulation] app_time_stats: avg=28417.03ms min=8.29ms max=197890.80ms count=7

[monodroid-assembly] open_from_bundles: failed to load bundled assembly System.Net.WebSockets.dll

[monodroid-assembly] open_from_bundles: the assembly might have been uploaded to the device with FastDev instead

Loaded assembly: /data/data/com.companyname.alertapulsera/files/.__override__/x86_64/System.Net.WebSockets.dll [External]

Thread started: \<Thread Pool> \#13

Thread started: \<Thread Pool> \#14

[monodroid-assembly] open_from_bundles: failed to load bundled assembly System.Net.NameResolution.dll

[monodroid-assembly] open_from_bundles: the assembly might have been uploaded to the device with FastDev instead

Loaded assembly: /data/data/com.companyname.alertapulsera/files/.__override__/x86_64/System.Net.NameResolution.dll [External]

Thread started: \<Thread Pool> \#15

[e.alertapulsera] Background concurrent mark compact GC freed 2008KB AllocSpace bytes, 8(160KB) LOS objects, 49% free, 5109KB/10219KB, paused 1.411ms,8.800ms total 88.247ms

[e.alertapulsera] Background concurrent mark compact GC freed 5142KB AllocSpace bytes, 0(0B) LOS objects, 49% free, 4996KB/9993KB, paused 3.580ms,5.239ms total 71.933ms

[EGL_emulation] app_time_stats: avg=33.18ms min=4.95ms max=899.75ms count=51

[monodroid-assembly] open_from_bundles: failed to load bundled assembly System.Formats.Asn1.dll

[monodroid-assembly] open_from_bundles: the assembly might have been uploaded to the device with FastDev instead

Loaded assembly: /data/data/com.companyname.alertapulsera/files/.__override__/x86_64/System.Formats.Asn1.dll [External]

[monodroid-assembly] open_from_bundles: failed to load bundled assembly System.Runtime.Numerics.dll

[monodroid-assembly] open_from_bundles: the assembly might have been uploaded to the device with FastDev instead

Loaded assembly: /data/data/com.companyname.alertapulsera/files/.__override__/x86_64/System.Runtime.Numerics.dll [External]

[0:] [PULSOS TLS] Errores: RemoteCertificateChainErrors

[0:] [PULSOS TLS] Certificado: CN=\*.ala.us-east-1.emqxsl.com

[0:] [PULSOS TLS] Emisor: CN=Encryption Everywhere DV TLS CA - G2, OU=www.digicert.com, O=DigiCert Inc, C=US

[0:] [PULSOS TLS] Cadena: RevocationStatusUnknown Unable to determine revocation status due to network error

[0:] [PULSOS TLS] Cadena: RevocationStatusUnknown The certificate's revocation status could not be determined.

[System.err] javax.net.ssl.SSLHandshakeException: Read error: ssl=0x7955cc42d758: Failure in SSL library, usually a protocol error

[System.err] error:100000df:SSL routines:OPENSSL_internal:UNEXPECTED_MESSAGE (external/boringssl/src/ssl/handshake_client.cc:1068 0x795468bcdd4b:0x00000000)

[System.err] at com.android.org.conscrypt.SSLUtils.toSSLHandshakeException(SSLUtils.java:356)

[System.err] at com.android.org.conscrypt.ConscryptEngine.convertException(ConscryptEngine.java:1127)

[System.err] at com.android.org.conscrypt.ConscryptEngine.unwrap(ConscryptEngine.java:912)

[System.err] at com.android.org.conscrypt.ConscryptEngine.unwrap(ConscryptEngine.java:740)

[System.err] at com.android.org.conscrypt.ConscryptEngine.unwrap(ConscryptEngine.java:705)

[System.err] at com.android.org.conscrypt.Java8EngineWrapper.unwrap(Java8EngineWrapper.java:237)

[System.err] at net.dot.android.crypto.DotnetProxyTrustManager.verifyRemoteCertificate(Native Method)

[System.err] at net.dot.android.crypto.DotnetProxyTrustManager.checkServerTrusted(DotnetProxyTrustManager.java:32)

[System.err] at com.android.org.conscrypt.Platform.checkServerTrusted(Platform.java:265)

[System.err] at com.android.org.conscrypt.ConscryptEngine.verifyCertificateChain(ConscryptEngine.java:1631)

[System.err] at com.android.org.conscrypt.NativeCrypto.ENGINE_SSL_read_direct(Native Method)

[System.err] at com.android.org.conscrypt.NativeSsl.readDirectByteBuffer(NativeSsl.java:570)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextDataDirect(ConscryptEngine.java:1088)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextDataHeap(ConscryptEngine.java:1108)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextData(ConscryptEngine.java:1080)

[System.err] at com.android.org.conscrypt.ConscryptEngine.unwrap(ConscryptEngine.java:869)

[System.err] at com.android.org.conscrypt.ConscryptEngine.unwrap(ConscryptEngine.java:740)

[System.err] at com.android.org.conscrypt.ConscryptEngine.unwrap(ConscryptEngine.java:705)

[System.err] at com.android.org.conscrypt.Java8EngineWrapper.unwrap(Java8EngineWrapper.java:237)

[System.err] Caused by: javax.net.ssl.SSLProtocolException: Read error: ssl=0x7955cc42d758: Failure in SSL library, usually a protocol error

[System.err] error:100000df:SSL routines:OPENSSL_internal:UNEXPECTED_MESSAGE (external/boringssl/src/ssl/handshake_client.cc:1068 0x795468bcdd4b:0x00000000)

[System.err] at com.android.org.conscrypt.NativeCrypto.ENGINE_SSL_read_direct(Native Method)

[System.err] at com.android.org.conscrypt.NativeSsl.readDirectByteBuffer(NativeSsl.java:570)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextDataDirect(ConscryptEngine.java:1088)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextDataHeap(ConscryptEngine.java:1108)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextData(ConscryptEngine.java:1080)

[System.err] at com.android.org.conscrypt.ConscryptEngine.unwrap(ConscryptEngine.java:869)

[System.err] ... 16 more

[System.err] javax.net.ssl.SSLHandshakeException

[System.err] at com.android.org.conscrypt.SSLUtils.toSSLHandshakeException(SSLUtils.java:356)

[System.err] at com.android.org.conscrypt.ConscryptEngine.convertException(ConscryptEngine.java:1127)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextData(ConscryptEngine.java:1082)

[System.err] at com.android.org.conscrypt.ConscryptEngine.unwrap(ConscryptEngine.java:869)

[System.err] at com.android.org.conscrypt.ConscryptEngine.unwrap(ConscryptEngine.java:740)

[System.err] at com.android.org.conscrypt.ConscryptEngine.unwrap(ConscryptEngine.java:705)

[System.err] at com.android.org.conscrypt.Java8EngineWrapper.unwrap(Java8EngineWrapper.java:237)

[System.err] Caused by: java.security.cert.CertificateException

[System.err] at net.dot.android.crypto.DotnetProxyTrustManager.checkServerTrusted(DotnetProxyTrustManager.java:33)

[System.err] at com.android.org.conscrypt.Platform.checkServerTrusted(Platform.java:265)

[System.err] at com.android.org.conscrypt.ConscryptEngine.verifyCertificateChain(ConscryptEngine.java:1631)

[System.err] at com.android.org.conscrypt.NativeCrypto.ENGINE_SSL_read_direct(Native Method)

[System.err] at com.android.org.conscrypt.NativeSsl.readDirectByteBuffer(NativeSsl.java:570)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextDataDirect(ConscryptEngine.java:1088)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextDataHeap(ConscryptEngine.java:1108)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextData(ConscryptEngine.java:1080)

[System.err] ... 4 more

Thread started: \<Thread Pool> \#16

[0:] MQTTnet.Exceptions.MqttCommunicationException: Authentication failed, see inner exception.
---> System.Security.Authentication.AuthenticationException: Authentication failed, see inner exception.
---> Interop+AndroidCrypto+SslException: Exception of type 'Interop+AndroidCrypto+SslException' was thrown.
--- End of inner exception stack trace ---

at System.Net.Security.SslStream.\<ForceAuthenticationAsync>d\_\_157\`1$$
[System.Net.Security.AsyncReadWriteAdapter, System.Net.Security, Version=9.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a]
$$.MoveNext()

at MQTTnet.Implementations.MqttTcpChannel.ConnectAsync(CancellationToken cancellationToken)
at MQTTnet.Implementations.MqttTcpChannel.ConnectAsync(CancellationToken cancellationToken)
at MQTTnet.Adapter.MqttChannelAdapter.\<>c\_\_DisplayClass30_0.\<<ConnectAsync>b\_\_1>d.MoveNext()
--- End of stack trace from previous location ---
at MQTTnet.Adapter.MqttChannelAdapter.ConnectAsync(CancellationToken cancellationToken)
--- End of inner exception stack trace ---
at MQTTnet.Adapter.MqttChannelAdapter.WrapAndThrowException(Exception exception)
at MQTTnet.Adapter.MqttChannelAdapter.ConnectAsync(CancellationToken cancellationToken)
at MQTTnet.Client.MqttClient.ConnectInternal(IMqttChannelAdapter channelAdapter, CancellationToken cancellationToken)
at MQTTnet.Client.MqttClient.ConnectAsync(MqttClientOptions options, CancellationToken cancellationToken)
at MQTTnet.Client.MqttClient.ConnectAsync(MqttClientOptions options, CancellationToken cancellationToken)
at AlertaPulsera.MainPage.OnConectarPulsosClicked(Object sender, EventArgs e) in C:\\Users\\Sergio\\source\\repos\\AlertaPulsera\\AlertaPulsera\\MainPage.xaml.cs:line 398

[EGL_emulation] app_time_stats: avg=61.47ms min=4.04ms max=651.95ms count=16

[EGL_emulation] app_time_stats: avg=233.36ms min=10.68ms max=1281.06ms count=6

[EGL_emulation] app_time_stats: avg=159.55ms min=2.78ms max=1252.33ms count=9

[WindowOnBackDispatcher] sendCancelIfRunning: isInProgress=false callback=android.view.ViewRootImpl\$\$ExternalSyntheticLambda11@cc29add

[InputEventReceiver] Attempted to finish an input event but the input event receiver has already been disposed.

Bro, este registro coincide con el anterior: tiene los mismos valores de `FrameTimelineVsyncId`, la misma dirección `ssl=0x7955cc42d758` y el error en la línea 398. Además, no aparece:

```text
[PULSOS CONFIG V2] Conectando con NoCheck
```

Por eso, este texto no permite comprobar el resultado del último cambio. Puede ser la salida anterior copiada de nuevo o que todavía se esté ejecutando el código previo; no podemos distinguirlo con este registro.

## Revisemos el código actual, no más registros por ahora

Pégame únicamente el fragmento que tienes ahora en `MainPage.xaml.cs`, desde:

```csharp
var opciones = new MqttClientOptionsBuilder()
```

hasta:

```csharp
await _clientePulsos.ConnectAsync(
    opciones,
    tiempoLimite.Token);
```

Mantén las referencias `ServidorPulsos`, `UsuarioPulsos` y `ClavePulsos`, pero no pegues sus valores ni contraseñas.

Así comprobamos si quedó aplicado `WithRevocationMode(...NoCheck)`, si sigue el manejador anterior o si hay bloques duplicados, antes de pedirte otra prueba.

---

# Java.lang.OutOfMemoryError. Considere la posibilidad de aumentar el valor de \$(JavaMaximumHeapSize). Se agotó la memoria de Java mientras se ejecutaba "java.exe -Xmx1G -classpath "C:\\Program Files\\dotnet\\packs\\Microsoft.Android.Sdk.Windows\\35.0.78\\tools\\r8.jar" com.android.tools.r8.D8 --debug --min-api 23 --output obj\\Debug\\net9.0-android\\android\\bin\\ --lib "C:\\Program Files (x86)\\Android\\android-sdk\\platforms\\android-35\\android.jar" --lib "C:\\Program Files (x86)\\Android\\android-sdk\\platforms\\android-35\\optional\\org.apache.http.legacy.jar" obj\\Debug\\net9.0-android\\android\\bin\\classes.zip "C:\\Program Files\\dotnet\\packs\\Microsoft.Android.Ref.35\\35.0.78\\ref\\net9.0\\mono.android.jar" "C:\\Program Files\\dotnet\\packs\\Microsoft.Android.Sdk.Windows\\35.0.78\\tools\\java_runtime_net6.jar" C:\\Users\\Sergio.nuget\\packages\\xamarin.androidx.annotation.jvm\\1.9.1.4\\buildTransitive\\net8.0-android34.0....\\jar\\androidx.annotation.annotation-jvm.jar C:\\Users\\Sergio.nuget\\packages\\xamarin.androidx.collection.jvm\\1.5.0.2\\buildTransitive\\net8.0-android34.0....\\jar\\androidx.collection.collection-jvm.jar C:\\Users\\Sergio.nuget\\packages\\xamarin.androidx.annotation\\1.9.1.4\\buildTransitive\\net8.0-android34.0....\\jar\\androidx.annotation.annotation.jar C:\\Users\\Sergio.nuget\\packages\\xamarin.androidx.collection\\1.5.0.2\\buildTransitive\\net8.0-android34.0....\\jar\\androidx.collection.collection.jar C:\\Users\\Sergio.nuget\\packages\\xamarin.androidx.concurrent.futures\\1.2.0.7\\buildTransitive\\net8.0-android34.0....\\jar\\androidx.concurrent.concurrent-futures.jar C:\\Users\\Sergio.nuget\\packages\\xamarin.androidx.lifecycle.common.jvm\\2.8.7.4\\buildTransitive\\net8.0-android34.0....\\jar\\androidx.lifecycle.lifecycle-common-jvm.jar C:\\Users\\Sergio.nuget\\packages\\xamarin.androidx.lifecycle.common\\2.8.7.4\\buildTransitive\\net8.0-android34.0....\\jar\\androidx.lifecycle.lifecycle-common.jar C:\\Users\\Sergio.nuget\\packages\\xamarin.androidx.arch.core.common\\2.2.0.17\\buildTransitive\\net8.0-android34.0....\\jar\\androidx.arch.core.core-common.jar C:\\Users\\Sergio.nuget\\packages\\xamarin.kotlin.stdlib.jdk7\\2.0.10.1\\buildTransitive\\net8.0-android34.0....\\jar\\org.jetbrains.kotlin.kotlin-stdlib-jdk7-2.0.10.jar C:\\Users\\Sergio.nuget\\packages\\xamarin.kotlin.stdlib.jdk8\\2.0.10.1\\buildTransitive\\net8.0-android34.0....\\jar\\org.jetbrains.kotlin.kotlin-stdlib-jdk8-2.0.10.jar C:\\Users\\Sergio.nuget\\packages\\xamarin.google.j2objc.annotations\\3.0.0.3\\buildTransitive\\net8.0-android34.0....\\jar\\j2objc-annotations.jar C:\\Users\\Sergio.nuget\\packages\\xamarin.google.guava.failureaccess\\1.0.2.5\\buildTransitive\\net8.0-android34.0....\\jar\\guava-failureaccess.jar C:\\Users\\Sergio.nuget\\packages\\xamarin.checkerframework.checkerqual\\3.43.0.2\\buildTransitive\\net8.0-android34.0....\\jar\\checker-qual.jar C:\\Users\\Sergio.nuget\\packages\\xamarin.google.guava\\33.2.0.2\\buildTransitive\\net8.0-android34.0....\\jar\\guava.jar C:\\Users\\Sergio.nuget\\packages\\xamarin.androidx.resourceinspection.annotation\\1.0.1.20\\buildTransitive\\net8.0-android34.0....\\jar\\androidx.resourceinspection.resourceinspection-annotation.jar C:\\Users\\Sergio.nuget\\packages\\xamarin.androidx.constraintlayout.core\\1.1.1.1\\buildTransitive\\net8.0-android34.0....\\jar\\androidx.constraintlayout.constraintlayout-core.jar C:\\Users\\Sergio.nuget\\packages\\xamarin.androidx.collection.ktx\\1.5.0.1\\buildTransitive\\net8.0-android34.0....\\jar\\androidx.collection.collection-ktx.jar "C:\\Program Files\\dotnet\\packs\\Microsoft.NETCore.App.Runtime.Mono.android-x64\\9.0.18\\runtimes\\android-x64\\native\\libSystem.Security.Cryptography.Native.Android.jar" obj\\Debug\\net9.0-android\\lp\\161\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\162\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\163\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\164\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\165\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\166\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\168\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\169\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\170\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\171\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\172\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\173\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\174\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\175\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\177\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\178\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\179\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\180\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\181\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\182\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\183\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\184\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\185\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\186\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\187\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\188\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\189\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\190\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\191\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\192\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\193\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\194\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\195\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\196\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\196\\jl\\libs\\repackaged.jar obj\\Debug\\net9.0-android\\lp\\197\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\198\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\199\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\200\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\201\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\202\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\203\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\204\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\205\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\206\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\207\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\208\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\209\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\210\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\211\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\212\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\213\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\214\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\215\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\217\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\218\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\219\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\220\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\221\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\222\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\223\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\224\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\225\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\226\\jl\\libs\\ED64959F88B22E6D.jar obj\\Debug\\net9.0-android\\lp\\227\\jl\\libs\\2E7FD15AFA9B216B.jar obj\\Debug\\net9.0-android\\lp\\229\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\232\\jl\\libs\\B890492766680388.jar obj\\Debug\\net9.0-android\\lp\\233\\jl\\libs\\460158D330C04987.jar obj\\Debug\\net9.0-android\\lp\\234\\jl\\libs\\659D48BEBA477FDD.jar obj\\Debug\\net9.0-android\\lp\\235\\jl\\libs\\95D547F40BE4687C.jar obj\\Debug\\net9.0-android\\lp\\236\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\237\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\238\\jl\\libs\\A7D068AFC0A4E40D.jar obj\\Debug\\net9.0-android\\lp\\239\\jl\\libs\\4FA3B3B4C5B36A7C.jar obj\\Debug\\net9.0-android\\lp\\240\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\241\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\242\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\243\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\244\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\245\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\246\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\247\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\248\\jl\\libs\\DE1F32794B5923D8.jar obj\\Debug\\net9.0-android\\lp\\249\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\250\\jl\\libs\\13BF4FAB0F0F215C.jar obj\\Debug\\net9.0-android\\lp\\251\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\252\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\253\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\254\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\255\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\256\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\257\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\258\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\259\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\260\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\261\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\262\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\263\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\264\\jl\\libs\\F975D0960055A5E3.jar obj\\Debug\\net9.0-android\\lp\\265\\jl\\libs\\B71CFF5D5A0B3AEB.jar obj\\Debug\\net9.0-android\\lp\\266\\jl\\libs\\8F2EB7DF0BED3603.jar obj\\Debug\\net9.0-android\\lp\\267\\jl\\libs\\E38F1ACFD7A3C25B.jar obj\\Debug\\net9.0-android\\lp\\268\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\269\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\270\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\271\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\272\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\273\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\274\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\275\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\276\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\277\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\278\\jl\\classes.jar obj\\Debug\\net9.0-android\\lp\\279\\jl\\libs\\A20E0CC7F240885A.jar obj\\Debug\\net9.0-android\\lp\\280\\jl\\libs\\44896C442A8D2076.jar obj\\Debug\\net9.0-android\\lp\\281\\jl\\libs\\3A3DAF759E5D1C0C.jar obj\\Debug\\net9.0-android\\lp\\282\\jl\\libs\\B8329306A40BBB16.jar obj\\Debug\\net9.0-android\\lp\\283\\jl\\libs\\28C688E317CE6C7D.jar obj\\Debug\\net9.0-android\\lp\\284\\jl\\libs\\866F09B7F3D04199.jar obj\\Debug\\net9.0-android\\lp\\285\\jl\\libs\\948F1214253504B8.jar obj\\Debug\\net9.0-android\\lp\\286\\jl\\libs\\7909489DBF6E3AD5.jar obj\\Debug\\net9.0-android\\lp\\287\\jl\\libs\\7901EFB63BB8846B.jar obj\\Debug\\net9.0-android\\lp\\288\\jl\\libs\\05D34BA5CA8637CF.jar obj\\Debug\\net9.0-android\\lp\\289\\jl\\libs\\DCFB018199B59345.jar obj\\Debug\\net9.0-android\\lp\\290\\jl\\libs\\F91D79B39A269A7E.jar obj\\Debug\\net9.0-android\\lp\\291\\jl\\libs\\327D95CCFE836D7B.jar obj\\Debug\\net9.0-android\\lp\\292\\jl\\libs\\C7DE71AD77BC3A1F.jar obj\\Debug\\net9.0-android\\lp\\293\\jl\\libs\\F01C7EADE990A004.jar obj\\Debug\\net9.0-android\\lp\\294\\jl\\libs\\F6DB49E0CC905A9A.jar obj\\Debug\\net9.0-android\\lp\\295\\jl\\libs\\A1A754E9E8693F85.jar obj\\Debug\\net9.0-android\\lp\\296\\jl\\libs\\54CA6E704DDA3E23.jar obj\\Debug\\net9.0-android\\lp\\297\\jl\\libs\\B7446A23346A729D.jar obj\\Debug\\net9.0-android\\lp\\298\\jl\\libs\\623E6E29E2058512.jar obj\\Debug\\net9.0-android\\lp\\299\\jl\\libs\\8E428AF64A795598.jar --map-diagnostics warning info". me dio ese error al recompilar

Ese es otro problema, bro: ahora falló la compilación porque Java se quedó sin memoria. No es el error de autenticación de EMQX.

Tu registro muestra `java.exe -Xmx1G`: el compilador tiene un límite de **1 GB** de memoria heap. Microsoft indica aumentar `JavaMaximumHeapSize` cuando ocurre este error al generar los archivos `.dex` de Android.[^61_1]

## 1. Edita el archivo del proyecto

En Visual Studio:

1. En el Explorador de soluciones, haz clic derecho sobre el proyecto **AlertaPulsera**, no sobre la solución.
2. Selecciona “Editar archivo de proyecto”.
3. Justo antes del cierre `</Project>`, agrega:
```xml
<PropertyGroup Condition="'$(TargetFramework)' == 'net9.0-android'">
  <JavaMaximumHeapSize>3G</JavaMaximumHeapSize>
</PropertyGroup>
```

El final quedaría así:

```xml
  <!-- Aquí queda el contenido que ya tiene tu proyecto -->

  <PropertyGroup Condition="'$(TargetFramework)' == 'net9.0-android'">
    <JavaMaximumHeapSize>3G</JavaMaximumHeapSize>
  </PropertyGroup>

</Project>
```

No reemplaces todo el archivo: solo agrega ese bloque. Si ya existe una propiedad `JavaMaximumHeapSize`, modifica la existente en lugar de duplicarla. Esta propiedad controla el parámetro Java `-Xmx` usado durante la compilación.[^61_1]

## 2. Vuelve a compilar

1. Guarda el archivo.
2. Detén la depuración y cierra el emulador para liberar memoria.
3. Selecciona “Compilar → Limpiar solución”.
4. Después selecciona “Compilar → Recompilar solución”.
5. Si termina correctamente, abre el emulador y ejecuta la app.

El valor `3G` permite que ese proceso Java use hasta ese límite; no añade memoria física a la laptop. Evita subirlo indefinidamente si el equipo tiene poca RAM disponible. [^61_1070]

## 3. Después retomamos los pulsos

No cambies ahora MQTT, Bluetooth ni Firebase. Primero necesitamos que la versión nueva compile correctamente. Como esta recompilación falló, todavía no podemos confirmar el resultado del último ajuste de TLS.

Si vuelve a fallar, revisa si el nuevo mensaje muestra `-Xmx3G` o sigue mostrando `-Xmx1G`: eso nos dirá si se aplicó la configuración.

<span style="display:none">[^61_10][^61_2][^61_3][^61_4][^61_5][^61_6][^61_7][^61_8][^61_9]</span>

<div align="center">⁂</div>

[^61_1]: https://learn.microsoft.com/en-us/dotnet/android/building-apps/build-properties

[^61_2]: https://learn.microsoft.com/en-us/answers/questions/1518906/how-to-fix-terminating-due-to-java-lang-outofmemor

[^61_3]: https://learn.microsoft.com/en-us/troubleshoot/windows-server/performance/desktop-heap-limitation-out-of-memory

[^61_4]: https://learn.microsoft.com/en-us/answers/questions/330175/expection-java-lang-outofmemoryerror-also-with-1g

[^61_5]: https://learn.microsoft.com/en-us/cpp/error-messages/compiler-errors-1/fatal-error-c1060?view=msvc-170

[^61_6]: https://learn.microsoft.com/en-us/troubleshoot/developer/webapps/aspnet/performance/troubleshoot-outofmemoryexception

[^61_7]: https://learn.microsoft.com/en-us/answers/questions/1660759/databricks-outofmemory-error-on-code-that-previous

[^61_8]: https://learn.microsoft.com/en-us/answers/questions/4004738/windows-11-pro-when-java-heap-expands-in-wsl2-or-c

[^61_9]: https://learn.microsoft.com/en-us/dotnet/android/messages/

[^61_10]: https://learn.microsoft.com/en-us/azure/spring-apps/basic-standard/concepts-for-java-memory-management


---

# [System.err] at com.android.org.conscrypt.Platform.checkServerTrusted(Platform.java:265)

[System.err] at com.android.org.conscrypt.ConscryptEngine.verifyCertificateChain(ConscryptEngine.java:1631)

[System.err] at com.android.org.conscrypt.NativeCrypto.ENGINE_SSL_read_direct(Native Method)

[System.err] at com.android.org.conscrypt.NativeSsl.readDirectByteBuffer(NativeSsl.java:570)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextDataDirect(ConscryptEngine.java:1088)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextDataHeap(ConscryptEngine.java:1108)

[System.err] at com.android.org.conscrypt.ConscryptEngine.readPlaintextData(ConscryptEngine.java:1080)

[System.err] ... 4 more

[e.alertapulsera] Explicit concurrent mark compact GC freed 3238KB AllocSpace bytes, 3(60KB) LOS objects, 49% free, 4727KB/9454KB, paused 1.408ms,3.278ms total 28.260ms

[0:] MQTTnet.Exceptions.MqttCommunicationException: Authentication failed, see inner exception.
---> System.Security.Authentication.AuthenticationException: Authentication failed, see inner exception.
---> Interop+AndroidCrypto+SslException: Exception of type 'Interop+AndroidCrypto+SslException' was thrown.
--- End of inner exception stack trace ---

at System.Net.Security.SslStream.\<ForceAuthenticationAsync>d\_\_157\`1$$
[System.Net.Security.AsyncReadWriteAdapter, System.Net.Security, Version=9.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a]
$$.MoveNext()

at MQTTnet.Implementations.MqttTcpChannel.ConnectAsync(CancellationToken cancellationToken)
at MQTTnet.Implementations.MqttTcpChannel.ConnectAsync(CancellationToken cancellationToken)
at MQTTnet.Adapter.MqttChannelAdapter.\<>c\_\_DisplayClass30_0.\<<ConnectAsync>b\_\_1>d.MoveNext()
--- End of stack trace from previous location ---
at MQTTnet.Adapter.MqttChannelAdapter.ConnectAsync(CancellationToken cancellationToken)
--- End of inner exception stack trace ---
at MQTTnet.Adapter.MqttChannelAdapter.WrapAndThrowException(Exception exception)
at MQTTnet.Adapter.MqttChannelAdapter.ConnectAsync(CancellationToken cancellationToken)
at MQTTnet.Client.MqttClient.ConnectInternal(IMqttChannelAdapter channelAdapter, CancellationToken cancellationToken)
at MQTTnet.Client.MqttClient.ConnectAsync(MqttClientOptions options, CancellationToken cancellationToken)
at MQTTnet.Client.MqttClient.ConnectAsync(MqttClientOptions options, CancellationToken cancellationToken)
at AlertaPulsera.MainPage.OnConectarPulsosClicked(Object sender, EventArgs e) in C:\\Users\\Sergio\\source\\repos\\AlertaPulsera\\AlertaPulsera\\MainPage.xaml.cs:line 398

[EGL_emulation] app_time_stats: avg=82.86ms min=4.74ms max=641.01ms count=13

[HWUI] Davey! duration=706ms; Flags=1, FrameTimelineVsyncId=63073, IntendedVsync=1053266590984, Vsync=1053733257632, InputEventId=0, HandleInputStart=1053738459900, AnimationStart=1053738513300, PerformTraversalsStart=1053738641500, DrawStart=1053842035100, FrameDeadline=1053283257650, FrameInterval=1053734879100, FrameStartTime=16666666, SyncQueued=1053857378900, SyncStart=1053871809500, IssueDrawCommandsStart=1053883008800, SwapBuffers=1053971447100, FrameCompleted=1053987653800, DequeueBufferDuration=412800, QueueBufferDuration=1535400, GpuCompleted=1053987653800, SwapBuffersCompleted=1053978852200, DisplayPresentTime=0, CommandSubmissionCompleted=1053971447100,

[EGL_emulation] app_time_stats: avg=322.41ms min=32.52ms max=1174.28ms count=4

[EGL_emulation] app_time_stats: avg=111.97ms min=3.96ms max=1070.34ms count=12

ahora si sale diferente o q?

Sí, bro: es un registro distinto, pero el error principal sigue siendo el mismo:

```text
MqttCommunicationException: Authentication failed
 → AuthenticationException
 → Interop+AndroidCrypto+SslException
```

Cambian los datos de ejecución del emulador, pero la conexión sigue fallando en TLS. En este fragmento no aparece `OutOfMemoryError`; el error visible ahora ocurre al intentar conectar desde la app.

## Qué todavía no podemos confirmar

Este recorte empieza a mitad del error y no incluye:

```text
[PULSOS CONFIG V2] Conectando con NoCheck
```

Tampoco incluye las líneas `[PULSOS TLS]`. Por eso no podemos comprobar con este texto si se aplicó el último cambio ni si la causa continúa siendo `RevocationStatusUnknown`.

## Pásame el código actual de conexión

Para no seguir repitiendo pruebas a ciegas, copia únicamente el bloque de `MainPage.xaml.cs` que empieza con:

```csharp
var opciones = new MqttClientOptionsBuilder()
```

y termina después de:

```csharp
await _clientePulsos.ConnectAsync(
    opciones,
    tiempoLimite.Token);
```

No incluyas los valores de las constantes de usuario y contraseña. Con ese fragmento podemos revisar qué configuración está usando ahora, antes de modificar otra cosa.

---

# if (!\_clientePulsos.IsConnected)

{
var opciones = new MqttClientOptionsBuilder()
.WithClientId(
"AlertaPulsera-" + Guid.NewGuid().ToString("N"))
.WithTcpServer(ServidorPulsos, 8883)
.WithCredentials(UsuarioPulsos, ClavePulsos)
.WithTlsOptions(tls =>
{
tls.UseTls();

```
tls.WithSslProtocols(
    System.Security.Authentication.SslProtocols.Tls12);

tls.WithCertificateValidationHandler(context =>
{
    System.Diagnostics.Debug.WriteLine(
        $"[PULSOS TLS] Errores: {context.SslPolicyErrors}");

    if (context.Certificate != null)
    {
        System.Diagnostics.Debug.WriteLine(
            $"[PULSOS TLS] Certificado: {context.Certificate.Subject}");

        System.Diagnostics.Debug.WriteLine(
            $"[PULSOS TLS] Emisor: {context.Certificate.Issuer}");
    }

    if (context.Chain != null)
    {
        foreach (var estado in context.Chain.ChainStatus)
        {
            System.Diagnostics.Debug.WriteLine(
                $"[PULSOS TLS] Cadena: {estado.Status} " +
                $"{estado.StatusInformation}");
        }
    }

    return context.SslPolicyErrors ==
        System.Net.Security.SslPolicyErrors.None;
});
```

}).WithCleanSession()
.Build();

```
            await _clientePulsos.ConnectAsync(
                opciones,
                tiempoLimite.Token);
        }

        EstadoPulsosLabel.Text = "Suscribiendo a pulsos...";

        var suscripcion = new MqttFactory()
            .CreateSubscribeOptionsBuilder()
            .WithTopicFilter(f => f.WithTopic(TopicPulsos))
            .Build();

        var resultado = await _clientePulsos.SubscribeAsync(
            suscripcion,
            tiempoLimite.Token);

        foreach (var item in resultado.Items)
        {
            if ((int)item.ResultCode >= 128)
            {
                throw new InvalidOperationException(
                    "EMQX rechazó la suscripción: " +
                    item.ResultCode);
            }
        }

        EstadoPulsosLabel.Text =
            "Conectado. Esperando lectura de la pulsera...";
    }
    catch (OperationCanceledException)
    {
        EstadoPulsosLabel.Text =
            "La conexión tardó demasiado. Intenta de nuevo.";
    }
    catch (Exception ex)
    {
        EstadoPulsosLabel.Text =
            "No se pudo conectar la recepción de pulsos.";

        var detalle = new System.Text.StringBuilder();

        for (Exception? error = ex;
             error != null;
             error = error.InnerException)
        {
            detalle.AppendLine(error.GetType().Name);
            detalle.AppendLine(error.Message);
            detalle.AppendLine();
        }

        System.Diagnostics.Debug.WriteLine(ex.ToString());

        await DisplayAlert(
            "Detalle de conexión",
            detalle.ToString(),
            "Aceptar");
    }
    finally
    {
        _conectandoPulsos = false;
        ConectarPulsosButton.IsEnabled = true;
    }
}
```

}

Ahí está el detalle, bro: en el código actual todavía está el manejador de diagnóstico y no aparece `WithRevocationMode(...NoCheck)`. Es decir, el último cambio aún no está en este bloque.

## Reemplaza este bloque completo

Desde `if (!_clientePulsos.IsConnected)` hasta la llave que está justo antes de:

```csharp
EstadoPulsosLabel.Text = "Suscribiendo a pulsos...";
```

pon exactamente esto:

```csharp
if (!_clientePulsos.IsConnected)
{
    var opciones = new MqttClientOptionsBuilder()
        .WithClientId(
            "AlertaPulsera-" + Guid.NewGuid().ToString("N"))
        .WithTcpServer(ServidorPulsos, 8883)
        .WithCredentials(UsuarioPulsos, ClavePulsos)
        .WithTlsOptions(tls =>
        {
            tls.UseTls();

            tls.WithSslProtocols(
                System.Security.Authentication.SslProtocols.Tls12);

            // Prueba temporal por el error RevocationStatusUnknown.
            tls.WithRevocationMode(
                System.Security.Cryptography.X509Certificates
                    .X509RevocationMode.NoCheck);
        })
        .WithCleanSession()
        .Build();

    System.Diagnostics.Debug.WriteLine(
        "[PULSOS CONFIG V2] Conectando con NoCheck");

    await _clientePulsos.ConnectAsync(
        opciones,
        tiempoLimite.Token);
}
```

No agregues este bloque junto al anterior: reemplázalo. Todo lo que viene después —suscripción, `catch`, `finally` y las llaves finales— déjalo como está.

## Qué estamos probando

`WithRevocationMode(...NoCheck)` configura la conexión para no consultar la revocación del certificado; este método se utiliza con el constructor TLS de MQTTnet. No es lo mismo que aceptar cualquier certificado con `return true`. [^63_1071][^63_1072]

Es una prueba temporal: omitir esa consulta reduce la protección frente a certificados revocados. La usamos para comprobar si el error `RevocationStatusUnknown` que apareció en tu registro es el bloqueo actual.

## Después de guardar

1. Detén la ejecución.
2. Guarda y recompila el proyecto.
3. Si compila sin errores, ejecuta y pulsa “Conectar pulsos”.

La salida debe incluir:

```text
[PULSOS CONFIG V2] Conectando con NoCheck
```

Si falla, copia desde esa línea hasta el nuevo error. Así ya estaremos comprobando el cambio correcto, sin tocar Firebase ni Bluetooth.

<span style="display:none">[^63_1][^63_10][^63_2][^63_3][^63_4][^63_5][^63_6][^63_7][^63_8][^63_9]</span>

<div align="center">⁂</div>

[^63_1]: https://github.com/dotnet/MQTTnet/issues/1933

[^63_2]: https://github.com/Azure-Samples/MqttApplicationSamples/blob/main/mqttclients/dotnet/MQTTnet.Client.Extensions/WithTlsSettings.cs

[^63_3]: https://blog.csdn.net/yuming/article/details/140674878

[^63_4]: https://docs.dndocs.com/n/MQTTnet/4.3.6.1152/api/MQTTnet.Client.MqttClientOptionsBuilder.html

[^63_5]: https://github.com/dotnet/MQTTnet/issues/2169

[^63_6]: https://github.com/dotnet/MQTTnet/issues/1978

[^63_7]: https://www.reddit.com/r/csharp/comments/1fkjaoo/mqttnet_how_to_reset_the_remotevalidationcallback/

[^63_8]: https://github.com/dotnet/MQTTnet/blob/master/Source/MQTTnet/Options/MqttClientTlsOptionsBuilder.cs

[^63_9]: https://github.com/dotnet/MQTTnet/issues/1986

[^63_10]: https://github.com/dotnet/MQTTnet/blob/master/Source/MQTTnet/Options/MqttClientOptionsBuilder.cs


---

# ya jalo se supone

¡Bien, bro! Si ya aparece “Conectado. Esperando lectura de la pulsera...” y no salió otra alerta, tu código indica que la app conectó y EMQX aceptó la suscripción.

## Confirma que llegan los pulsos

Desde la herramienta que usas para publicar en EMQX, envía:

- Topic: `pulsera/prueba/pulsos`
- Tipo de payload: texto plano.
- Mensaje: `76`
- Retain: desactivado.

La app debe mostrar:

```text
76 BPM
```

Después publica `82`: debe cambiar a `82 BPM`. Con eso confirmamos la recepción, no solo la conexión. Tu código actual muestra cada valor cuando llega; no calcula promedios ni impone un intervalo.

## Lo que queda pendiente

- Esta prueba no confirma todavía que la ESP32 publique: después debe enviar sus lecturas al mismo topic.
- Tampoco configura el Wi-Fi ni la conexión Bluetooth de la ESP32; esa parte sigue separada.
- Dejamos `NoCheck` como ajuste temporal de diagnóstico. Antes de dar por terminada la app, hay que revisar la consulta de revocación del certificado para no mantener esa protección desactivada sin necesidad.

---

# shi ya jala

¡Perfecto, bro! Entonces ya quedó confirmada la recepción de BPM en la app desde EMQX.

La app muestra el valor que recibe en `pulsera/prueba/pulsos`, sin promedios ni intervalos calculados por ella. Cuando conectemos la ESP32 a ese flujo, ella decidirá cuándo publicar.

Quedan pendientes dos cosas:

- Conectar la app por BLE a la ESP32 y enviarle los datos del Wi-Fi.
- Revisar antes de producción el ajuste temporal `NoCheck` que usamos para resolver el bloqueo de TLS.

Conserva esta versión que ya funciona como respaldo antes de seguir modificando.

---

# pero bro, o sea no quiero presionar conectar pulsos sabes, se supone q deberia conectar automatico no crees?

Sí, bro, tienes razón: el botón nos sirvió para probar, pero la app debe intentar conectar los pulsos al abrir la pantalla, sin que tengas que presionarlo.

Vamos a reutilizar lo que ya funciona, sin tocar la configuración de EMQX.

## 1. Cambia `OnAppearing`

En `MainPage.xaml.cs`, busca:

```csharp
protected override void OnAppearing()
{
    base.OnAppearing();
    _paginaVisible = true;
}
```

Reemplázalo por:

```csharp
protected override void OnAppearing()
{
    base.OnAppearing();
    _paginaVisible = true;

    if (!_conectandoPulsos &&
        _clientePulsos?.IsConnected != true)
    {
        OnConectarPulsosClicked(this, EventArgs.Empty);
    }
}
```

`OnAppearing` se ejecuta cuando la página está por mostrarse, así que podemos usarlo para iniciar la conexión automáticamente. La condición evita iniciar otro intento si ya está conectando o conectado. [^66_1076]

## 2. Oculta el botón, pero no lo borres todavía

En `MainPage.xaml`, busca el botón con:

```xml
x:Name="ConectarPulsosButton"
```

Y agrégale:

```xml
IsVisible="False"
```

Por ejemplo:

```xml
<Button
    x:Name="ConectarPulsosButton"
    Text="Conectar pulsos"
    Clicked="OnConectarPulsosClicked"
    IsVisible="False" />
```

Conserva los demás atributos que tenga tu botón. No lo elimines todavía porque el código actual sigue utilizando `ConectarPulsosButton.IsEnabled`.

## 3. Corrige el mensaje de desconexión

Dentro de `_clientePulsos.DisconnectedAsync`, cambia:

```csharp
EstadoPulsosLabel.Text =
    "Conexión de pulsos perdida. Pulsa Conectar pulsos.";
```

por:

```csharp
EstadoPulsosLabel.Text =
    "Sin conexión con el servidor de pulsos.";
```

Así no le pide al usuario pulsar un botón que ya no se ve.

## Qué hará con este cambio

Al abrir la pantalla, intentará conectar y suscribirse automáticamente. Si vuelves a entrar en ella y está desconectado, intentará conectar otra vez.

Esto todavía no incorpora reconexión automática mientras permaneces en la misma pantalla ni garantiza conexión con la app cerrada. Esas son funciones separadas. Tampoco cambia cuándo llegan los BPM: la ESP32 sigue decidiendo cuándo publicar, y la app muestra cada valor recibido.

<span style="display:none">[^66_1][^66_10][^66_2][^66_3][^66_4][^66_5][^66_6][^66_7][^66_8][^66_9]</span>

<div align="center">⁂</div>

[^66_1]: https://learn.microsoft.com/dotnet/api/microsoft.maui.controls.page.onappearing

[^66_2]: https://learn.microsoft.com/en-us/dotnet/maui/fundamentals/shell/lifecycle?view=net-maui-8.0

[^66_3]: https://learn.microsoft.com/en-us/dotnet/maui/fundamentals/shell/lifecycle?view=net-maui-10.0

[^66_4]: https://www.learn.microsoft.com/en-us/dotnet/api/microsoft.maui.controls.page

[^66_5]: https://learn.microsoft.com/en-us/dotnet/maui/fundamentals/app-lifecycle?view=net-maui-9.0

[^66_6]: https://learn.microsoft.com/en-us/dotnet/maui/fundamentals/app-lifecycle?view=net-maui-10.0

[^66_7]: https://learn.microsoft.com/en-us/dotnet/architecture/maui/communicating-between-components

[^66_8]: https://learn.microsoft.com/en-us/dotnet/maui/fundamentals/shell/lifecycle?view=net-maui-9.0

[^66_9]: https://learn.microsoft.com/sr-latn-rs/dotnet/maui/fundamentals/shell/lifecycle?view=net-maui-10.0

[^66_10]: https://learn.microsoft.com/en-us/dotnet/communitytoolkit/maui/views/popup


---

# tambien esta el problema de que el servidor de pulsos, mi contraseña y usuario del mqtt estan locales

Sí, bro. Si te refieres a que están escritos directamente en `MainPage.xaml.cs`, tienes razón: eso sirve para la prueba, pero no es lo adecuado para distribuir la app.

Hay que separar dos cosas: que la app pueda conectarse desde otro celular y que las credenciales estén protegidas.

## No significa que el servidor esté en tu laptop

Tu código apunta a un servidor de EMQX Cloud. Tener su dirección escrita en la app no lo convierte en un servidor local.

En el diseño actual, los pulsos siguen este recorrido:

```text
ESP32 → EMQX Cloud → app
```

`PuentePulsera` no participa en la recepción de pulsos que programamos. Por tanto, esa recepción no necesita que el puente esté abierto en la laptop; las alertas siguen siendo un flujo aparte.

## El problema es compartir una contraseña dentro de la app

Si distribuyes la app con estas constantes:

```csharp
private const string UsuarioPulsos = "...";
private const string ClavePulsos = "...";
```

cada instalación lleva las mismas credenciales. Un secreto incluido en el código o los archivos de una app puede recuperarse mediante ingeniería inversa. Moverlo a un JSON incluido en la aplicación no resuelve ese problema. [^67_1086]

La dirección del servidor no necesita tratarse como una contraseña. Lo sensible es la credencial que permite acceder y qué permisos concede.

## Cómo debería quedar para el uso final

La propuesta es que el usuario no tenga que escribir datos técnicos de MQTT:

```text
1. La app inicia sesión en Firebase.
                  ↓
2. Un backend verifica esa sesión y la pulsera vinculada.
                  ↓
3. Entrega una credencial temporal y limitada.
                  ↓
4. La app conecta automáticamente al servidor de pulsos.
```

Esto requiere implementar el backend y configurar en el broker el mecanismo compatible de autenticación y permisos; no ocurre automáticamente por usar Firebase. El objetivo es evitar una contraseña compartida permanente y utilizar tokens de corta duración con permisos mínimos, como recomienda Android para el acceso a servicios. [^67_1088]

Además, cada pulsera debería tener un topic propio, en lugar de que todas usen:

```text
pulsera/prueba/pulsos
```

Por ejemplo, como diseño:

```text
pulseras/ID_DE_PULSERA/pulsos
```

La ESP32 publicaría ahí y la app vinculada solo tendría permiso de lectura sobre esa pulsera. La restricción debe aplicarla el servidor, no solo el código de la app.

Para tu proyecto, el siguiente paso es decidir cómo vincular una pulsera con su usuario y después emitir ese acceso automáticamente. No hace falta agregar una pantalla para que el usuario introduzca el host, usuario y contraseña de EMQX, ni guardar la contraseña compartida en un documento de Firestore que todas las apps puedan leer.

<span style="display:none">[^67_1][^67_10][^67_11][^67_12][^67_13][^67_14][^67_15][^67_2][^67_3][^67_4][^67_5][^67_6][^67_7][^67_8][^67_9]</span>

<div align="center">⁂</div>

[^67_1]: https://developer.android.com/identity/authorization

[^67_2]: https://developer.android.com/privacy-and-security/risks/hardcoded-cryptographic-secrets

[^67_3]: https://developer.android.com/identity/legacy/one-tap/idtoken-auth

[^67_4]: https://developer.android.com/privacy-and-security/security-tips

[^67_5]: https://developer.android.com/privacy-and-security/keystore

[^67_6]: https://developer.android.com/privacy-and-security/cryptography

[^67_7]: https://developer.android.com/security

[^67_8]: https://developer.android.com/guide/topics/permissions/overview

[^67_9]: https://developer.android.com/static/guide/topics/manifest/permission-element?hl=id

[^67_10]: https://developer.android.com/identity/sign-in/credential-manager-siwg

[^67_11]: https://developer.android.com/training/permissions/requesting-special

[^67_12]: https://developer.android.com/topic/security/risks/hardcoded-cryptographic-secrets?hl=es-419

[^67_13]: https://developer.android.com/privacy-and-security/risks?authuser=795198429

[^67_14]: https://developer.android.com/blog/posts/android-developer-verification-2027

[^67_15]: https://developer.android.com/blog/posts/google-play-adaptive-quality-standards


---

# ps si we pero nomas voy a hacer una pulsera sabes no es tan deep por el momento, o sea si quiero q todos se conecten a la misma pulsera ni ocupo hacer eso no?

Sí, bro, para una sola pulsera que todos van a monitorear, no necesitas ahorita vincular usuarios, crear topics por pulsera ni montar otro backend. Me fui a una solución más grande de la que necesitas.

## Puedes dejar el diseño actual

```text
                        → App del celular 1
ESP32 → EMQX Cloud       → App del celular 2
                        → App del celular 3
```

Todos los celulares se suscriben normalmente al mismo topic:

```text
pulsera/prueba/pulsos
```

Cada celular conectado y suscrito recibe una copia de los mensajes que publique la ESP32. No se “reparten” los pulsos entre celulares. [^68_1105]

También puedes usar el mismo usuario y contraseña MQTT para este prototipo, siempre que la configuración de EMQX permita esas conexiones. Lo que sí debe ser distinto en cada conexión es el **Client ID**, y tu código ya lo genera así: [^68_1099]

```csharp
.WithClientId(
    "AlertaPulsera-" + Guid.NewGuid().ToString("N"))
```


## Entonces, ¿pueden quedarse los datos en el código?

Para esta prueba controlada, puedes mantener las constantes y aceptar esa limitación. Al instalar la app en otro celular, los valores se incluyen con ella; no tienes que introducirlos otra vez ni mantener Visual Studio abierto.

La advertencia sigue siendo que una contraseña incluida en la app puede extraerse: no se vuelve secreta por compilarla. Pero eso no te obliga a implementar toda la arquitectura que te propuse para probar una sola pulsera. [^68_1086]

Por ahora: un servidor, un topic de pulsos y varios celulares conectándose automáticamente. Solo cambia la contraseña que quedó compartida aquí y actualízala localmente donde la uses.

<span style="display:none">[^68_1][^68_10][^68_11][^68_2][^68_3][^68_4][^68_5][^68_6][^68_7][^68_8][^68_9]</span>

<div align="center">⁂</div>

[^68_1]: https://developer.android.com/privacy-and-security/risks/hardcoded-cryptographic-secrets

[^68_2]: https://www.emqx.com/en/blog/advanced-features-of-mqtt-topics

[^68_3]: https://docs.emqx.com/en/cloud/latest/best_practices/client_development.html

[^68_4]: https://docs.emqx.com/en/emqx/latest/get-started/mqtt-advanced.html

[^68_5]: https://docs.emqx.com/en/cloud/latest/api/topic.html

[^68_6]: https://www.emqx.com/en/blog/subscription-identifier-and-subscription-options

[^68_7]: https://docs.emqx.com/en/emqx/latest/guides/configuration/mqtt.html

[^68_8]: https://assets.emqx.com/resources/ebooks/Mastering MQTT-Your Ultimate Tutorial for MQTT.pdf

[^68_9]: https://www.emqx.com/en/blog/introduction-to-mqtt5-protocol-shared-subscription

[^68_10]: https://docs.emqx.com/en/cloud/latest/deployments/default_authz.html

[^68_11]: https://docs.emqx.com/ja/emqx/v6.2/multi-tenancy/namespace-quick-start.html


---

# pero si estaria mejor deperdida que las contraseñas no fueran locales q no?

Sí, bro: sí está mejor que la contraseña no venga escrita dentro de la app, aunque sea una sola pulsera. No necesitas un sistema para muchas pulseras para mejorar eso.

La diferencia importante es esta:

- No incluirla en el código: podemos hacer que la app la obtenga de un servidor al iniciar.
- Que nunca llegue al celular: no es posible si la app se conecta directamente a MQTT usando esa contraseña; tiene que recibirla y utilizarla. Para mantenerla exclusivamente en el servidor, este tendría que actuar como intermediario. [^69_1116]


## Una opción sencilla para tu proyecto

Podemos mantener una sola pulsera y un solo topic, con este flujo:

```text
La app inicia sesión en Firebase
               ↓
Un servicio verifica que tenga acceso autorizado
               ↓
Le entrega las credenciales MQTT por conexión segura
               ↓
La app conecta automáticamente a EMQX
```

Así puedes cambiar la contraseña centralmente sin tener que volver a compilar la app. Pero sigue siendo una credencial compartida que los celulares autorizados reciben; no queda completamente oculta frente a quien controle uno de esos dispositivos. Obtener secretos desde un servidor requiere validar el acceso, no simplemente publicar un enlace que los entregue a cualquiera. [^69_1116]

Ojo con tu implementación actual: iniciar sesión anónimamente en Firebase no debería bastar por sí solo para entregar la contraseña. Hay que definir quién está autorizado, aunque sea mediante una aprobación sencilla para los celulares de tu prueba.

## Lo que no resolvería el problema

Guardar la contraseña con **SecureStorage** sí protege su almacenamiento local mediante cifrado, pero no evita que primero tengas que proporcionársela a la app. Escribir la contraseña en C\# y después copiarla a `SecureStorage` seguiría dejándola incluida en la aplicación. [^69_1109][^69_1116]

Para tu caso, el punto medio es conservar la conexión directa a EMQX, pero obtener las credenciales desde un servicio con acceso controlado. Sin inventar cuentas por pulsera ni cambiar el topic que ya funciona. Si tu requisito es que la contraseña MQTT nunca esté en el celular, entonces sí necesitamos un intermediario que reciba los pulsos y se los entregue a la app. [^69_1116]

<span style="display:none">[^69_1][^69_10][^69_11][^69_12][^69_13][^69_14][^69_15][^69_2][^69_3][^69_4][^69_5][^69_6][^69_7][^69_8][^69_9]</span>

<div align="center">⁂</div>

[^69_1]: https://learn.microsoft.com/en-us/power-automate/guidance/coding-guidelines/use-secure-inputs-outputs-triggers

[^69_2]: https://learn.microsoft.com/en-us/dotnet/maui/platform-integration/storage/secure-storage?view=net-maui-10.0

[^69_3]: https://learn.microsoft.com/en-us/windows-hardware/drivers/network/setting-device-specific-parameters

[^69_4]: https://learn.microsoft.com/en-us/dotnet/api/microsoft.maui.storage.securestorage?view=net-maui-10.0

[^69_5]: https://learn.microsoft.com/en-us/dotnet/api/microsoft.maui.storage.isecurestorage?view=net-maui-10.0

[^69_6]: http://www.learn.microsoft.com/en-us/aspnet/core/security/app-secrets

[^69_7]: https://learn.microsoft.com/en-us/dotnet/maui/migration/secure-storage?view=net-maui-10.0

[^69_8]: https://learn.microsoft.com/en-us/dotnet/architecture/microservices/secure-net-microservices-web-applications/developer-app-secrets-storage

[^69_9]: https://learn.microsoft.com/en-us/answers/questions/1049539/how-to-secure-api-key-in-net-maui

[^69_10]: https://learn.microsoft.com/en-us/intune/configmgr/core/clients/manage/remote-control/configuring-remote-control

[^69_11]: https://learn.microsoft.com/en-us/plugins/configure-plugin-mcp-servers

[^69_12]: https://learn.microsoft.com/en-us/microsoft-365/copilot-managed-runtime/developer/apps/ms-cli-command-reference?view=o365-worldwide

[^69_13]: https://learn.microsoft.com/en-us/aspnet/web-forms/overview/data-access/advanced-data-access-scenarios/protecting-connection-strings-and-other-configuration-information-cs

[^69_14]: https://learn.microsoft.com/en-us/plugins/data-privacy-security

[^69_15]: https://learn.microsoft.com/en-us/dotnet/maui/platform-integration/storage/secure-storage?view=net-maui-11.0


---

# ps q hago para eso

Para lo que quieres, bro, podemos guardar la contraseña en la nube y hacer que la app la solicite al abrir. Seguimos con una sola pulsera y el mismo topic; no necesitas cambiar eso.

Como ya usas Firebase, podemos hacerlo con una **Cloud Function** y **Secret Manager**: la contraseña se guarda como secreto en Google Cloud y solo la función autorizada puede leerla. [^70_1124]

## Así quedaría

```text
La app inicia sesión automáticamente en Firebase
                      ↓
Una función verifica si ese celular está autorizado
                      ↓
Devuelve la configuración MQTT por HTTPS
                      ↓
La app conecta automáticamente a EMQX
```

La contraseña dejaría de venir incluida en el código de la app, aunque el celular la recibiría al conectarse. No estaríamos ocultándola por completo al dispositivo.

## Qué tienes que hacer primero

Entra en la consola de Firebase y abre tu proyecto:

1. Revisa el plan que aparece abajo a la izquierda: “Spark” o “Blaze”.
2. Busca “Compilación / Build → Functions”.

Para desplegar Cloud Functions, Firebase requiere el plan **Blaze**, con facturación vinculada. Tiene cuotas sin costo, pero no significa que cualquier uso sea gratis. No actives facturación sin revisar eso primero. [^70_1129][^70_1123]

## Qué haríamos después

Si puedes usar Functions, lo implementamos en este orden:

1. Guardar la contraseña MQTT en Secret Manager, sin escribirla en el código de la función. Firebase permite hacerlo con `firebase functions:secrets:set`. [^70_1124]
2. Crear una función que verifique la sesión y una lista de UID autorizados. Tú aprobarías los celulares de la prueba; no entregaríamos la contraseña a cualquiera que cree una sesión anónima.
3. Cambiar la app para solicitar la configuración antes de conectar y quitar `ClavePulsos` del código.
4. Mantener el topic `pulsera/prueba/pulsos` y la conexión automática que ya estamos preparando.

No borres todavía las constantes: primero dejamos funcionando su reemplazo para no romper la prueba.

¿Tu proyecto de Firebase está en Spark o en Blaze? Eso define el siguiente paso sin hacerte configurar algo que luego no puedas desplegar.

<span style="display:none">[^70_1][^70_10][^70_11][^70_12][^70_13][^70_14][^70_15][^70_2][^70_3][^70_4][^70_5][^70_6][^70_7][^70_8][^70_9]</span>

<div align="center">⁂</div>

[^70_1]: https://firebase.google.com/docs/functions/quotas

[^70_2]: https://firebase.google.com/docs/functions/config-env

[^70_3]: https://firebase.google.com/docs/functions

[^70_4]: https://firebase.google.com/docs/functions/1st-gen/config-env-1st

[^70_5]: https://firebase.google.com/docs/functions/manage-functions

[^70_6]: https://firebase.google.com/docs/reference/functions/firebase-functions.params

[^70_7]: https://firebase.google.com/docs/functions/get-started

[^70_8]: https://firebase.google.com/docs/genkit/firebase

[^70_9]: https://firebase.google.com/docs/functions/auth-events

[^70_10]: https://firebase.google.com/docs/functions/oncallgenkit

[^70_11]: https://firebase.google.com/docs/functions/1st-gen/manage-functions-1st

[^70_12]: https://firebase.google.com/docs/functions/schedule-functions

[^70_13]: https://firebase.google.com/docs/functions/2nd-gen-upgrade

[^70_14]: https://firebase.google.com/docs/extensions/publishers/migrate

[^70_15]: https://firebase.google.com/docs/storage/faqs-storage-changes-announced-sept-2024


---

# tambien quiero eso para q en pulsera puente no tenga q poner siempre el uid y essas cpsas

Sí, bro. También podemos hacer que `PuentePulsera` arranque sin pedirte cada vez el UID, el servidor y el usuario MQTT. Son dos necesidades distintas:

- Configuración automática: que el programa cargue los datos sin preguntártelos.
- Protección de secretos: que las contraseñas no queden escritas en el código.

No necesariamente tienes que resolver ambas con la misma herramienta.

## Para tu única pulsera

El diseño que buscamos sería:

```text
PuentePulsera arranca
        ↓
Carga su configuración
        ↓
Conecta a EMQX
        ↓
Recibe CAIDA
        ↓
Consulta los destinatarios registrados en Firestore
        ↓
Envía las notificaciones
```

Así no tendrías que introducir manualmente el UID de un destinatario cada vez. Pero hay que revisar cómo lo está usando tu puente: no conviene simplemente quitar el filtro del UID, porque podríamos cambiar a quién le llegan las alertas.

## Qué necesito para cambiarlo sin romper lo que funciona

Pégame el `Program.cs` actual de `PuentePulsera`, sustituyendo por `"OCULTO"` cualquier:

- Contraseña MQTT.
- Token FCM.
- Clave privada o credencial de Firebase.

Conserva las líneas que piden el UID y las que consultan Firestore; esas son las que necesitamos revisar. No adjuntes el archivo JSON de la cuenta de servicio.

Con ese código podremos separar lo que debe cargarse automáticamente de lo que debe consultarse en Firebase. No necesitas activar Blaze solo para dejar de escribir el UID: primero revisamos ese flujo y después decidimos cómo centralizar las contraseñas.

---

# try

{
string rutaClave =
@"C:\\ClavesPulsera\\alertapulserapro-firebase-adminsdk-fbsvc-1a1b4891d3.json";

```
if (!File.Exists(rutaClave))
{
    Console.WriteLine("No se encontró el archivo de credenciales.");
    Console.WriteLine("Revisa la ruta configurada en rutaClave.");
    Console.WriteLine("\nPresiona Enter para salir.");
    Console.ReadLine();
    return;
}

Environment.SetEnvironmentVariable(
    "GOOGLE_APPLICATION_CREDENTIALS",
    rutaClave);

FirebaseApp.Create(new AppOptions
{
    Credential = GoogleCredential.GetApplicationDefault()
});

var firestore = FirestoreDb.Create("alertapulserapro");

Console.WriteLine("=== PuentePulsera: EMQX -> Firestore -> FCM ===");
Console.WriteLine();

Console.WriteLine(
    "Escribe el UID del usuario destinatario registrado en Firestore:");

string uidDestino = Console.ReadLine()?.Trim() ?? "";

if (string.IsNullOrWhiteSpace(uidDestino) ||
    uidDestino.Contains('/'))
{
    Console.WriteLine("El UID está vacío o tiene un formato inválido.");
    Console.WriteLine("\nPresiona Enter para salir.");
    Console.ReadLine();
    return;
}

Console.WriteLine();
Console.WriteLine(
    "Pega el Address de EMQX, sin https:// ni número de puerto:");

string servidor = Console.ReadLine()?.Trim() ?? "";

Console.WriteLine("Escribe el usuario MQTT que creaste:");
string usuario = Console.ReadLine()?.Trim() ?? "";

Console.WriteLine("Escribe la contraseña MQTT (no se mostrará):");

var claveMqtt = new StringBuilder();

while (true)
{
    var tecla = Console.ReadKey(intercept: true);

    if (tecla.Key == ConsoleKey.Enter)
    {
        break;
    }

    if (tecla.Key == ConsoleKey.Backspace)
    {
        if (claveMqtt.Length > 0)
        {
            claveMqtt.Length--;
        }
    }
    else if (!char.IsControl(tecla.KeyChar))
    {
        claveMqtt.Append(tecla.KeyChar);
    }
}

Console.WriteLine();

if (string.IsNullOrWhiteSpace(servidor) ||
    string.IsNullOrWhiteSpace(usuario) ||
    claveMqtt.Length == 0)
{
    Console.WriteLine("Faltan datos de conexión MQTT.");
    Console.WriteLine("\nPresiona Enter para salir.");
    Console.ReadLine();
    return;
}

var factory = new MqttFactory();

using var mqtt = factory.CreateMqttClient();

mqtt.ApplicationMessageReceivedAsync += async e =>
{
    try
    {
        string contenido = Encoding.UTF8.GetString(
            e.ApplicationMessage.PayloadSegment);

        Console.WriteLine();
        Console.WriteLine(
            $"MQTT recibido: {e.ApplicationMessage.Topic} -> {contenido}");

        // No enviar alertas antiguas almacenadas por el broker.
        if (e.ApplicationMessage.Retain)
        {
            Console.WriteLine("Mensaje retenido ignorado.");
            return;
        }

        if (!contenido.Trim().Equals(
                "CAIDA",
                StringComparison.OrdinalIgnoreCase))
        {
            Console.WriteLine("No es una alerta CAIDA. Se ignora.");
            return;
        }

        Console.WriteLine(
            "Consultando los dispositivos del usuario en Firestore...");

        var dispositivos = await firestore
            .Collection("usuarios")
            .Document(uidDestino)
            .Collection("dispositivos")
            .GetSnapshotAsync();

        var tokens = dispositivos.Documents
            .Where(doc => doc.ContainsField("token"))
            .Select(doc => doc.GetValue<string>("token"))
            .Where(valor => !string.IsNullOrWhiteSpace(valor))
            .Distinct()
            .ToList();

        if (tokens.Count == 0)
        {
            Console.WriteLine(
                "No hay tokens registrados para el UID indicado.");

            Console.WriteLine(
                "Comprueba el UID y activa las notificaciones en la app.");

            return;
        }

        Console.WriteLine(
            $"Tokens encontrados para ese usuario: {tokens.Count}");

        int aceptados = 0;
        int fallidos = 0;

        foreach (string tokenDestino in tokens)
        {
            try
            {
                var mensaje = new Message
                {
                    Token = tokenDestino,

                    Notification = new Notification
                    {
                        Title = "Alerta de pulsera",

                        Body =
                            "Prueba desde MQTT: se detectó una posible caída."
                    },

                    Android = new AndroidConfig
                    {
                        Priority = Priority.High
                    }
                };

                await FirebaseMessaging
                    .DefaultInstance
                    .SendAsync(mensaje);

                aceptados++;
            }
            catch (FirebaseMessagingException ex)
            {
                fallidos++;

                Console.WriteLine(
                    $"Firebase rechazó un envío. " +
                    $"Código: {ex.MessagingErrorCode}");
            }
            catch (Exception ex)
            {
                fallidos++;

                Console.WriteLine(
                    $"No se pudo completar un envío: {ex.Message}");
            }
        }

        Console.WriteLine(
            $"Envíos aceptados por Firebase: {aceptados}. " +
            $"Fallidos: {fallidos}.");
    }
    catch (Exception ex)
    {
        Console.WriteLine("Error procesando la alerta:");
        Console.WriteLine(ex.Message);
    }
};

mqtt.DisconnectedAsync += e =>
{
    Console.WriteLine();
    Console.WriteLine(
        $"MQTT desconectado. Motivo: {e.Reason}");

    Console.WriteLine(
        "Si no detuviste el puente, revisa la conexión y vuelve a ejecutarlo.");

    return System.Threading.Tasks.Task.CompletedTask;
};

var opciones = new MqttClientOptionsBuilder()
    .WithClientId(
        "PuentePulsera-" + Guid.NewGuid().ToString("N"))
    .WithTcpServer(servidor, 8883)
    .WithCredentials(usuario, claveMqtt.ToString())
    .WithTlsOptions(tls => tls.UseTls())
    .Build();

claveMqtt.Clear();

Console.WriteLine();
Console.WriteLine("Conectando a EMQX...");

await mqtt.ConnectAsync(opciones);

var suscripcion = factory
    .CreateSubscribeOptionsBuilder()
    .WithTopicFilter(f => f.WithTopic("pulsera/prueba"))
    .Build();

var resultadoSuscripcion = await mqtt.SubscribeAsync(suscripcion);

foreach (var item in resultadoSuscripcion.Items)
{
    Console.WriteLine(
        $"Resultado de suscripción: {item.ResultCode}");
}

Console.WriteLine();
Console.WriteLine("Conectado a EMQX.");
Console.WriteLine("Esperando CAIDA en el tema pulsera/prueba.");
Console.WriteLine(
    "Los destinatarios se consultarán en Firestore en cada alerta.");

Console.WriteLine();
Console.WriteLine("Mantén esta consola abierta.");
Console.WriteLine("Presiona Enter para detener el puente.");

Console.ReadLine();

if (mqtt.IsConnected)
{
    await mqtt.DisconnectAsync(
        new MqttClientDisconnectOptionsBuilder().Build());
}
```

}
catch (Exception ex)
{
Console.WriteLine();
Console.WriteLine("ERROR:");
Console.WriteLine(ex.Message);
Console.WriteLine("\\nPresiona Enter para salir.");
Console.ReadLine();
}

Sí, bro. Tu código muestra exactamente por qué te los pide: tiene `Console.ReadLine()` para el UID, servidor y usuario, y un bucle para leer la contraseña.

Podemos quitar esas preguntas sin cambiar el envío de notificaciones que ya funciona. Lo haría así:


| Dato | Dónde quedaría |
| :-- | :-- |
| UID destinatario, servidor y usuario MQTT | Un documento de configuración en Firestore. |
| Contraseña MQTT | Secret Manager, no en el código ni en un documento accesible a las apps. |
| Credencial administrativa de Firebase | Por ahora, el archivo protegido que ya usa el puente en tu laptop. Nunca dentro de la app Android. |

El puente puede acceder a Firestore mediante su cuenta de servicio y a Secret Manager si le concedemos el permiso correspondiente. Las bibliotecas de servidor de Firestore usan IAM, no las reglas de acceso de las apps móviles. [^72_1139][^72_1138]

## 1. Crea la configuración en Firestore

En “Firestore Database → Datos”, crea:

- Colección: `configuracion`
- Documento: `puente`

Dentro agrega estos campos de tipo string:

```text
uidDestino     → UID del destinatario que ya usas
servidorMqtt   → host de EMQX, sin protocolo ni puerto
usuarioMqtt    → usuario MQTT del puente
```

No agregues ahí la contraseña.

Conservaremos por ahora el mismo destinatario que ya funciona. Esto evita escribir el UID cada vez; no cambia automáticamente las alertas para enviarlas a todos los usuarios.

## 2. Guarda la contraseña en Secret Manager

En Google Cloud Console, selecciona el mismo proyecto `alertapulserapro`:

1. Abre “Secret Manager”.
2. Habilita la API si te lo solicita. Revisa cualquier requisito de facturación antes de aceptarlo.
3. Crea un secreto llamado:
```text
pulsera-mqtt-clave
```

4. Como valor, introduce tu contraseña MQTT actualizada, solo en esa consola.
5. En los permisos de ese secreto, concede a la cuenta de servicio que usa el puente el rol “Secret Manager Secret Accessor”.

Ese rol permite leer el contenido del secreto. Puedes identificar la cuenta por el campo `client_email` de tu archivo de credenciales, sin compartir aquí el archivo. [^72_1150][^72_1138]

## 3. Instala un paquete en `PuentePulsera`

En el administrador de NuGet del proyecto del puente, instala:

```text
Google.Cloud.SecretManager.V1
```

Es la biblioteca de Google Cloud para acceder a Secret Manager desde C\#. [^72_1149]

Agrega al principio de `Program.cs`:

```csharp
using Google.Cloud.SecretManager.V1;
```


## 4. Reemplaza las preguntas de la consola

Conserva la inicialización de Firebase y esta línea:

```csharp
var firestore = FirestoreDb.Create("alertapulserapro");
```

Después, reemplaza desde:

```csharp
Console.WriteLine("=== PuentePulsera: EMQX -> Firestore -> FCM ===");
```

hasta justo antes de:

```csharp
var factory = new MqttFactory();
```

por esto:

```csharp
Console.WriteLine(
    "=== PuentePulsera: EMQX -> Firestore -> FCM ===");

Console.WriteLine("Cargando configuración...");

var configuracion = await firestore
    .Collection("configuracion")
    .Document("puente")
    .GetSnapshotAsync();

if (!configuracion.Exists)
{
    throw new InvalidOperationException(
        "No existe configuracion/puente en Firestore.");
}

string uidDestino = configuracion
    .GetValue<string>("uidDestino").Trim();

string servidor = configuracion
    .GetValue<string>("servidorMqtt").Trim();

string usuario = configuracion
    .GetValue<string>("usuarioMqtt").Trim();

if (string.IsNullOrWhiteSpace(uidDestino) ||
    uidDestino.Contains('/') ||
    string.IsNullOrWhiteSpace(servidor) ||
    string.IsNullOrWhiteSpace(usuario))
{
    throw new InvalidOperationException(
        "La configuración del puente está incompleta o es inválida.");
}

Console.WriteLine("Obteniendo credencial MQTT...");

var secretos = await SecretManagerServiceClient.CreateAsync();

var nombreSecreto = new SecretVersionName(
    "alertapulserapro",
    "pulsera-mqtt-clave",
    "latest");

var respuestaSecreto =
    await secretos.AccessSecretVersionAsync(nombreSecreto);

string claveMqtt = respuestaSecreto.Payload.Data.ToStringUtf8();

if (string.IsNullOrWhiteSpace(claveMqtt))
{
    throw new InvalidOperationException(
        "El secreto de MQTT está vacío.");
}
```

La lectura utiliza las credenciales de Google que tu programa ya configura con `GOOGLE_APPLICATION_CREDENTIALS`. `latest` selecciona la versión más reciente del secreto; para un despliegue estable puedes fijar una versión concreta. [^72_1140][^72_1151]

## 5. Ajusta dos líneas del resto del código

Cambia:

```csharp
.WithCredentials(usuario, claveMqtt.ToString())
```

por:

```csharp
.WithCredentials(usuario, claveMqtt)
```

Y elimina:

```csharp
claveMqtt.Clear();
```

Ahora `claveMqtt` es un `string`, no un `StringBuilder`. No imprimas su contenido en la consola.

## Qué queda resuelto

El puente cargará la configuración al arrancar sin pedirte UID, servidor, usuario ni contraseña. El procesamiento de `CAIDA`, la consulta de tokens y el envío FCM quedan igual.

Esto no elimina todas las credenciales locales: el puente todavía necesita el archivo de cuenta de servicio para identificarse. Tampoco modifica todavía la app Android; nunca debemos darle ese archivo ni permisos administrativos para leer secretos. La app necesitará el acceso controlado mediante una función que comentamos antes.

Antes de guardar configuración en Firestore, revisa sus reglas: el documento `configuracion/puente` no debe quedar abierto a lecturas o escrituras de cualquier app. No reemplaces a ciegas tus reglas actuales; el puente podrá acceder mediante IAM aunque el acceso móvil esté denegado. [^72_1139]

<span style="display:none">[^72_1][^72_10][^72_11][^72_12][^72_13][^72_14][^72_15][^72_2][^72_3][^72_4][^72_5][^72_6][^72_7][^72_8][^72_9]</span>

<div align="center">⁂</div>

[^72_1]: https://docs.cloud.google.com/secret-manager/docs/access-secret-version

[^72_2]: https://docs.cloud.google.com/firestore/native/docs/security/get-started

[^72_3]: https://docs.cloud.google.com/secret-manager/docs/samples/secretmanager-access-secret-version

[^72_4]: https://docs.cloud.google.com/firestore/native/docs/security/insecure-rules

[^72_5]: https://docs.cloud.google.com/firestore/native/docs/security/rules-structure

[^72_6]: https://docs.cloud.google.com/firestore/native/docs/security/rules-conditions

[^72_7]: https://docs.cloud.google.com/firestore/native/docs/security/rules-query

[^72_8]: https://docs.cloud.google.com/firestore/native/docs/security/test-rules-emulator

[^72_9]: https://docs.cloud.google.com/secret-manager/docs/view-secret-version

[^72_10]: https://docs.cloud.google.com/firestore/native/docs/security/rules-fields

[^72_11]: https://docs.cloud.google.com/firestore/native/docs/solutions/role-based-access

[^72_12]: https://docs.cloud.google.com/secret-manager/docs/reference/libraries

[^72_13]: https://docs.cloud.google.com/secret-manager/docs/create-secret-quickstart

[^72_14]: https://docs.cloud.google.com/dotnet/docs/reference/Google.Cloud.SecretManager.V1/latest/Google.Cloud.SecretManager.V1.SecretManagerServiceClient

[^72_15]: https://docs.cloud.google.com/secret-manager/docs/manage-access-to-secrets


---

# me pide stringdebajo de campo

Sí, bro. Si estás creando el documento en Firestore, cada fila lleva tres cosas: nombre del campo, tipo y valor.

Ponlo así:


| Campo | Tipo | Valor |
| :-- | :-- | :-- |
| `uidDestino` | `string` | El UID que antes escribías en la consola del puente. |
| `servidorMqtt` | `string` | El host de EMQX que ya usas, sin protocolo ni puerto. |
| `usuarioMqtt` | `string` | El usuario MQTT que ya usas en el puente. |

O sea, **`string` es el tipo de dato**, no algo que tengas que escribir como valor. Déjalo seleccionado y en la casilla de valor debajo escribe el dato correspondiente, sin comillas.

Los tres campos van dentro de:

```text
configuracion
  └── puente
        ├── uidDestino
        ├── servidorMqtt
        └── usuarioMqtt
```

Usa “Agregar campo” para crear cada fila y luego guarda. La contraseña no va en este documento; esa la estamos dejando para Secret Manager.

---

# oye pero el uid no cambia si se conecta otro user?

Sí, bro: otro usuario tiene otro **UID**. El del primero no cambia porque entre alguien más; cada cuenta tiene su identificador. En tu app, al crear una sesión anónima nueva, se crea un usuario con su propio UID. [^74_1155][^74_1]

Y tienes razón: guardar un solo `uidDestino` no cumple lo que quieres de que varios usuarios reciban las alertas de la misma pulsera. Mi propuesta anterior quitaba la pregunta de la consola, pero seguía dejando un único destinatario.

## Cómo lo ajustamos

Para tu prototipo, podemos hacer que el puente consulte los tokens de todos los dispositivos registrados en tu colección `usuarios`, en lugar de consultar un UID concreto:

```text
usuarios
  ├── UID_A
  │    └── dispositivos → tokens de sus celulares
  └── UID_B
       └── dispositivos → tokens de sus celulares
```

Así, con la estructura de registro que ya tiene tu app:

- Cada usuario activa las notificaciones para registrar su token.
- Cuando llega `CAIDA`, el puente consulta los dispositivos registrados.
- Envía la alerta a todos los tokens encontrados, sin pedirte un UID.

Eso significa que todos los dispositivos registrados en ese proyecto bajo esa colección serán destinatarios; para tu prueba de una sola pulsera, es el comportamiento que estás buscando.

## Qué poner ahora en Firestore

No agregues `uidDestino`. Si ya lo creaste, podemos dejar de usarlo y después eliminarlo. El documento `configuracion/puente` solo necesita por ahora:


| Campo | Tipo | Valor |
| :-- | :-- | :-- |
| `servidorMqtt` | `string` | Tu host de EMQX. |
| `usuarioMqtt` | `string` | Tu usuario MQTT. |

El siguiente cambio del puente debe quitar tanto la lectura de `uidDestino` como el filtro `.Document(uidDestino)`. No basta con borrar el campo de Firestore: hay que ajustar esas partes del código también.

<span style="display:none">[^74_10][^74_2][^74_3][^74_4][^74_5][^74_6][^74_7][^74_8][^74_9]</span>

<div align="center">⁂</div>

[^74_1]: https://firebase.google.com/docs/auth/android/anonymous-auth

[^74_2]: https://firebase.google.com/docs/auth/web/manage-users

[^74_3]: https://firebase.google.com/docs/auth/ios/manage-users

[^74_4]: https://firebase.google.com/docs/auth/admin/manage-users

[^74_5]: https://firebase.google.com/docs/auth/flutter/manage-users

[^74_6]: https://firebase.google.com/docs/auth/users

[^74_7]: https://firebase.google.com/docs/extensions/official/delete-user-data

[^74_8]: https://firebase.google.com/docs/auth/web/anonymous-auth

[^74_9]: https://firebase.google.com/docs/auth/flutter/anonymous-auth

[^74_10]: https://firebase.google.com/docs/auth/ios/anonymous-auth


---

# ya

Va, bro. Ahora cambiaremos el puente para que envíe las alertas a todos los celulares registrados, sin usar un UID fijo. No toques todavía la conexión MQTT ni el envío FCM que ya funcionan.

## 1. Quita la solicitud o lectura del UID

Si todavía tienes el bloque que pide:

```csharp
Console.WriteLine(
    "Escribe el UID del usuario destinatario registrado en Firestore:");
```

elimina esa pregunta, la lectura de `uidDestino` y su validación.

Si ya pusiste la configuración desde Firestore, elimina:

```csharp
string uidDestino = configuracion
    .GetValue<string>("uidDestino").Trim();
```

Y deja su validación solo para servidor y usuario:

```csharp
if (string.IsNullOrWhiteSpace(servidor) ||
    string.IsNullOrWhiteSpace(usuario))
{
    throw new InvalidOperationException(
        "La configuración MQTT del puente está incompleta.");
}
```


## 2. Reemplaza la consulta de dispositivos

Dentro de `mqtt.ApplicationMessageReceivedAsync`, busca este bloque:

```csharp
Console.WriteLine(
    "Consultando los dispositivos del usuario en Firestore...");

var dispositivos = await firestore
    .Collection("usuarios")
    .Document(uidDestino)
    .Collection("dispositivos")
    .GetSnapshotAsync();

var tokens = dispositivos.Documents
    .Where(doc => doc.ContainsField("token"))
    .Select(doc => doc.GetValue<string>("token"))
    .Where(valor => !string.IsNullOrWhiteSpace(valor))
    .Distinct()
    .ToList();
```

Reemplázalo por:

```csharp
Console.WriteLine(
    "Consultando los dispositivos registrados en Firestore...");

var dispositivos = await firestore
    .CollectionGroup("dispositivos")
    .GetSnapshotAsync();

var tokens = dispositivos.Documents
    .Where(doc =>
    {
        // Solo usuarios/{uid}/dispositivos/{instalacionId}.
        var partes = doc.Reference.Path.Split('/');

        return partes.Length == 4 &&
               partes[^75_0] == "usuarios" &&
               partes[^75_2] == "dispositivos";
    })
    .Where(doc => doc.ContainsField("token"))
    .Select(doc => doc.GetValue<string>("token"))
    .Where(token => !string.IsNullOrWhiteSpace(token))
    .Distinct()
    .ToList();
```


## 3. Actualiza los mensajes

Sustituye tu bloque `if (tokens.Count == 0)` y el mensaje que le sigue por:

```csharp
if (tokens.Count == 0)
{
    Console.WriteLine(
        "No hay tokens de dispositivos registrados.");

    Console.WriteLine(
        "Abre la app y activa las notificaciones en cada celular.");

    return;
}

Console.WriteLine(
    $"Tokens destinatarios encontrados: {tokens.Count}");
```

Conserva sin cambios el `foreach (string tokenDestino in tokens)` y todo su código de envío.

## 4. Prueba el resultado

1. Compila y ejecuta el puente.
2. Activa las notificaciones en cada celular de prueba.
3. Publica `CAIDA` como texto plano en `pulsera/prueba`, sin retain.
4. Revisa cuántos tokens encuentra y cuántos envíos acepta Firebase.

Con esto, el puente deja de depender de un UID concreto. Los destinatarios serán todos los tokens registrados bajo `usuarios/{uid}/dispositivos/{instalacionId}`, que es la estructura que utiliza tu app.

Este cambio resuelve los destinatarios; la carga remota de la contraseña MQTT sigue siendo el paso separado de Secret Manager.

<span style="display:none">[^75_1]</span>

<div align="center">⁂</div>

[^75_1]: https://learn.microsoft.com/es-es/dotnet/maui/get-started/first-app?view=net-maui-10.0


---

# try

{
string rutaClave =
@"C:\\ClavesPulsera\\alertapulserapro-firebase-adminsdk-fbsvc-1a1b4891d3.json";

```
if (!File.Exists(rutaClave))
{
    Console.WriteLine("No se encontró el archivo de credenciales.");
    Console.WriteLine("Revisa la ruta configurada en rutaClave.");
    Console.WriteLine("\nPresiona Enter para salir.");
    Console.ReadLine();
    return;
}

Environment.SetEnvironmentVariable(
    "GOOGLE_APPLICATION_CREDENTIALS",
    rutaClave);

FirebaseApp.Create(new AppOptions
{
    Credential = GoogleCredential.GetApplicationDefault()
});

var firestore = FirestoreDb.Create("alertapulserapro");

Console.WriteLine("=== PuentePulsera: EMQX -> Firestore -> FCM ===");
Console.WriteLine();

string uidDestino = Console.ReadLine()?.Trim() ?? "";

if (string.IsNullOrWhiteSpace(uidDestino) ||
    uidDestino.Contains('/'))
{
    Console.WriteLine("El UID está vacío o tiene un formato inválido.");
    Console.WriteLine("\nPresiona Enter para salir.");
    Console.ReadLine();
    return;
}

Console.WriteLine();
Console.WriteLine(
    "Pega el Address de EMQX, sin https:// ni número de puerto:");

string servidor = Console.ReadLine()?.Trim() ?? "";

Console.WriteLine("Escribe el usuario MQTT que creaste:");
string usuario = Console.ReadLine()?.Trim() ?? "";

Console.WriteLine("Escribe la contraseña MQTT (no se mostrará):");

var claveMqtt = new StringBuilder();

while (true)
{
    var tecla = Console.ReadKey(intercept: true);

    if (tecla.Key == ConsoleKey.Enter)
    {
        break;
    }

    if (tecla.Key == ConsoleKey.Backspace)
    {
        if (claveMqtt.Length > 0)
        {
            claveMqtt.Length--;
        }
    }
    else if (!char.IsControl(tecla.KeyChar))
    {
        claveMqtt.Append(tecla.KeyChar);
    }
}

Console.WriteLine();

if (string.IsNullOrWhiteSpace(servidor) ||
    string.IsNullOrWhiteSpace(usuario) ||
    claveMqtt.Length == 0)
{
    Console.WriteLine("Faltan datos de conexión MQTT.");
    Console.WriteLine("\nPresiona Enter para salir.");
    Console.ReadLine();
    return;
}

var factory = new MqttFactory();

using var mqtt = factory.CreateMqttClient();

mqtt.ApplicationMessageReceivedAsync += async e =>
{
    try
    {
        string contenido = Encoding.UTF8.GetString(
            e.ApplicationMessage.PayloadSegment);

        Console.WriteLine();
        Console.WriteLine(
            $"MQTT recibido: {e.ApplicationMessage.Topic} -> {contenido}");

        // No enviar alertas antiguas almacenadas por el broker.
        if (e.ApplicationMessage.Retain)
        {
            Console.WriteLine("Mensaje retenido ignorado.");
            return;
        }

        if (!contenido.Trim().Equals(
                "CAIDA",
                StringComparison.OrdinalIgnoreCase))
        {
            Console.WriteLine("No es una alerta CAIDA. Se ignora.");
            return;
        }

        Console.WriteLine(
            "Consultando los dispositivos del usuario en Firestore...");

        var dispositivos = await firestore
            .Collection("usuarios")
            .Document(uidDestino)
            .Collection("dispositivos")
            .GetSnapshotAsync();

        var tokens = dispositivos.Documents
            .Where(doc => doc.ContainsField("token"))
            .Select(doc => doc.GetValue<string>("token"))
            .Where(valor => !string.IsNullOrWhiteSpace(valor))
            .Distinct()
            .ToList();

        if (tokens.Count == 0)
        {
            Console.WriteLine(
                "No hay tokens registrados para el UID indicado.");

            Console.WriteLine(
                "Comprueba el UID y activa las notificaciones en la app.");

            return;
        }

        Console.WriteLine(
            $"Tokens encontrados para ese usuario: {tokens.Count}");

        int aceptados = 0;
        int fallidos = 0;

        foreach (string tokenDestino in tokens)
        {
            try
            {
                var mensaje = new Message
                {
                    Token = tokenDestino,

                    Notification = new Notification
                    {
                        Title = "Alerta de pulsera",

                        Body =
                            "Prueba desde MQTT: se detectó una posible caída."
                    },

                    Android = new AndroidConfig
                    {
                        Priority = Priority.High
                    }
                };

                await FirebaseMessaging
                    .DefaultInstance
                    .SendAsync(mensaje);

                aceptados++;
            }
            catch (FirebaseMessagingException ex)
            {
                fallidos++;

                Console.WriteLine(
                    $"Firebase rechazó un envío. " +
                    $"Código: {ex.MessagingErrorCode}");
            }
            catch (Exception ex)
            {
                fallidos++;

                Console.WriteLine(
                    $"No se pudo completar un envío: {ex.Message}");
            }
        }

        Console.WriteLine(
            $"Envíos aceptados por Firebase: {aceptados}. " +
            $"Fallidos: {fallidos}.");
    }
    catch (Exception ex)
    {
        Console.WriteLine("Error procesando la alerta:");
        Console.WriteLine(ex.Message);
    }
};

mqtt.DisconnectedAsync += e =>
{
    Console.WriteLine();
    Console.WriteLine(
        $"MQTT desconectado. Motivo: {e.Reason}");

    Console.WriteLine(
        "Si no detuviste el puente, revisa la conexión y vuelve a ejecutarlo.");

    return System.Threading.Tasks.Task.CompletedTask;
};

var opciones = new MqttClientOptionsBuilder()
    .WithClientId(
        "PuentePulsera-" + Guid.NewGuid().ToString("N"))
    .WithTcpServer(servidor, 8883)
    .WithCredentials(usuario, claveMqtt.ToString())
    .WithTlsOptions(tls => tls.UseTls())
    .Build();

claveMqtt.Clear();

Console.WriteLine();
Console.WriteLine("Conectando a EMQX...");

await mqtt.ConnectAsync(opciones);

var suscripcion = factory
    .CreateSubscribeOptionsBuilder()
    .WithTopicFilter(f => f.WithTopic("pulsera/prueba"))
    .Build();

var resultadoSuscripcion = await mqtt.SubscribeAsync(suscripcion);

foreach (var item in resultadoSuscripcion.Items)
{
    Console.WriteLine(
        $"Resultado de suscripción: {item.ResultCode}");
}

Console.WriteLine();
Console.WriteLine("Conectado a EMQX.");
Console.WriteLine("Esperando CAIDA en el tema pulsera/prueba.");
Console.WriteLine(
    "Los destinatarios se consultarán en Firestore en cada alerta.");

Console.WriteLine();
Console.WriteLine("Mantén esta consola abierta.");
Console.WriteLine("Presiona Enter para detener el puente.");

Console.ReadLine();

if (mqtt.IsConnected)
{
    await mqtt.DisconnectAsync(
        new MqttClientDisconnectOptionsBuilder().Build());
}
```

}
catch (Exception ex)
{
Console.WriteLine();
Console.WriteLine("ERROR:");
Console.WriteLine(ex.Message);
Console.WriteLine("\\nPresiona Enter para salir.");
Console.ReadLine();
} modificalo tu broder

Va, bro. Te lo dejo para que:

- Ya no pida ningún UID.
- Lea el servidor y usuario MQTT desde `configuracion/puente`.
- Envíe las alertas a todos los dispositivos registrados bajo `usuarios/{uid}/dispositivos/{id}`.
- Conserve el envío de notificaciones que ya te funcionó.

Por ahora solo seguirá pidiendo la contraseña MQTT al arrancar, porque todavía no confirmamos que hayas configurado Secret Manager. No la voy a dejar escrita en el código ni en Firestore.

## Reemplaza `Program.cs` por esto

```csharp
using System;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using FirebaseAdmin;
using FirebaseAdmin.Messaging;
using Google.Apis.Auth.OAuth2;
using Google.Cloud.Firestore;
using MQTTnet;
using MQTTnet.Client;

try
{
    string rutaClave =
        @"C:\ClavesPulsera\alertapulserapro-firebase-adminsdk-fbsvc-1a1b4891d3.json";

    if (!File.Exists(rutaClave))
    {
        Console.WriteLine(
            "No se encontró el archivo de credenciales.");

        Console.WriteLine(
            "Revisa la ruta configurada en rutaClave.");

        Console.WriteLine("\nPresiona Enter para salir.");
        Console.ReadLine();
        return;
    }

    Environment.SetEnvironmentVariable(
        "GOOGLE_APPLICATION_CREDENTIALS",
        rutaClave);

    FirebaseApp.Create(new AppOptions
    {
        Credential = GoogleCredential.GetApplicationDefault()
    });

    var firestore = FirestoreDb.Create("alertapulserapro");

    Console.WriteLine(
        "=== PuentePulsera: EMQX -> Firestore -> FCM ===");

    Console.WriteLine();
    Console.WriteLine(
        "Cargando configuración desde Firestore...");

    var configuracion = await firestore
        .Collection("configuracion")
        .Document("puente")
        .GetSnapshotAsync();

    if (!configuracion.Exists)
    {
        throw new InvalidOperationException(
            "No existe el documento configuracion/puente.");
    }

    if (!configuracion.ContainsField("servidorMqtt") ||
        !configuracion.ContainsField("usuarioMqtt"))
    {
        throw new InvalidOperationException(
            "Faltan servidorMqtt o usuarioMqtt " +
            "en configuracion/puente.");
    }

    string servidor = configuracion
        .GetValue<string>("servidorMqtt")
        .Trim();

    string usuario = configuracion
        .GetValue<string>("usuarioMqtt")
        .Trim();

    if (string.IsNullOrWhiteSpace(servidor) ||
        string.IsNullOrWhiteSpace(usuario))
    {
        throw new InvalidOperationException(
            "El servidor o el usuario MQTT están vacíos.");
    }

    if (servidor.Contains("://") ||
        servidor.Contains('/') ||
        servidor.Contains(':') ||
        servidor.Any(char.IsWhiteSpace))
    {
        throw new InvalidOperationException(
            "servidorMqtt debe contener solo el host, " +
            "sin protocolo, puerto, rutas ni espacios.");
    }

    Console.WriteLine("Configuración cargada.");
    Console.WriteLine();

    Console.WriteLine(
        "Escribe la contraseña MQTT (no se mostrará):");

    var claveMqtt = new StringBuilder();

    while (true)
    {
        var tecla = Console.ReadKey(intercept: true);

        if (tecla.Key == ConsoleKey.Enter)
        {
            break;
        }

        if (tecla.Key == ConsoleKey.Backspace)
        {
            if (claveMqtt.Length > 0)
            {
                claveMqtt.Length--;
            }
        }
        else if (!char.IsControl(tecla.KeyChar))
        {
            claveMqtt.Append(tecla.KeyChar);
        }
    }

    Console.WriteLine();

    if (claveMqtt.Length == 0)
    {
        throw new InvalidOperationException(
            "La contraseña MQTT está vacía.");
    }

    var factory = new MqttFactory();

    using var mqtt = factory.CreateMqttClient();

    mqtt.ApplicationMessageReceivedAsync += async e =>
    {
        try
        {
            if (e.ApplicationMessage.Topic != "pulsera/prueba")
            {
                return;
            }

            string contenido = e.ApplicationMessage
                .ConvertPayloadToString();

            Console.WriteLine();

            Console.WriteLine(
                $"MQTT recibido: " +
                $"{e.ApplicationMessage.Topic} -> {contenido}");

            // Evitar alertas antiguas retenidas por el broker.
            if (e.ApplicationMessage.Retain)
            {
                Console.WriteLine(
                    "Mensaje retenido ignorado.");

                return;
            }

            if (!contenido.Trim().Equals(
                    "CAIDA",
                    StringComparison.OrdinalIgnoreCase))
            {
                Console.WriteLine(
                    "No es una alerta CAIDA. Se ignora.");

                return;
            }

            Console.WriteLine(
                "Consultando los dispositivos registrados...");

            var dispositivos = await firestore
                .CollectionGroup("dispositivos")
                .GetSnapshotAsync();

            var tokens = dispositivos.Documents
                .Where(doc =>
                {
                    // Solo:
                    // usuarios/{uid}/dispositivos/{instalacionId}
                    var partes = doc.Reference.Path.Split('/');

                    return partes.Length == 4 &&
                           partes[^76_0] == "usuarios" &&
                           partes[^76_2] == "dispositivos";
                })
                .Select(doc =>
                {
                    if (doc.TryGetValue<string>(
                            "token",
                            out var token))
                    {
                        return token;
                    }

                    return string.Empty;
                })
                .Where(token =>
                    !string.IsNullOrWhiteSpace(token))
                .Distinct()
                .ToList();

            if (tokens.Count == 0)
            {
                Console.WriteLine(
                    "No hay tokens de dispositivos registrados.");

                Console.WriteLine(
                    "Abre la app y activa las notificaciones " +
                    "en cada celular.");

                return;
            }

            Console.WriteLine(
                $"Tokens destinatarios encontrados: {tokens.Count}");

            int aceptados = 0;
            int fallidos = 0;

            foreach (string tokenDestino in tokens)
            {
                try
                {
                    var mensaje = new Message
                    {
                        Token = tokenDestino,

                        Notification = new Notification
                        {
                            Title = "Alerta de pulsera",

                            Body =
                                "Prueba desde MQTT: se detectó " +
                                "una posible caída."
                        },

                        Android = new AndroidConfig
                        {
                            Priority = Priority.High
                        }
                    };

                    await FirebaseMessaging
                        .DefaultInstance
                        .SendAsync(mensaje);

                    aceptados++;
                }
                catch (FirebaseMessagingException ex)
                {
                    fallidos++;

                    Console.WriteLine(
                        "Firebase rechazó un envío. " +
                        $"Código: {ex.MessagingErrorCode}");
                }
                catch (Exception ex)
                {
                    fallidos++;

                    Console.WriteLine(
                        "No se pudo completar un envío: " +
                        ex.Message);
                }
            }

            Console.WriteLine(
                $"Envíos aceptados por Firebase: {aceptados}. " +
                $"Fallidos: {fallidos}.");
        }
        catch (Exception ex)
        {
            Console.WriteLine(
                "Error procesando la alerta:");

            Console.WriteLine(ex.Message);
        }
    };

    mqtt.DisconnectedAsync += e =>
    {
        Console.WriteLine();

        Console.WriteLine(
            $"MQTT desconectado. Motivo: {e.Reason}");

        Console.WriteLine(
            "Si no detuviste el puente, revisa la conexión " +
            "y vuelve a ejecutarlo.");

        return Task.CompletedTask;
    };

    var opciones = new MqttClientOptionsBuilder()
        .WithClientId(
            "PuentePulsera-" + Guid.NewGuid().ToString("N"))
        .WithTcpServer(servidor, 8883)
        .WithCredentials(usuario, claveMqtt.ToString())
        .WithTlsOptions(tls => tls.UseTls())
        .Build();

    claveMqtt.Clear();

    Console.WriteLine();
    Console.WriteLine("Conectando a EMQX...");

    await mqtt.ConnectAsync(opciones);

    var suscripcion = factory
        .CreateSubscribeOptionsBuilder()
        .WithTopicFilter(f => f.WithTopic("pulsera/prueba"))
        .Build();

    var resultadoSuscripcion =
        await mqtt.SubscribeAsync(suscripcion);

    foreach (var item in resultadoSuscripcion.Items)
    {
        Console.WriteLine(
            $"Resultado de suscripción: {item.ResultCode}");

        if ((int)item.ResultCode >= 128)
        {
            throw new InvalidOperationException(
                "EMQX rechazó la suscripción: " +
                item.ResultCode);
        }
    }

    Console.WriteLine();
    Console.WriteLine("Conectado a EMQX.");

    Console.WriteLine(
        "Esperando CAIDA en el tema pulsera/prueba.");

    Console.WriteLine(
        "Los destinatarios se consultarán en Firestore " +
        "en cada alerta.");

    Console.WriteLine(
        "Se enviará a todos los tokens registrados en " +
        "usuarios/{uid}/dispositivos/{id}.");

    Console.WriteLine();
    Console.WriteLine("Mantén esta consola abierta.");

    Console.WriteLine(
        "Presiona Enter para detener el puente.");

    Console.ReadLine();

    if (mqtt.IsConnected)
    {
        await mqtt.DisconnectAsync(
            new MqttClientDisconnectOptionsBuilder()
                .Build());
    }
}
catch (Exception ex)
{
    Console.WriteLine();
    Console.WriteLine("ERROR:");
    Console.WriteLine(ex.Message);

    Console.WriteLine("\nPresiona Enter para salir.");
    Console.ReadLine();
}
```


## Antes de ejecutarlo

Comprueba que el documento de Firestore tenga exactamente estos nombres, respetando mayúsculas y minúsculas:

```text
configuracion
  └── puente
        ├── servidorMqtt   (string)
        └── usuarioMqtt    (string)
```

Esta versión no necesita paquetes nuevos respecto a los que ya usa tu puente. También conservé `Message.Token` y la configuración TLS del puente para no mezclar este cambio con otros pendientes.

Al arrancar, debe mostrar “Configuración cargada” y pedir únicamente la contraseña. Después prueba publicando `CAIDA` en `pulsera/prueba`, sin retain.

El siguiente paso para quitar también esa última pregunta es terminar Secret Manager; esta versión todavía no carga la contraseña desde la nube.

<span style="display:none">[^76_1]</span>

<div align="center">⁂</div>

[^76_1]: https://learn.microsoft.com/es-es/dotnet/maui/get-started/first-app?view=net-maui-10.0


---

# A LA CONTRA ESTA BIEN PERO ME DICE Q NO HAY TOKENS

Bro, puede ser un detalle del filtro que te pasé, no necesariamente que hayan desaparecido los tokens. Mi código dividía `doc.Reference.Path` y exigía exactamente cuatro partes; eso depende del formato de la ruta que devuelve la biblioteca. Mejor comprobamos la colección padre directamente.

## 1. Reemplaza el bloque de consulta y tokens

Desde:

```csharp
var dispositivos = await firestore
```

hasta el `.ToList();` que construye `tokens`, reemplázalo por:

```csharp
var dispositivos = await firestore
    .CollectionGroup("dispositivos")
    .GetSnapshotAsync();

Console.WriteLine(
    $"Documentos encontrados en dispositivos: " +
    $"{dispositivos.Documents.Count}");

string rutaUsuarios = firestore.Collection("usuarios").Path;

var tokens = dispositivos.Documents
    .Where(doc =>
    {
        var usuarioRef = doc.Reference.Parent.Parent;

        return usuarioRef != null &&
               usuarioRef.Parent.Path == rutaUsuarios;
    })
    .Select(doc =>
    {
        if (doc.TryGetValue<string>("token", out var token))
        {
            return token;
        }

        return string.Empty;
    })
    .Where(token => !string.IsNullOrWhiteSpace(token))
    .Distinct()
    .ToList();

Console.WriteLine(
    $"Tokens válidos encontrados: {tokens.Count}");
```

La consulta `CollectionGroup("dispositivos")` busca documentos en las colecciones con ese nombre, independientemente de su padre. Después nuestro filtro limita los resultados a los dispositivos que cuelgan de `usuarios/{uid}`. [^77_1160]

## 2. Ejecuta y vuelve a publicar `CAIDA`

La consola mostrará dos cantidades:

```text
Documentos encontrados en dispositivos: ...
Tokens válidos encontrados: ...
```

- Si encuentra documentos y tokens, el filtro anterior era el bloqueo.
- Si encuentra cero documentos, abre la app y pulsa el botón que registra las notificaciones. En tu código, ese botón es el que guarda el token en Firestore; conectar los pulsos no lo registra.
- Si encuentra documentos pero cero tokens, revisaremos su ubicación y el campo `token`.

No crees tokens manualmente ni cambies la contraseña MQTT: esa parte no resuelve esta consulta. Si sigue dando cero, pásame únicamente esas dos cantidades, sin copiar los tokens.

<span style="display:none">[^77_1][^77_10][^77_2][^77_3][^77_4][^77_5][^77_6][^77_7][^77_8][^77_9]</span>

<div align="center">⁂</div>

[^77_1]: https://docs.cloud.google.com/firestore/native/docs/using-console

[^77_2]: https://docs.cloud.google.com/go/docs/reference/cloud.google.com/go/firestore/latest

[^77_3]: https://docs.cloud.google.com/firestore/native/docs/standard-index-overview

[^77_4]: https://docs.cloud.google.com/java/docs/reference/google-cloud-firestore/latest/history

[^77_5]: https://cloud.google.com/python/docs/reference/firestore/2.20.2/google.cloud.firestore_v1.query.CollectionGroup

[^77_6]: https://cloud.google.com/python/docs/reference/firestore/2.17.0/google.cloud.firestore_v1.query

[^77_7]: https://cloud.google.com/python/docs/reference/firestore/2.20.2/google.cloud.firestore_v1.base_query.BaseCollectionGroup

[^77_8]: https://docs.cloud.google.com/firestore/native/docs/using-console?authuser=4

[^77_9]: https://cloud.google.com/blog/topics/developers-practitioners/databases-google-cloud-part-4-query-index-crud-and-crush-your-java-app-firestore-apis

[^77_10]: https://cloud.google.com/python/docs/reference/firestore/latest/google.cloud.firestore_v1.query.CollectionGroup?authuser=5


---

# ya quedo broski, porq desde el puente no puedo hacer la conexion a pulsos tambien para que no esten las cosas en la app?

Sí puedes, bro. Y para lo que quieres, tiene sentido: el puente puede recibir también los pulsos y pasarlos a Firebase, para que la app ya no necesite usuario ni contraseña MQTT. Esa es la opción de usar el puente como intermediario; debí planteártela más directamente.

## Así quedaría

```text
ESP32 → EMQX → PuentePulsera
                    │
                    ├── CAIDA → notificaciones FCM
                    │
                    └── BPM → Firestore → apps
```

El puente se suscribiría a los dos topics que ya usamos:

- `pulsera/prueba`: recibe `CAIDA` y envía las notificaciones.
- `pulsera/prueba/pulsos`: recibe el número de BPM y actualiza un documento en Firestore.

La app escucharía ese documento automáticamente. Firestore permite recibir actualizaciones mediante un listener, sin consultar cada cierto número de segundos.[^78_1]

## Qué guardaríamos

Por ejemplo, un documento distinto al de configuración:

```text
pulsera
  └── estado
        ├── bpm: 76
        └── recibidoUtc: fecha del servidor
```

La fecha serviría internamente para detectar datos antiguos; no tendríamos que poner “última lectura” en la pantalla. Seguirías viendo solamente:

```text
76 BPM
```

La ESP32 seguiría decidiendo cuándo publicar. El puente no calcularía promedios ni impondría un intervalo: actualizaría Firestore cuando recibiera una lectura válida.

## Qué saldría de la app

Una vez probado el reemplazo, podríamos quitar de `MainPage.xaml.cs`:

- Las constantes de servidor, usuario y contraseña MQTT.
- El cliente y la conexión MQTT de pulsos.
- El botón “Conectar pulsos”.

La app conservaría Firebase y Bluetooth. Las reglas de Firestore permitirían leer los pulsos a las apps autorizadas, pero no escribirlos; esa escritura la haría el puente con su cuenta de servicio. Las lecturas móviles están sujetas a las reglas de seguridad. [^78_1171]

## Las dos consecuencias importantes

1. El puente tendría que permanecer encendido y conectado. Si cierras la consola o apagas la laptop, dejarían de actualizarse los pulsos en las apps, aunque la ESP32 siguiera publicando. El valor guardado podría seguir visible, por eso conviene detectar cuándo está desactualizado.
2. Cada actualización consume operaciones de Firestore. En Standard, cada escritura cuenta y los listeners generan lecturas por documentos actualizados. Si la ESP32 publica muy seguido, habrá que revisar el consumo; no debemos asumir que será gratis con cualquier frecuencia. [^78_1169]

Para tu prototipo de una pulsera, podemos hacerlo así sin Secret Manager en los celulares ni un servicio adicional: dejamos MQTT solo en la ESP32 y el puente, y Firebase como conexión de las apps. La contraseña del puente puede seguir introduciéndose al arrancar, como dijiste que te parecía bien.

<span style="display:none">[^78_10][^78_11][^78_12][^78_13][^78_14][^78_15][^78_2][^78_3][^78_4][^78_5][^78_6][^78_7][^78_8][^78_9]</span>

<div align="center">⁂</div>

[^78_1]: https://firebase.google.com/docs/firestore/query-data/listen

[^78_2]: https://firebase.google.com/docs/firestore/pricing

[^78_3]: https://firebase.google.com/docs/firestore/enterprise/pricing

[^78_4]: https://firebase.google.com/docs/firestore/real-time_queries_at_scale

[^78_5]: https://firebase.google.com/docs/firestore/billing-example

[^78_6]: https://firebase.google.com/docs/projects/billing/firebase-pricing-plans

[^78_7]: https://firebase.google.com/docs/database/android/read-and-write

[^78_8]: https://firebase.google.com/docs/database/web/read-and-write

[^78_9]: https://firebase.google.com/docs/database

[^78_10]: https://firebase.google.com/docs/database/ios/read-and-write

[^78_11]: https://firebase.google.com/docs/firestore/rtdb-vs-firestore

[^78_12]: https://firebase.google.com/docs/firestore/monitor-usage

[^78_13]: https://firebase.google.com/docs/firestore

[^78_14]: https://firebase.google.com/docs/firestore/quotas

[^78_15]: https://firebase.google.com/docs/firestore/quickstart


---

# pero q otra cosa podria hacer? para q sea gratis

Sí, bro: para sacar MQTT de la app sin pagar por cada lectura de pulsos, te propongo usar **Realtime Database** solo para los BPM y dejar Firestore como ya está para los tokens.

Puede funcionar gratis dentro del plan Spark; no es uso ilimitado. Firebase incluye en Realtime Database **100 conexiones simultáneas**, 1 GB almacenado y 10 GB de descargas al mes. [^79_1180]

## Cómo quedaría tu proyecto

```text
ESP32 → EMQX → PuentePulsera
                    │
                    ├── CAIDA → FCM → notificaciones
                    │
                    └── BPM → Realtime Database → app
```

No tiraríamos lo que ya funciona:


| Componente | Qué haría |
| :-- | :-- |
| Firestore | Seguir guardando los tokens y la configuración del puente. |
| PuentePulsera | Recibir caídas y pulsos desde EMQX. |
| Realtime Database | Mantener el valor actual de BPM. |
| App | Mostrar los BPM desde Firebase, sin conectarse a MQTT. |

## Por qué esta opción puede convenirte

En Realtime Database, el consumo se mide principalmente por almacenamiento y tráfico descargado, en lugar de cobrar por cada operación de lectura o escritura como en Firestore. El tráfico también incluye la sobrecarga de conexión y cifrado, no solamente el número que mandas. [^79_1181]

Para evitar que crezca el almacenamiento, sobrescribiríamos un único dato:

```json
{
  "pulsera": {
    "estado": {
      "bpm": 76
    }
  }
}
```

Cuando llegue `80`, reemplazamos `76`; no creamos un historial. Eso reduce almacenamiento, aunque cada actualización enviada a los celulares sigue consumiendo tráfico.

La ESP32 seguiría decidiendo cuándo publicar: no tendríamos que calcular promedios ni cambiar tus intervalos.

## Qué significa “gratis” aquí

En el plan **Spark**, Realtime Database no genera cargos por consumo: tiene límites de uso. Si después cambias a Blaze, el consumo que supere las cuotas gratuitas sí puede cobrarse. Por eso primero debemos comprobar qué plan tiene tu proyecto. [^79_1181]

Esto no elimina los límites de EMQX ni el costo de mantener encendida tu laptop. El puente seguiría siendo necesario: al cerrarlo, los pulsos dejarían de actualizarse.

## Mi recomendación para tu demo

Usaría el puente que ya tienes + Realtime Database para pulsos, sin Cloud Functions ni Secret Manager por ahora. Así evitamos meter las credenciales MQTT en la app y conservamos tu sistema de alertas.

Antes de modificar código, revisa en Firebase si tu proyecto dice Spark o Blaze y dime cuál aparece. Eso nos permite elegir la configuración sin prometerte gratuidad que tu plan no garantice.

<span style="display:none">[^79_1][^79_10][^79_11][^79_12][^79_13][^79_14][^79_15][^79_2][^79_3][^79_4][^79_5][^79_6][^79_7][^79_8][^79_9]</span>

<div align="center">⁂</div>

[^79_1]: https://firebase.google.com/pricing

[^79_2]: https://firebase.google.com/docs/database/usage/billing

[^79_3]: https://firebase.google.com/docs/database/usage/limits

[^79_4]: https://firebase.google.com/support/faq?hl=ja

[^79_5]: https://firebase.google.com/docs/app-hosting/costs

[^79_6]: https://firebase.google.com/docs/auth/limits

[^79_7]: https://firebase.google.com/products/functions

[^79_8]: https://firebase.google.com/

[^79_9]: https://firebase.google.com/docs/database/usage/billing?authuser=31\&hl=es

[^79_10]: https://firebase.google.com/docs/functions/quotas

[^79_11]: https://firebase.google.com/docs/firestore/quotas

[^79_12]: https://firebase.google.com/docs/projects/billing/firebase-pricing-plans

[^79_13]: https://firebase.google.com/docs/firestore/pricing

[^79_14]: https://firebase.google.com/docs/firestore/enterprise/pricing

[^79_15]: https://firebase.google.com/docs/firestore/billing-example


---

# spark

Perfecto, bro. Con **Spark** podemos usar Realtime Database para los pulsos sin cambiarte a un plan de pago. Incluye 1 GB de almacenamiento y 10 GB mensuales de descargas; no te cobra automáticamente por exceder la cuota, pero el servicio puede quedar limitado o suspendido hasta que se restablezca. [^80_1189][^80_1193]

Vamos paso a paso, sin tocar todavía el puente ni la app que ya funcionan.

## 1. Crea Realtime Database

En la consola de Firebase:

1. Abre tu proyecto `alertapulserapro`.
2. En el menú lateral, entra en **Compilación → Realtime Database**.
3. Pulsa “Crear base de datos”.
4. Selecciona la ubicación y continúa.
5. Elige “Iniciar en modo bloqueado”.
6. Termina la creación.

No selecciones el modo de prueba ni pongas reglas públicas para hacer que funcione.

## 2. Conserva Firestore

No borres ni muevas lo que ya tienes. La distribución será:

```text
Firestore
  ├── configuración del puente
  └── tokens de notificaciones

Realtime Database
  └── pulsos de la pulsera
```

Primero añadiremos al puente la escritura de pulsos. Después adaptaremos la app para leerlos y, cuando comprobemos que funciona, quitaremos su conexión MQTT.

## 3. Copia la URL de la base

Cuando se cree, arriba de la pestaña “Datos” aparecerá una dirección parecida a:

```text
https://NOMBRE-DE-TU-BASE-default-rtdb.firebaseio.com/
```

O puede terminar en:

```text
.REGION.firebasedatabase.app/
```

Pásame únicamente esa URL para preparar el código del puente. No es una contraseña; no envíes el JSON de la cuenta de servicio, claves ni tokens.

<span style="display:none">[^80_1][^80_10][^80_2][^80_3][^80_4][^80_5][^80_6][^80_7][^80_8][^80_9]</span>

<div align="center">⁂</div>

[^80_1]: https://firebase.google.com/docs/database/usage/billing?authuser=2\&hl=es-419

[^80_2]: https://firebase.google.com/docs/data-connect/pricing?authuser=01

[^80_3]: https://firebase.google.com/docs/projects/billing/avoid-surprise-bills

[^80_4]: https://firebase.google.com/docs/projects/billing/firebase-pricing-plans.md.txt

[^80_5]: https://firebase.google.com/docs/projects/billing/firebase-pricing-plans?authuser=68

[^80_6]: https://firebase.google.com/docs/database/usage/billing

[^80_7]: https://firebase.google.com/pricing

[^80_8]: https://firebase.google.com/docs/projects/billing/firebase-pricing-plans

[^80_9]: https://firebase.google.com/docs/database/usage/billing?authuser=31\&hl=es

[^80_10]: https://firebase.google.com/docs/firestore/pricing


---

# [https://console.firebase.google.com/project/alertapulserapro/database/alertapulserapro-default-rtdb/data/~2F](https://console.firebase.google.com/project/alertapulserapro/database/alertapulserapro-default-rtdb/data/~2F)

Bro, ese enlace es de la consola de administración de Firebase, no la URL que necesita el puente. No pude ver su contenido desde aquí porque requiere tu sesión.

## Dónde encontrar la URL correcta

1. Abre ese mismo enlace.
2. En **Realtime Database**, entra en la pestaña “Datos”.
3. Justo encima del árbol de datos, busca una dirección que termine en:

```text
.firebaseio.com
```

o:

```text
.firebasedatabase.app
```

4. Copia esa dirección completa.

No debe comenzar con `https://console.firebase.google.com/`.

Pásame esa URL; si no la encuentras, manda una captura de la parte superior de la pestaña “Datos”, sin mostrar claves ni tokens.

---

# [https://alertapulserapro-default-rtdb.firebaseio.com/](https://alertapulserapro-default-rtdb.firebaseio.com/)

Esa sí es la URL, bro. Ahora vamos a hacer que el puente reciba los pulsos y los guarde ahí, sin tocar el envío de alertas que ya funciona.

Usaremos la cuenta de servicio que ya tiene tu consola para autenticar las escrituras. Firebase permite hacerlo mediante su API REST con un token de acceso; no necesitamos abrir la base al público ni instalar otro paquete.[^82_1]

## 1. Agrega estos `using`

Arriba de `Program.cs`, junto a los que ya tienes:

```csharp
using System.Net.Http;
using System.Net.Http.Headers;
using System.Text.Json;
```


## 2. Prepara la conexión a Realtime Database

Busca esta línea:

```csharp
var firestore = FirestoreDb.Create("alertapulserapro");
```

Justo debajo agrega:

```csharp
const string urlEstadoPulsera =
    "https://alertapulserapro-default-rtdb.firebaseio.com/" +
    "pulsera/estado.json";

var credencialRealtime = GoogleCredential
    .GetApplicationDefault()
    .CreateScoped(
        "https://www.googleapis.com/auth/firebase.database",
        "https://www.googleapis.com/auth/userinfo.email");

using var httpRealtime = new HttpClient
{
    Timeout = TimeSpan.FromSeconds(15)
};
```

Los dos ámbitos de autorización del código son los que Firebase requiere para este acceso mediante cuenta de servicio.[^82_1]

## 3. Agrega el procesamiento de pulsos

Dentro de:

```csharp
mqtt.ApplicationMessageReceivedAsync += async e =>
```

Busca este bloque, si todavía lo tienes:

```csharp
if (e.ApplicationMessage.Topic != "pulsera/prueba")
{
    return;
}
```

Y reemplázalo por:

```csharp
string tema = e.ApplicationMessage.Topic;

if (tema != "pulsera/prueba" &&
    tema != "pulsera/prueba/pulsos")
{
    return;
}
```

Después busca el bloque que ignora mensajes retenidos:

```csharp
if (e.ApplicationMessage.Retain)
{
    Console.WriteLine(
        "Mensaje retenido ignorado.");

    return;
}
```

Inmediatamente después de ese bloque, y antes de comprobar si el contenido es `CAIDA`, agrega:

```csharp
// Los pulsos se procesan por separado de las alertas.
if (tema == "pulsera/prueba/pulsos")
{
    if (!int.TryParse(contenido.Trim(), out int bpm) ||
        bpm <= 0)
    {
        Console.WriteLine(
            "Pulsos ignorados: se esperaba un entero positivo.");

        return;
    }

    string tokenAcceso = await credencialRealtime
        .UnderlyingCredential
        .GetAccessTokenForRequestAsync();

    var estado = new
    {
        bpm,
        recibidoUtc = new Dictionary<string, string>
        {
            [" .sv".Trim()] = "timestamp"
        }
    };

    string json = JsonSerializer.Serialize(estado);

    using var solicitud = new HttpRequestMessage(
        HttpMethod.Put,
        urlEstadoPulsera);

    solicitud.Headers.Authorization =
        new AuthenticationHeaderValue(
            "Bearer",
            tokenAcceso);

    solicitud.Content = new StringContent(
        json,
        Encoding.UTF8,
        "application/json");

    using var respuesta = await httpRealtime
        .SendAsync(solicitud);

    if (!respuesta.IsSuccessStatusCode)
    {
        Console.WriteLine(
            "No se pudieron guardar los pulsos. " +
            $"HTTP {(int)respuesta.StatusCode} " +
            $"({respuesta.ReasonPhrase}).");

        return;
    }

    Console.WriteLine(
        $"Pulsos guardados en Realtime Database: {bpm} BPM");

    // No continuar hacia el procesamiento de CAIDA.
    return;
}
```

Para el diccionario, puedes dejar la clave directamente como `".sv"`; el bloque correspondiente queda así de simple:

```csharp
recibidoUtc = new Dictionary<string, string>
{
    [".sv"] = "timestamp"
}
```

Si tu proyecto no tiene los `using` implícitos habilitados, agrega también arriba:

```csharp
using System.Collections.Generic;
```


## 4. Suscribe el puente a los dos topics

Busca:

```csharp
var suscripcion = factory
    .CreateSubscribeOptionsBuilder()
    .WithTopicFilter(f => f.WithTopic("pulsera/prueba"))
    .Build();
```

Reemplázalo por:

```csharp
var suscripcion = factory
    .CreateSubscribeOptionsBuilder()
    .WithTopicFilter(f =>
        f.WithTopic("pulsera/prueba"))
    .WithTopicFilter(f =>
        f.WithTopic("pulsera/prueba/pulsos"))
    .Build();
```

También puedes cambiar el mensaje de espera por:

```csharp
Console.WriteLine(
    "Esperando CAIDA en pulsera/prueba.");

Console.WriteLine(
    "Esperando BPM en pulsera/prueba/pulsos.");
```


## 5. Prueba antes de modificar la app

1. Ejecuta el puente e introduce la contraseña MQTT.
2. Publica en `pulsera/prueba/pulsos` este texto, sin comillas y sin retain:

```text
76
```

3. En la consola debería aparecer:

```text
Pulsos guardados en Realtime Database: 76 BPM
```

4. En Firebase → Realtime Database → Datos, debería aparecer:

```text
pulsera
  └── estado
        ├── bpm: 76
        └── recibidoUtc: ...
```


Cada lectura reemplazará el estado anterior; no estamos creando un historial ni calculando promedios.

Mantén las reglas en modo bloqueado por ahora. La cuenta de servicio, si tiene los permisos adecuados, puede escribir sin hacer pública la base; después configuraremos la lectura autorizada desde la app.[^82_1]

Todavía no quites MQTT de la app: primero comprobamos este tramo y luego cambiamos de dónde recibe los BPM.

<span style="display:none">[^82_10][^82_2][^82_3][^82_4][^82_5][^82_6][^82_7][^82_8][^82_9]</span>

<div align="center">⁂</div>

[^82_1]: https://firebase.google.com/docs/database/rest/auth

[^82_2]: https://firebase.google.com/docs/auth/flutter/start

[^82_3]: https://firebase.google.com/docs/auth/ios/google-signin

[^82_4]: https://firebase.google.com/docs/auth/ios/yahoo-oauth

[^82_5]: https://firebase.google.com/docs/auth/ios/apple

[^82_6]: https://firebase.google.com/docs/database/rest/auth?authuser=108\&hl=ko

[^82_7]: https://firebase.google.com/docs/database/rest/auth?authuser=002\&hl=es

[^82_8]: https://firebase.google.com/docs/auth

[^82_9]: https://firebase.google.com/docs/auth/admin/errors

[^82_10]: https://firebase.google.com/docs/firestore/query-data/get-data


---

# shi ya lo hizo

Excelente, bro. Entonces ya comprobamos este tramo:

```text
ESP32 o prueba MQTT → EMQX → Puente → Realtime Database
```

Ahora falta que la app lea `pulsera/estado/bpm` y lo muestre en `PulsosLabel`, en lugar de recibirlo directamente por MQTT.

## Siguiente paso: cambiar la app sin romper lo demás

Por ahora no borres nada. Primero vamos a sustituir la recepción de pulsos y comprobar que funciona; después quitamos la conexión MQTT de la app.

Pásame estos archivos como los tienes actualmente:

1. `MainPage.xaml.cs`
2. `MainPage.xaml`
3. El `.csproj` de `AlertaPulsera`, para revisar los paquetes instalados.

Antes de pegarlos, reemplaza cualquier contraseña, token o credencial por `OCULTO`. Mantén los nombres de las variables para poder devolverte el código adaptado.

Con eso modificamos únicamente los pulsos y conservamos Bluetooth, el registro de notificaciones y lo que ya funciona.

---

# public partial class MainPage : ContentPage

{
private IAdapter? \_adapter;
private readonly HashSet\<Guid> \_dispositivosVistos = new();
private bool \_buscando;
private bool \_paginaVisible;
private IMqttClient? \_clientePulsos;
private bool \_conectandoPulsos;

```
private const string TopicPulsos = "pulsera/prueba/pulsos";

// Completa estos valores localmente.
// Servidor: solo el host, sin mqtts:// ni :8883.
private const string ServidorPulsos = "i1f747d1.ala.us-east-1.emqxsl.com";
private const string UsuarioPulsos = "puente-pulsera";
private const string ClavePulsos = "DiegoGare03";

public MainPage()
{
    InitializeComponent();
}

protected override void OnAppearing()
{
    base.OnAppearing();
    _paginaVisible = true;

    if (!_conectandoPulsos &&
        _clientePulsos?.IsConnected != true)
    {
        OnConectarPulsosClicked(this, EventArgs.Empty);
    }
}

protected override async void OnDisappearing()
{
    _paginaVisible = false;
    base.OnDisappearing();

    try
    {
        if (_adapter?.IsScanning == true)
        {
            await _adapter.StopScanningForDevicesAsync();
        }
    }
    catch (Exception ex)
    {
        System.Diagnostics.Debug.WriteLine(ex);
    }
}

private async void OnBuscarBluetoothClicked(
    object sender,
    EventArgs e)
{
    if (_buscando)
        return;

    _buscando = true;
    BuscarBluetoothButton.IsEnabled = false;

    try
    {
        EstadoBluetoothLabel.Text = "Solicitando permisos...";

        var permiso = await Permissions
            .RequestAsync<PermisosBluetooth>();

        if (permiso != PermissionStatus.Granted)
        {
            EstadoBluetoothLabel.Text =
                "Debes permitir el acceso a dispositivos cercanos " +
                "o ubicación, según tu versión de Android.";
            return;
        }

        var bluetooth = CrossBluetoothLE.Current;

        if (bluetooth.State != BluetoothState.On)
        {
            EstadoBluetoothLabel.Text =
                "Bluetooth no disponible o apagado. " +
                "Actívalo en los ajustes del celular.";
            return;
        }

        _adapter = bluetooth.Adapter;
        _adapter.ScanTimeout = 10000;

        _dispositivosVistos.Clear();
        DispositivosLayout.Children.Clear();

        _adapter.DeviceDiscovered += OnDispositivoEncontrado;

        EstadoBluetoothLabel.Text =
            "Buscando dispositivos BLE durante 10 segundos...";

        await _adapter.StartScanningForDevicesAsync();

        if (_paginaVisible)
        {
            EstadoBluetoothLabel.Text =
                $"Búsqueda terminada: " +
                $"{_dispositivosVistos.Count} dispositivos encontrados.";
        }
    }
    catch (Exception ex)
    {
        EstadoBluetoothLabel.Text = "No se pudo buscar Bluetooth.";

        await DisplayAlert(
            "Bluetooth",
            ex.Message,
            "Aceptar");
    }
    finally
    {
        if (_adapter != null)
        {
            _adapter.DeviceDiscovered -= OnDispositivoEncontrado;
        }

        _buscando = false;
        BuscarBluetoothButton.IsEnabled = true;
    }
}

private void OnDispositivoEncontrado(
    object? sender,
    DeviceEventArgs e)
{
    var dispositivo = e.Device;

    MainThread.BeginInvokeOnMainThread(() =>
    {
        if (!_paginaVisible || !_buscando)
            return;

        if (!_dispositivosVistos.Add(dispositivo.Id))
            return;

        string nombre = string.IsNullOrWhiteSpace(dispositivo.Name)
            ? "Dispositivo sin nombre"
            : dispositivo.Name;

        DispositivosLayout.Children.Add(new Label
        {
            Text = $"{nombre}\n" +
                   $"ID: {dispositivo.Id}\n" +
                   $"Señal: {dispositivo.Rssi} dBm",
            FontSize = 14,
            Margin = new Thickness(0, 5)
        });
    });
}

private async void OnActivarClicked(object sender, EventArgs e)
{
    if (sender is Button boton)
        boton.IsEnabled = false;

    try
    {
        EstadoLabel.Text = "Configurando...";
```

\#if ANDROID
if (OperatingSystem.IsAndroidVersionAtLeast(33))
{
var permiso = await Permissions
.RequestAsync\<Permissions.PostNotifications>();

```
            if (permiso != PermissionStatus.Granted)
            {
                EstadoLabel.Text =
                    "Debes permitir las notificaciones.";
                return;
            }
        }
```

\#endif

```
        EstadoLabel.Text = "Iniciando sesión...";

        var auth = CrossFirebaseAuth.Current;
        var usuario = auth.CurrentUser;

        if (usuario == null)
        {
            usuario = await auth.SignInAnonymouslyAsync();
        }

        if (usuario == null)
        {
            throw new InvalidOperationException(
                "No se pudo iniciar la sesión.");
        }

        EstadoLabel.Text = "Obteniendo token...";

        var token = await CrossFirebaseCloudMessaging
            .Current.GetTokenAsync();

        if (string.IsNullOrWhiteSpace(token))
        {
            throw new InvalidOperationException(
                "Firebase no devolvió un token.");
        }

        TokenEditor.Text = token;

        const string claveInstalacion = "pulsera_instalacion_id";

        var instalacionId = Preferences.Default.Get(
            claveInstalacion,
            string.Empty);

        if (string.IsNullOrWhiteSpace(instalacionId))
        {
            instalacionId = Guid.NewGuid().ToString("N");

            Preferences.Default.Set(
                claveInstalacion,
                instalacionId);
        }

        EstadoLabel.Text = "Guardando token en Firebase...";

        var datos = new Dictionary<object, object>
```

{
{ "token", token },
{ "plataforma", "android" },
{ "actualizadoUtc", DateTime.UtcNow.ToString("O") }
};

```
        var ruta =
            $"usuarios/{usuario.Uid}/dispositivos/{instalacionId}";

        await CrossFirebaseFirestore.Current
            .GetDocument(ruta)
            .SetDataAsync(datos);

        EstadoLabel.Text = "Token registrado correctamente.";

        await DisplayAlert(
            "Registro ejecutado",
            $"Revisa esta ruta en Firestore:\n\n{ruta}",
            "Aceptar");
    }
    catch (Exception ex)
    {
        EstadoLabel.Text = "No se pudo registrar el token.";

        await DisplayAlert(
            "Configuración",
            ex.Message,
            "Aceptar");
    }
    finally
    {
        if (sender is Button botonFinal)
            botonFinal.IsEnabled = true;
    }
}

private async void OnCopiarClicked(object sender, EventArgs e)
{
    if (!string.IsNullOrWhiteSpace(TokenEditor.Text))
    {
        await Clipboard.Default.SetTextAsync(TokenEditor.Text);

        await DisplayAlert(
            "Listo",
            "Token copiado.",
            "Aceptar");
    }
}

private async void OnConectarPulsosClicked(
object sender,
EventArgs e)
{
    if (_conectandoPulsos)
        return;

    _conectandoPulsos = true;
    ConectarPulsosButton.IsEnabled = false;

    try
    {
        EstadoPulsosLabel.Text = "Conectando a EMQX...";

        if (_clientePulsos == null)
        {
            _clientePulsos = new MqttFactory().CreateMqttClient();

            _clientePulsos.ApplicationMessageReceivedAsync += args =>
            {
                if (args.ApplicationMessage.Topic != TopicPulsos)
                    return Task.CompletedTask;

                var texto = args.ApplicationMessage
                    .ConvertPayloadToString()
                    .Trim();

                var valido = double.TryParse(
                    texto,
                    NumberStyles.Float,
                    CultureInfo.InvariantCulture,
                    out var bpm);

                MainThread.BeginInvokeOnMainThread(() =>
                {
                    if (!_paginaVisible)
                        return;

                    if (!valido || !double.IsFinite(bpm) || bpm <= 0)
                    {
                        PulsosLabel.Text = "-- BPM";
                        EstadoPulsosLabel.Text =
                            "Lectura no válida. Esperando un valor de BPM.";
                        return;
                    }

                    PulsosLabel.Text = $"{bpm:0.#} BPM";
                    EstadoPulsosLabel.Text = string.Empty;
                });

                return Task.CompletedTask;
            };

            _clientePulsos.DisconnectedAsync += args =>
            {
                MainThread.BeginInvokeOnMainThread(() =>
                {
                    PulsosLabel.Text = "-- BPM";
                    EstadoPulsosLabel.Text =
                        "Sin conexión con el servidor de pulsos.";
                });

                return Task.CompletedTask;
            };
        }

        using var tiempoLimite =
            new CancellationTokenSource(TimeSpan.FromSeconds(20));

        if (!_clientePulsos.IsConnected)
        {
            var opciones = new MqttClientOptionsBuilder()
                .WithClientId(
                    "AlertaPulsera-" + Guid.NewGuid().ToString("N"))
                .WithTcpServer(ServidorPulsos, 8883)
                .WithCredentials(UsuarioPulsos, ClavePulsos)
                .WithTlsOptions(tls =>
                {
                    tls.UseTls();

                    tls.WithSslProtocols(
                        System.Security.Authentication.SslProtocols.Tls12);

                    // Prueba temporal por el error RevocationStatusUnknown.
                    tls.WithRevocationMode(
                        System.Security.Cryptography.X509Certificates
                            .X509RevocationMode.NoCheck);
                })
                .WithCleanSession()
                .Build();

            System.Diagnostics.Debug.WriteLine(
                "[PULSOS CONFIG V2] Conectando con NoCheck");

            await _clientePulsos.ConnectAsync(
                opciones,
                tiempoLimite.Token);
        }

        EstadoPulsosLabel.Text = "Suscribiendo a pulsos...";

        var suscripcion = new MqttFactory()
            .CreateSubscribeOptionsBuilder()
            .WithTopicFilter(f => f.WithTopic(TopicPulsos))
            .Build();

        var resultado = await _clientePulsos.SubscribeAsync(
            suscripcion,
            tiempoLimite.Token);

        foreach (var item in resultado.Items)
        {
            if ((int)item.ResultCode >= 128)
            {
                throw new InvalidOperationException(
                    "EMQX rechazó la suscripción: " +
                    item.ResultCode);
            }
        }

        EstadoPulsosLabel.Text =
            "Conectado. Esperando lectura de la pulsera...";
    }
    catch (OperationCanceledException)
    {
        EstadoPulsosLabel.Text =
            "La conexión tardó demasiado. Intenta de nuevo.";
    }
    catch (Exception ex)
    {
        EstadoPulsosLabel.Text =
            "No se pudo conectar la recepción de pulsos.";

        var detalle = new System.Text.StringBuilder();

        for (Exception? error = ex;
             error != null;
             error = error.InnerException)
        {
            detalle.AppendLine(error.GetType().Name);
            detalle.AppendLine(error.Message);
            detalle.AppendLine();
        }

        System.Diagnostics.Debug.WriteLine(ex.ToString());

        await DisplayAlert(
            "Detalle de conexión",
            detalle.ToString(),
            "Aceptar");
    }
    finally
    {
        _conectandoPulsos = false;
        ConectarPulsosButton.IsEnabled = true;
    }
}
```

}

Ya tengo tu `MainPage.xaml.cs`, bro. Aquí está la conexión MQTT que vamos a reemplazar; el código de Bluetooth y el registro de notificaciones los conservamos.

Antes de devolverte el archivo modificado, pásame los otros dos para hacerlo compatible con tu proyecto y no adivinar nombres ni paquetes:

1. `MainPage.xaml`: para revisar `PulsosLabel`, `EstadoPulsosLabel` y el botón `ConectarPulsosButton`.
2. `AlertaPulsera.csproj`: para ver qué paquetes Firebase tienes instalados y sus versiones.

Con eso dejaremos la recepción de pulsos automática al abrir la pantalla, sin botón de conexión ni credenciales MQTT dentro de la app.

Importante: pegaste la contraseña MQTT en `ClavePulsos`. No la voy a repetir. Cámbiala en EMQX y actualízala donde la uses —puente y ESP32, si comparten ese usuario—; quitarla del código no invalida la contraseña que ya quedó expuesta.

---

# \<ContentPage

xmlns="http://schemas.microsoft.com/dotnet/2021/maui"
xmlns:x="http://schemas.microsoft.com/winfx/2009/xaml"
x:Class="AlertaPulsera.MainPage"
Title="Alerta Pulsera">

```
<ScrollView>
    <VerticalStackLayout Padding="25" Spacing="15">

        <Label
            Text="Alerta Pulsera"
            FontSize="30"
            HorizontalOptions="Center" />

        <Label
            Text="Frecuencia cardíaca"
            FontSize="22" />

        <Label
            x:Name="PulsosLabel"
            Text="-- BPM"
            FontSize="40"
            HorizontalOptions="Center" />

        <Label
            x:Name="EstadoPulsosLabel"
            Text="Esperando lectura de la pulsera..."
            HorizontalTextAlignment="Center" />
        <Button
            x:Name="ConectarPulsosButton"
            Text="Conectar pulsos"
            Clicked="OnConectarPulsosClicked" 
            IsVisible="False"/>

        <Label
            Text="Buscar pulsera"
            FontSize="22" />

        <Button
            x:Name="BuscarBluetoothButton"
            Text="Buscar dispositivos Bluetooth"
            Clicked="OnBuscarBluetoothClicked" />

        <Label
            x:Name="EstadoBluetoothLabel"
            Text="Sin búsqueda iniciada." />

        <VerticalStackLayout
            x:Name="DispositivosLayout"
            Spacing="10" />

        <BoxView HeightRequest="1" Color="Gray" />

        <Label
            Text="Wi-Fi de la pulsera"
            FontSize="22" />

        <Entry
            x:Name="WifiNombreEntry"
            Placeholder="Nombre de la red Wi-Fi"
            MaxLength="32" />

        <Entry
            x:Name="WifiClaveEntry"
            Placeholder="Contraseña del Wi-Fi"
            IsPassword="True" />

        <Button
            Text="Enviar configuración Wi-Fi"
            IsEnabled="False" />

        <Label
            Text="Envío pendiente de integrar con el programa de la ESP32."
            FontSize="14" />

        <BoxView HeightRequest="1" Color="Gray" />

        <Label
            Text="Notificaciones"
            FontSize="22" />

        <Label
            x:Name="EstadoLabel"
            Text="Configura las notificaciones para recibir alertas."
            FontSize="18" />

        <Button
            Text="Activar notificaciones - PRUEBA 2"
            Clicked="OnActivarClicked" />

        <Label Text="Token de este dispositivo:" />

        <Editor
            x:Name="TokenEditor"
            IsReadOnly="True"
            HeightRequest="180"
            Placeholder="Aquí aparecerá el token de Firebase" />

        <Button
            Text="Copiar token"
            Clicked="OnCopiarClicked" />

    </VerticalStackLayout>
</ScrollView>
```

\</ContentPage>

Listo, bro, ya tengo también `MainPage.xaml`. Los controles de pulsos coinciden con tu código:

- `PulsosLabel`
- `EstadoPulsosLabel`
- `ConectarPulsosButton`, que ya está oculto.

No cambies nada todavía; quitaremos ese botón junto con su código MQTT cuando preparemos el reemplazo.

Solo falta el contenido de `AlertaPulsera.csproj`. En Visual Studio, haz clic derecho sobre el proyecto **AlertaPulsera** → “Editar archivo de proyecto” y pégalo aquí.

Con eso reviso las versiones instaladas y te preparo el cambio sin tocar Bluetooth, Wi-Fi ni las notificaciones que ya funcionan.

---

# \<Project Sdk="Microsoft.NET.Sdk">

\<PropertyGroup>

```
\<TargetFrameworks>net9.0-android\</TargetFrameworks>
```

\<!-- Uncomment to also build the tizen app. You will need to install tizen by following this: [https://github.com/Samsung/Tizen.NET](https://github.com/Samsung/Tizen.NET) -->

```
\<!-- \<TargetFrameworks>$(TargetFrameworks);net9.0-tizen\</TargetFrameworks> -->
```

\<!-- Note for MacCatalyst:
The default runtime is maccatalyst-x64, except in Release config, in which case the default is maccatalyst-x64;maccatalyst-arm64.

```
When specifying both architectures, use the plural \<RuntimeIdentifiers> instead of the singular \<RuntimeIdentifier>.
```

The Mac App Store will NOT accept apps with ONLY maccatalyst-arm64 indicated;
either BOTH runtimes must be indicated or ONLY macatalyst-x64. -->

```
\<!-- For example: \<RuntimeIdentifiers>maccatalyst-x64;maccatalyst-arm64\</RuntimeIdentifiers> -->
```

\<OutputType>Exe\</OutputType>
\<RootNamespace>AlertaPulsera\</RootNamespace>
\<UseMaui>true\</UseMaui>
\<SingleProject>true\</SingleProject>
\<ImplicitUsings>enable\</ImplicitUsings>
\<Nullable>enable\</Nullable>

\<!-- Display name -->
\<ApplicationTitle>AlertaPulsera\</ApplicationTitle>

\<!-- App Identifier -->
\<ApplicationId>com.companyname.alertapulsera\</ApplicationId>

\<!-- Versions -->
\<ApplicationDisplayVersion>1.0\</ApplicationDisplayVersion>
\<ApplicationVersion>1\</ApplicationVersion>

\<!-- To develop, package, and publish an app to the Microsoft Store, see: [https://aka.ms/MauiTemplateUnpackaged](https://aka.ms/MauiTemplateUnpackaged) -->
\<WindowsPackageType>None\</WindowsPackageType>

\<SupportedOSPlatformVersion Condition="$([MSBuild]::GetTargetPlatformIdentifier('$(TargetFramework)')) == 'ios'">15.0\</SupportedOSPlatformVersion>
\<SupportedOSPlatformVersion Condition="$([MSBuild]::GetTargetPlatformIdentifier('$(TargetFramework)')) == 'maccatalyst'">15.0\</SupportedOSPlatformVersion>
\<SupportedOSPlatformVersion Condition="$([MSBuild]::GetTargetPlatformIdentifier('$(TargetFramework)')) == 'android'">23.0\</SupportedOSPlatformVersion>
\<SupportedOSPlatformVersion Condition="$([MSBuild]::GetTargetPlatformIdentifier('$(TargetFramework)')) == 'windows'">10.0.17763.0\</SupportedOSPlatformVersion>
\<TargetPlatformMinVersion Condition="$([MSBuild]::GetTargetPlatformIdentifier('$(TargetFramework)')) == 'windows'">10.0.17763.0\</TargetPlatformMinVersion>
\<SupportedOSPlatformVersion Condition="$([MSBuild]::GetTargetPlatformIdentifier('$(TargetFramework)')) == 'tizen'">6.5\</SupportedOSPlatformVersion>
\</PropertyGroup>

\<PropertyGroup Condition="'$(Configuration)|$(TargetFramework)|$(Platform)'=='Release|net9.0-android|AnyCPU'">
\<AndroidPackageFormat>apk\</AndroidPackageFormat>
\</PropertyGroup>

\<ItemGroup>
\<!-- App Icon -->
\<MauiIcon Include="Resources\\AppIcon\\appicon.svg" ForegroundFile="Resources\\AppIcon\\appiconfg.svg" Color="#512BD4" />

\<!-- Splash Screen -->
\<MauiSplashScreen Include="Resources\\Splash\\splash.svg" Color="#512BD4" BaseSize="128,128" />

\<!-- Images -->
\<MauiImage Include="Resources\\Images\*" />
\<MauiImage Update="Resources\\Images\\dotnet_bot.png" Resize="True" BaseSize="300,185" />

\<!-- Custom Fonts -->
\<MauiFont Include="Resources\\Fonts\*" />

\<!-- Raw Assets (also remove the "Resources\\Raw" prefix) -->
\<MauiAsset Include="Resources\\Raw\*\*" LogicalName="%(RecursiveDir)%(Filename)%(Extension)" />
\</ItemGroup>

\<ItemGroup>
\<PackageReference Include="Microsoft.Maui.Controls" Version="$(MauiVersion)" />
\<PackageReference Include="Microsoft.Extensions.Logging.Debug" Version="9.0.8" />
\</ItemGroup>
\<ItemGroup>
\<GoogleServicesJson Include="google-services.json" />

\<PackageReference Include="Plugin.BLE"
Version="3.2.1" />

\<PackageReference Include="Plugin.Firebase.CloudMessaging"
Version="4.0.0" />

\<PackageReference Include="Plugin.Firebase.Auth"
Version="4.0.0" />

\<PackageReference Include="Plugin.Firebase.Firestore"
Version="4.0.0" />

\<PackageReference Include="MQTTnet" Version="4.3.7.1207" />
\</ItemGroup>

\</Project>

Listo, bro. Con tus archivos podemos hacer el cambio sin agregar paquetes: vamos a escuchar Realtime Database mediante una conexión HTTP de eventos, no consultando cada ciertos segundos. Firebase admite esta forma de recibir cambios en tiempo real y autenticar la conexión con el usuario de la app. [^86_1212]

Conservaremos Bluetooth y el registro de notificaciones tal como los tienes.

## 1. Configura las reglas de Realtime Database

En Firebase → Realtime Database → Reglas, usa esto si todavía tienes únicamente las reglas bloqueadas iniciales:

```json
{
  "rules": {
    ".read": false,
    ".write": false,
    "pulsera": {
      "estado": {
        ".read": "auth != null"
      }
    }
  }
}
```

Pulsa “Publicar”.

Esto permitirá leer el estado a usuarios autenticados, incluidos los anónimos de tu app. No permite que la app escriba los pulsos.

Para esta demo, cualquier usuario autenticado en tu proyecto podrá leer esa pulsera; todavía no estamos separando permisos por pulsera.

## 2. Agrega estos `using` a `MainPage.xaml.cs`

Conserva los de Bluetooth y Firebase que ya tienes. Agrega:

```csharp
using System.IO;
using System.Net.Http;
using System.Net.Http.Headers;
using System.Text;
using System.Text.Json;
using System.Threading;
using System.Threading.Tasks;
```

Elimina los `using MQTTnet...` de ese archivo.

## 3. Reemplaza los campos MQTT

Elimina estos campos y constantes:

```csharp
private IMqttClient? _clientePulsos;
private bool _conectandoPulsos;

private const string TopicPulsos = ...;
private const string ServidorPulsos = ...;
private const string UsuarioPulsos = ...;
private const string ClavePulsos = ...;
```

En su lugar agrega:

```csharp
private CancellationTokenSource? _cancelacionPulsos;

private static readonly HttpClient HttpPulsos = new()
{
    Timeout = Timeout.InfiniteTimeSpan
};

private const string UrlBpm =
    "https://alertapulserapro-default-rtdb.firebaseio.com/" +
    "pulsera/estado/bpm.json";
```

No borres estos campos, porque siguen siendo necesarios:

```csharp
private IAdapter? _adapter;
private readonly HashSet<Guid> _dispositivosVistos = new();
private bool _buscando;
private bool _paginaVisible;
```


## 4. Reemplaza `OnAppearing` y `OnDisappearing`

```csharp
protected override void OnAppearing()
{
    base.OnAppearing();

    _paginaVisible = true;

    if (_cancelacionPulsos != null)
        return;

    var cancelacion = new CancellationTokenSource();

    _cancelacionPulsos = cancelacion;

    _ = EscucharPulsosAsync(cancelacion);
}

protected override async void OnDisappearing()
{
    _paginaVisible = false;

    var cancelacion = _cancelacionPulsos;
    _cancelacionPulsos = null;

    cancelacion?.Cancel();

    base.OnDisappearing();

    try
    {
        if (_adapter?.IsScanning == true)
        {
            await _adapter.StopScanningForDevicesAsync();
        }
    }
    catch (Exception ex)
    {
        System.Diagnostics.Debug.WriteLine(ex);
    }
}
```


## 5. Elimina el método MQTT y agrega estos métodos

Elimina por completo:

```csharp
private async void OnConectarPulsosClicked(...)
```

En su lugar, dentro de la clase `MainPage`, pega:

```csharp
private bool EsEscuchaActual(
    CancellationTokenSource cancelacion)
{
    return _paginaVisible &&
           ReferenceEquals(
               _cancelacionPulsos,
               cancelacion) &&
           !cancelacion.IsCancellationRequested;
}

private void ActualizarPantallaPulsos(
    CancellationTokenSource cancelacion,
    string? lectura,
    string estado)
{
    MainThread.BeginInvokeOnMainThread(() =>
    {
        if (!EsEscuchaActual(cancelacion))
            return;

        if (lectura != null)
        {
            PulsosLabel.Text = lectura;
        }

        EstadoPulsosLabel.Text = estado;
    });
}

private async Task EscucharPulsosAsync(
    CancellationTokenSource cancelacion)
{
    var ct = cancelacion.Token;

    try
    {
        while (!ct.IsCancellationRequested)
        {
            try
            {
                ActualizarPantallaPulsos(
                    cancelacion,
                    "-- BPM",
                    "Conectando a pulsos...");

                var auth = CrossFirebaseAuth.Current;

                var usuario = auth.CurrentUser;

                if (usuario == null)
                {
                    usuario = await auth
                        .SignInAnonymouslyAsync();
                }

                ct.ThrowIfCancellationRequested();

                if (usuario == null)
                {
                    throw new InvalidOperationException(
                        "No se pudo iniciar sesión en Firebase.");
                }

                // Token de autenticación de Firebase.
                // No es el token FCM de notificaciones.
                var token = await usuario.GetIdTokenAsync();

                ct.ThrowIfCancellationRequested();

                if (string.IsNullOrWhiteSpace(token))
                {
                    throw new InvalidOperationException(
                        "No se obtuvo el token de autenticación.");
                }

                string url =
                    $"{UrlBpm}?auth={Uri.EscapeDataString(token)}";

                using var solicitud = new HttpRequestMessage(
                    HttpMethod.Get,
                    url);

                solicitud.Headers.Accept.Add(
                    new MediaTypeWithQualityHeaderValue(
                        "text/event-stream"));

                using var respuesta = await HttpPulsos.SendAsync(
                    solicitud,
                    HttpCompletionOption.ResponseHeadersRead,
                    ct);

                if (!respuesta.IsSuccessStatusCode)
                {
                    throw new InvalidOperationException(
                        "Firebase no permitió leer los pulsos. " +
                        $"HTTP {(int)respuesta.StatusCode}. " +
                        "Revisa las reglas y la autenticación.");
                }

                ActualizarPantallaPulsos(
                    cancelacion,
                    null,
                    "Esperando lectura de la pulsera...");

                using var flujo = await respuesta.Content
                    .ReadAsStreamAsync(ct);

                using var lector = new StreamReader(flujo);

                string evento = string.Empty;
                var datos = new StringBuilder();

                while (!ct.IsCancellationRequested)
                {
                    var linea = await lector.ReadLineAsync(ct);

                    if (linea == null)
                    {
                        throw new IOException(
                            "La conexión de pulsos se cerró.");
                    }

                    if (linea.Length == 0)
                    {
                        if (evento == "cancel" ||
                            evento == "auth_revoked")
                        {
                            throw new InvalidOperationException(
                                "La sesión o el permiso de lectura " +
                                "de Firebase cambió.");
                        }

                        if ((evento == "put" ||
                             evento == "patch") &&
                            datos.Length > 0)
                        {
                            MostrarEventoPulsos(
                                cancelacion,
                                datos.ToString());
                        }

                        evento = string.Empty;
                        datos.Clear();

                        continue;
                    }

                    if (linea.StartsWith(
                            "event:",
                            StringComparison.Ordinal))
                    {
                        evento = linea[6..].Trim();
                    }
                    else if (linea.StartsWith(
                                 "data:",
                                 StringComparison.Ordinal))
                    {
                        if (datos.Length > 0)
                        {
                            datos.Append('\n');
                        }

                        datos.Append(
                            linea[5..].TrimStart());
                    }
                }
            }
            catch (OperationCanceledException)
                when (ct.IsCancellationRequested)
            {
                break;
            }
            catch (Exception ex)
            {
                // No registrar la URL: contiene el token de sesión.
                System.Diagnostics.Debug.WriteLine(
                    $"[PULSOS] {ex.GetType().Name}");

                ActualizarPantallaPulsos(
                    cancelacion,
                    "-- BPM",
                    "Sin conexión de pulsos. " +
                    "Reintentando en 5 segundos...");

                await Task.Delay(
                    TimeSpan.FromSeconds(5),
                    ct);
            }
        }
    }
    catch (OperationCanceledException)
        when (ct.IsCancellationRequested)
    {
        // La pantalla dejó de estar visible.
    }
    finally
    {
        cancelacion.Dispose();
    }
}

private void MostrarEventoPulsos(
    CancellationTokenSource cancelacion,
    string json)
{
    using var documento = JsonDocument.Parse(json);

    var raiz = documento.RootElement;

    if (!raiz.TryGetProperty("data", out var valor))
        return;

    if (valor.ValueKind == JsonValueKind.Null)
    {
        ActualizarPantallaPulsos(
            cancelacion,
            "-- BPM",
            "Esperando lectura de la pulsera...");

        return;
    }

    if (valor.ValueKind != JsonValueKind.Number ||
        !valor.TryGetDouble(out double bpm) ||
        !double.IsFinite(bpm) ||
        bpm <= 0)
    {
        ActualizarPantallaPulsos(
            cancelacion,
            "-- BPM",
            "Lectura de pulsos no válida.");

        return;
    }

    ActualizarPantallaPulsos(
        cancelacion,
        $"{bpm:0.#} BPM",
        string.Empty);
}
```

La espera de cinco segundos solo se usa para reconectar si falla la conexión. No es un intervalo de lectura: los cambios llegan mediante los eventos de Firebase. La API también envía eventos cuando caducan las credenciales o se pierde el permiso; el código vuelve a establecer la sesión en esos casos. [^86_1212]

## 6. Quita el botón de pulsos del XAML

Elimina únicamente:

```xml
<Button
    x:Name="ConectarPulsosButton"
    Text="Conectar pulsos"
    Clicked="OnConectarPulsosClicked"
    IsVisible="False"/>
```

Conserva `PulsosLabel` y `EstadoPulsosLabel`, y todo lo demás.

## 7. Por ahora, no cambies el `.csproj`

Deja MQTTnet instalado durante esta prueba. Una vez que compile y comprobemos el nuevo flujo, quitamos el paquete si ningún otro archivo lo usa.

Prueba así:

1. Mantén abierto el puente.
2. Abre la app.
3. Publica `76` en `pulsera/prueba/pulsos`, sin retain.
4. Comprueba que aparezca `76 BPM`.
5. Publica otro valor y comprueba que cambie sin pulsar ningún botón.

Importante: Firebase envía también el valor que ya estaba guardado al iniciar la escucha. Verlo no demuestra por sí solo que el puente siga conectado; para esta prueba, comprueba que un valor nuevo llegue a la pantalla. Más adelante podemos aprovechar `recibidoUtc` para detectar datos antiguos sin etiquetarlos como promedio o “última lectura”. [^86_1212]

<span style="display:none">[^86_1][^86_10][^86_11][^86_12][^86_13][^86_14][^86_15][^86_16][^86_17][^86_18][^86_19][^86_2][^86_20][^86_21][^86_22][^86_23][^86_24][^86_25][^86_26][^86_27][^86_28][^86_29][^86_3][^86_30][^86_31][^86_32][^86_33][^86_34][^86_35][^86_36][^86_37][^86_38][^86_39][^86_4][^86_40][^86_41][^86_42][^86_43][^86_5][^86_6][^86_7][^86_8][^86_9]</span>

<div align="center">⁂</div>

[^86_1]: https://firebase-rest-api.readthedocs.io/en/latest/guide/database.html

[^86_2]: https://github.com/flutter/plugins/tree/master/packages/firebase_auth

[^86_3]: https://learn.microsoft.com/en-us/fabric/real-time-intelligence/event-streams/eventstream-rest-api

[^86_4]: https://github.com/firebase/flutterfire/issues/11428

[^86_5]: https://restdb.io/docs/realtime-messaging

[^86_6]: https://github.com/firebase/flutterfire/issues/16771

[^86_7]: https://daily.dev/posts/announcing-streaming-for-the-firebase-rest-api-h0dmvgpkc

[^86_8]: https://github.com/yultyyev/better-auth-firebase-auth

[^86_9]: https://github.com/invertase/react-native-firebase/issues/1154

[^86_10]: https://github.com/orgs/GitLiveApp/packages/npm/package/firebase-auth

[^86_11]: https://learn.microsoft.com/en-us/fabric/real-time-intelligence/event-streams/add-source-http

[^86_12]: https://stackoverflow.com/questions/71996056/firebase-user-id-token-when-does-it-change-and-how-to-listen-to-the-updates-re

[^86_13]: https://firebase.google.com/docs/database/rest/retrieve-data

[^86_14]: https://github.com/chemerisuk/cordova-plugin-firebase-authentication

[^86_15]: https://github.com/f-miyu/Plugin.FirebaseAuth/issues/30

[^86_16]: https://www.npmjs.com/package/@goiarlabs/cordova-plugin-firebase-authentication

[^86_17]: https://github.com/EddyVerbruggen/nativescript-plugin-firebase/issues/1189

[^86_18]: https://stackoverflow.com/questions/49712702/push-notification-with-firebase-ionic3

[^86_19]: https://capawesome.io/blog/capacitor-firebase-authentication-guide/

[^86_20]: https://www.jsdelivr.com/package/npm/workbox-plugin-firebase-auth

[^86_21]: https://stackoverflow.com/questions/52370387/ionic-firebase-gettoken-always-return-null-on-android-api-23-6-0-0-but-not-in

[^86_22]: https://github.com/EddyVerbruggen/nativescript-plugin-firebase/issues/1008

[^86_23]: https://www.npmjs.com/package/strapi-plugin-firebase-authentication

[^86_24]: https://capgo.app/docs/plugins/firebase-authentication/

[^86_25]: https://github.com/flutter-team-archive/plugins/pull/907/files/d7ebd947d772b56892add9447ff6e3c930b903eb

[^86_26]: https://github.com/EddyVerbruggen/nativescript-plugin-firebase/blob/master/docs/AUTHENTICATION.md

[^86_27]: https://capawesome.io/docs/plugins/firebase/authentication/

[^86_28]: https://github.com/m2sd/workbox-plugin-firebase-auth

[^86_29]: https://idtoken.dev/

[^86_30]: https://learn.microsoft.com/en-us/entra/identity-platform/msal-acquire-cache-tokens

[^86_31]: https://itch.io/docs/api/oauth

[^86_32]: https://www.digitalapi.ai/blogs/token-based-authentication

[^86_33]: https://dev.epicgames.com/community/learning/knowledge-base/LeGl7/epic-online-services-what-s-the-difference-between-eos_auth_copyidtoken-and-eos_auth_copyuserauthtoken

[^86_34]: https://clubprogramador.com/2026/10/09/autenticacion-api-rest-php-login-bearer-tokens-roles/

[^86_35]: https://firebase.google.com/docs/reference/unity/class/firebase/auth/firebase-user

[^86_36]: https://firebase.google.com/docs/auth/admin/verify-id-tokens

[^86_37]: https://github.com/firebase/flutterfire/commit/4cc02f2b82b4a8defe1b9cbf291446b104d300d0

[^86_38]: https://firebase.google.com/docs/reference/unity/namespace/firebase/auth

[^86_39]: https://firebase.google.com/docs/reference/unity/struct/firebase/auth/id-token-result

[^86_40]: https://firebase.google.com/support/release-notes/unity

[^86_41]: https://github.com/f-miyu/Plugin.FirebaseAuth

[^86_42]: https://www.nuget.org/packages/Plugin.Firebase.Auth/

[^86_43]: https://github.com/TobiasBuchholz/Plugin.Firebase/blob/development/docs/installations.md


---

# por q le quitas el mqtt o sea luego como se conecta con la esp32 no entiendo

No se lo quitamos a todo el sistema, bro: solo a la app del celular. La ESP32 y el puente siguen usando **MQTT**. Me faltó explicarte esa diferencia antes de pasarte el código.

## Antes: la app recibía directamente de EMQX

```text
ESP32 ──MQTT──→ EMQX ──MQTT──→ App
```

Incluso aquí, la app no se conectaba directamente a la ESP32: ambas se conectaban a EMQX. EMQX recibe lo que publica la ESP32 y lo entrega a quienes estén suscritos al topic. [^87_1241]

## Ahora: el puente recibe por la app

La propuesta que estamos armando es esta:

```text
ESP32
  │
  │ MQTT por internet
  ▼
EMQX
  │
  │ MQTT
  ▼
PuentePulsera en tu laptop
  │
  │ Guarda el BPM
  ▼
Firebase Realtime Database
  │
  │ La app escucha los cambios
  ▼
App del celular
```

Ejemplo con `76`:

1. La ESP32 publica `76` en `pulsera/prueba/pulsos`.
2. EMQX se lo entrega al puente.
3. El puente guarda `76` en `pulsera/estado/bpm`.
4. La app recibe ese cambio desde Firebase y muestra `76 BPM`.

Los pasos de publicar y recibir por topics siguen siendo MQTT; simplemente cambiamos quién recibe de EMQX: ahora es el puente, en lugar del celular. [^87_1242]

Por eso quitamos el servidor, usuario y contraseña MQTT de `MainPage.xaml.cs`: ya los usa el puente para ese trabajo.

## ¿Y la conexión Bluetooth con la ESP32?

Esa es otra conexión distinta y no la estamos quitando:

```text
App ──Bluetooth──→ ESP32
```

En el código que me compartiste, Bluetooth todavía solo busca y lista dispositivos. Conectarse a la pulsera y enviarle el nombre y contraseña de Wi-Fi sigue pendiente de implementar.

La idea es que Bluetooth sirva para configurar el Wi-Fi, y que después la ESP32 envíe los pulsos por internet mediante MQTT.

## La diferencia importante

| Diseño | ¿La app necesita MQTT? | ¿El puente debe estar abierto para ver pulsos nuevos? |
| :-- | :-- | :-- |
| App recibe desde EMQX | Sí | No |
| App recibe desde Firebase a través del puente | No | Sí |

Estamos preparando la segunda opción porque querías sacar esas credenciales de la app. No es obligatorio hacerlo así: la primera también es válida. Y quitar MQTT de la app no es lo que hace gratuito el sistema; son dos decisiones distintas.

No borres MQTT de la ESP32 ni de `PuentePulsera`. El cambio propuesto es únicamente en `AlertaPulsera`, la app del celular.

<span style="display:none">[^87_1][^87_10][^87_2][^87_3][^87_4][^87_5][^87_6][^87_7][^87_8][^87_9]</span>

<div align="center">⁂</div>

[^87_1]: https://www.emqx.com/en/blog/the-ultimate-guide-to-mqtt-broker-comparison

[^87_2]: https://docs.emqx.com/en/emqx/latest/get-started/mqtt-basics.html

[^87_3]: https://docs.emqx.com/en/emqx/latest/get-started/messaging/introduction.html

[^87_4]: https://www.emqx.com/en/mqtt-guide

[^87_5]: https://www.emqx.com/en/blog/unifying-mqtt-pub-sub-and-message-queuing

[^87_6]: https://docs.emqx.com/en/emqx/v5.0/mqtt/mqtt-publish-and-subscribe.html

[^87_7]: https://docs.emqx.com/en/emqx/latest/get-started/messaging/mqtt-concepts.html

[^87_8]: https://www.emqx.com/en/blog/the-ultimate-guide-to-mqtt-broker-comparison?trk=article-ssr-frontend-pulse_little-text-block

[^87_9]: https://www.emqx.com/en/blog/mqtt-5-introduction-to-publish-subscribe-model

[^87_10]: https://assets.emqx.com/resources/ebooks/Mastering MQTT-Your Ultimate Tutorial for MQTT.pdf


---

# a ok ya entiendo

Eso, bro. Entonces seguimos con ese diseño: MQTT se queda en la ESP32 y el puente; la app recibe los pulsos desde Firebase.

Aplica los cambios que te pasé en la app, deja el puente abierto y publica un BPM nuevo para comprobar que aparezca en pantalla. Si al compilar sale algún error, pásame el mensaje exacto y lo corregimos sin mover lo demás.

---

# imagen.png

Bro, ese error fue mío: te pasé `GetIdTokenAsync()`, pero tu `IFirebaseUser` no tiene ese método, tal como muestra **CS1061**. No es un problema de la contraseña, las reglas ni la conexión a Firebase. [^89_1271]

## Vamos a revisar el método exacto de tu versión

Para no darte otro nombre a ciegas:

1. En esta línea:

```csharp
var token = await usuario.GetIdTokenAsync();
```

2. Pon el cursor sobre `usuario` y presiona **F12** —o clic derecho → “Ir a definición”—.
3. Busca en la definición de `IFirebaseUser` los métodos que contengan `Token`.
4. Pégame esas líneas o manda una captura.

También puedes escribir temporalmente:

```csharp
usuario.
```

y escribir `Token` para filtrar las sugerencias de Visual Studio. Mándame lo que aparece y luego deshaz esa línea temporal.

No cambies paquetes ni abras las reglas de la base: primero corregimos esa llamada con la firma que realmente tiene tu versión.

<span style="display:none">[^89_1][^89_10][^89_11][^89_12][^89_13][^89_14][^89_15][^89_16][^89_17][^89_18][^89_19][^89_2][^89_20][^89_21][^89_22][^89_23][^89_24][^89_25][^89_26][^89_27][^89_28][^89_29][^89_3][^89_30][^89_31][^89_32][^89_33][^89_34][^89_35][^89_36][^89_37][^89_38][^89_39][^89_4][^89_40][^89_41][^89_42][^89_43][^89_44][^89_45][^89_46][^89_47][^89_48][^89_49][^89_5][^89_50][^89_51][^89_52][^89_53][^89_54][^89_6][^89_7][^89_8][^89_9]</span>

<div align="center">⁂</div>

[^89_1]: imagen.jpg

[^89_2]: imagen.jpg

[^89_3]: imagen.jpg

[^89_4]: imagen.jpg

[^89_5]: imagen.jpg

[^89_6]: imagen.jpg

[^89_7]: imagen.jpg

[^89_8]: imagen.jpg

[^89_9]: imagen.jpg

[^89_10]: imagen.jpg

[^89_11]: imagen.jpg

[^89_12]: imagen.jpg

[^89_13]: imagen.jpg

[^89_14]: imagen.jpg

[^89_15]: imagen.jpg

[^89_16]: imagen.jpg

[^89_17]: imagen.jpg

[^89_18]: imagen.jpg

[^89_19]: imagen.jpg

[^89_20]: imagen.jpg

[^89_21]: imagen.jpg

[^89_22]: imagen.jpg

[^89_23]: imagen.jpg

[^89_24]: imagen.jpg

[^89_25]: https://www.nuget.org/packages/Plugin.Firebase.Auth/3.0.0

[^89_26]: https://github.com/TobiasBuchholz/Plugin.Firebase/issues/296

[^89_27]: https://firebase.google.com/docs/reference/unity/class/firebase/installations/firebase-installations?authuser=508

[^89_28]: https://www.nuget.org/packages/Plugin.Firebase.Auth/2.0.6

[^89_29]: https://github.com/GameWorkstore/com.google.firebase.app

[^89_30]: https://firebase.google.com/support/release-notes/unity?authuser=377174373

[^89_31]: https://firebase.google.com/support/release-notes/unity?authuser=102

[^89_32]: https://firebase.google.com/docs/auth/android/manage-users

[^89_33]: https://pub.dev/documentation/cloud_firestore_dart_flutterfire/latest/cloud_firestore_dart_flutterfire/IdTokenUser-class.html

[^89_34]: https://github.com/TobiasBuchholz/Plugin.Firebase/issues/50

[^89_35]: https://stackoverflow.com/questions/76057574/getting-invalid-token-error-from-identity-when-running-usermanager-resetpassword

[^89_36]: https://stackoverflow.com/questions/61065708/firebase-how-refresh-idtoken-on-http-request-if-currentuser-is-null

[^89_37]: https://auth0.com/docs/secure/tokens/access-tokens/get-access-tokens

[^89_38]: https://help.qlik.com/en-US/sense-developer/November2026/Subsystems/NetSDKAPIref/Content/Qlik.Engine.Hub.GetAuthenticatedUserAsync.htm

[^89_39]: https://jwtviewer.com/

[^89_40]: https://api.laravel.com/docs/master//Illuminate/Auth/EloquentUserProvider.html

[^89_41]: https://www.rdocumentation.org/packages/azr/versions/0.3.7/topics/get_user_token

[^89_42]: https://serenity.is/docs/v/10.6.2/api/js/corelib/@serenity-is/namespaces/Authorization/variables/isLoggedInAsync

[^89_43]: https://learn.microsoft.com/es-es/dotnet/api/microsoft.identity.client.ibyusernameandpassword.acquiretokenbyusernamepassword?view=msal-dotnet-latest

[^89_44]: https://github.com/TobiasBuchholz/Plugin.Firebase/issues/763

[^89_45]: https://www.nuget.org/packages/Plugin.Firebase.Auth/

[^89_46]: https://github.com/f-miyu/Plugin.FirebaseAuth

[^89_47]: https://firebase.google.com/docs/auth/admin/verify-id-tokens

[^89_48]: https://firebase.google.com/support/release-notes/unity

[^89_49]: https://github.com/TobiasBuchholz/Plugin.Firebase/blob/development/docs/installations.md

[^89_50]: https://www.nuget.org/packages/Plugin.Firebase/

[^89_51]: https://clubprogramador.com/2026/10/09/autenticacion-api-rest-php-login-bearer-tokens-roles/

[^89_52]: https://firebase.google.com/docs/reference/unity/class/firebase/auth/firebase-user

[^89_53]: https://firebase.google.com/docs/reference/unity/namespace/firebase/auth

[^89_54]: https://firebase.google.com/docs/reference/unity/struct/firebase/auth/id-token-result


---

# no entiendo lo q debo hacer

Tranqui, bro, lo expliqué complicado. Solo necesito que Visual Studio nos muestre qué opciones tiene `usuario`; no vamos a cambiar lo demás.

## Haz esto

1. Busca la línea que sale con error en tu captura: [^90_1271]

```csharp
var token = await usuario.GetIdTokenAsync();
```

2. Borra únicamente `GetIdTokenAsync()`, dejando temporalmente:

```csharp
var token = await usuario.;
```

3. Coloca el cursor justo después del punto de `usuario.` y antes del `;`.
4. Presiona **Ctrl + Espacio**. Cuando aparezca la lista de opciones, escribe:

```text
Get
```

5. Mándame una captura de esa lista.

Es normal que la línea siga marcada en rojo: está incompleta mientras revisamos las opciones. No ejecutes ni cambies nada más todavía.

<span style="display:none">[^90_1]</span>

<div align="center">⁂</div>

[^90_1]: imagen.jpg


---

# imagen.png

¡Ese es, bro! Tu captura muestra que el método se llama `GetIdTokenResultAsync`, no `GetIdTokenAsync`. [^91_1291]

## Reemplaza la línea incompleta por estas dos

```csharp
var resultadoToken = await usuario.GetIdTokenResultAsync();
var token = resultadoToken.Token;
```

El bloque debe quedar así:

```csharp
// Token de autenticación de Firebase.
// No es el token FCM de notificaciones.
var resultadoToken = await usuario.GetIdTokenResultAsync();
var token = resultadoToken.Token;

ct.ThrowIfCancellationRequested();

if (string.IsNullOrWhiteSpace(token))
{
    throw new InvalidOperationException(
        "No se obtuvo el token de autenticación.");
}

string url =
    $"{UrlBpm}?auth={Uri.EscapeDataString(token)}";
```

No cambies nada más. Guarda y compila; si compila sin errores, abre la app con el puente encendido y publica un BPM nuevo para comprobar que llegue.

<span style="display:none">[^91_1]</span>

<div align="center">⁂</div>

[^91_1]: imagen.jpg


---

# YA SI JALA

¡Eso, broski! Ya quedó funcionando la recepción de pulsos en la app. La corrección fue usar `GetIdTokenResultAsync()` y obtener su propiedad `Token`. [^92_1291]

## Así queda lo que armamos

```text
Pulsos:
ESP32 → EMQX → Puente → Realtime Database → App

Alertas:
ESP32 → EMQX → Puente → FCM → Celulares
```

La app ya no necesita las credenciales MQTT para mostrar los BPM; esa conexión quedó a cargo del puente.

Guarda una copia de esta versión que ya funciona antes de seguir modificando. Quedan pendientes la configuración Wi-Fi por Bluetooth y detectar cuándo un BPM guardado está desactualizado. Por ahora, mantén el puente abierto para recibir valores nuevos.

<span style="display:none">[^92_1]</span>

<div align="center">⁂</div>

[^92_1]: imagen.jpg


---

# COMO HACER EL REPO DE GITHUB?

Sí, bro. Como estás usando Visual Studio, puedes crear el repo de GitHub desde ahí. Primero vamos a evitar subir contraseñas y archivos privados; después lo publicamos.

## 1. Prepara lo que no debe subirse

Antes de crear el repo:

- Revisa que ya no esté la constante `ClavePulsos` con la contraseña dentro de la app.
- No copies al proyecto el JSON de cuenta de servicio que tienes en `C:\ClavesPulsera\`.
- No subas contraseñas Wi-Fi, tokens ni claves de firma de Android.
- Cambia la contraseña MQTT que compartiste antes y actualízala donde todavía se use.

Las credenciales no deben guardarse en el código ni en el repositorio, aunque el repo sea privado. [^93_1299]

## 2. Crea el archivo `.gitignore`

Abre la carpeta donde está tu archivo de solución, que termina en `.sln` o `.slnx`. Ahí crea un archivo llamado exactamente:

```text
.gitignore
```

Si ya existe, conserva su contenido y añade las reglas que falten:

```gitignore
# Visual Studio
.vs/
*.user
*.suo

# Compilación .NET
[Bb]in/
[Oo]bj/

# Paquetes generados de Android
*.apk
*.aab

# Claves de firma
*.keystore
*.jks
*.pfx

# Secretos y configuración local
.env
.env.*
!.env.example
appsettings.Local.json
appsettings.Development.json

# Cuentas de servicio Firebase
*firebase-adminsdk*.json

# Configuración local de Firebase para esta demo
google-services.json
GoogleService-Info.plist

# Registros
*.log
```

Este archivo le indica a Git qué archivos nuevos debe ignorar. No borra tus archivos del equipo. Si algún archivo ya estaba registrado en Git, agregarlo al `.gitignore` no lo elimina del historial. [^93_1298]

Para esta demo dejamos fuera también `google-services.json` por precaución; consérvalo en tu computadora, porque tu proyecto lo utiliza.

## 3. Crea el repo desde Visual Studio

Con tu solución abierta:

1. En el menú superior, entra en “Git”.
2. Selecciona “Crear repositorio de Git”.
3. Elige “GitHub”.
4. Inicia sesión si te lo pide.
5. Pon estos datos:


| Campo | Valor sugerido |
| :-- | :-- |
| Nombre | `AlertaPulsera` |
| Descripción | `App MAUI para pulsera con pulsos y alertas de caída` |
| Visibilidad | Privado |
| Ruta local | La carpeta de tu solución actual |

6. Si aparece una opción de plantilla `.gitignore`, selecciona la de Visual Studio y asegúrate de conservar las exclusiones anteriores.
7. Después de revisar que no haya secretos, pulsa “Crear y enviar” o “Create and Push”. Ese botón crea el repo en GitHub y sube el código. [^93_1304]

No necesitas crear otra app ni otro proyecto de Visual Studio.

## 4. Comprueba lo que se subió

Abre el repositorio en GitHub y revisa que estén tus archivos de código:

```text
MainPage.xaml
MainPage.xaml.cs
MauiProgram.cs
AlertaPulsera.csproj
...
```

No deberían aparecer estas carpetas ni los archivos privados que excluimos:

```text
bin/
obj/
.vs/
archivos firebase-adminsdk
claves de firma
```


## 5. Para guardar los siguientes avances

En Visual Studio → Git → “Cambios de Git”:

1. Revisa los archivos modificados.
2. Escribe un mensaje, por ejemplo:

```text
Agrega recepción de pulsos desde Realtime Database
```

3. Pulsa “Confirmar todo” —commit—.
4. Después pulsa “Enviar” —push—.

El commit guarda una versión en tu equipo; el push la sube a GitHub. [^93_1307]

Ojo con `PuentePulsera`: solo quedará incluido si está dentro de la carpeta del repositorio. Si está en otra carpeta, crear el repo de la app no lo subirá automáticamente. No lo muevas todavía; primero respalda la app que ya funciona.

<span style="display:none">[^93_1][^93_10][^93_11][^93_12][^93_13][^93_14][^93_15][^93_16][^93_17][^93_18][^93_19][^93_2][^93_20][^93_3][^93_4][^93_5][^93_6][^93_7][^93_8][^93_9]</span>

<div align="center">⁂</div>

[^93_1]: https://learn.microsoft.com/en-us/training/modules/maintain-secure-repository-github/

[^93_2]: https://learn.microsoft.com/en-us/azure/devops/repos/git/ignore-files?view=azure-devops

[^93_3]: https://learn.microsoft.com/en-us/azure/security/fundamentals/secrets-best-practices

[^93_4]: https://learn.microsoft.com/en-us/azure/defender-for-cloud/secrets-scanning-code

[^93_5]: https://learn.microsoft.com/en-us/azure/devops/repos/git/auth-overview?view=azure-devops

[^93_6]: https://learn.microsoft.com/en-us/azure/devops/repos/git/repository-settings?view=azure-devops

[^93_7]: https://learn.microsoft.com/en-us/azure/devops/repos/security/github-advanced-security-secret-scanning?view=azure-devops

[^93_8]: http://www.learn.microsoft.com/en-us/visualstudio/version-control/git-create-repository

[^93_9]: https://learn.microsoft.com/tr-tr/visualstudio/version-control/git-create-repository?view=visualstudio

[^93_10]: https://learn.microsoft.com/en-us/visualstudio/version-control/git-settings?view=visualstudio

[^93_11]: https://learn.microsoft.com/en-us/visualstudio/version-control/git-with-visual-studio?view=visualstudio

[^93_12]: https://learn.microsoft.com/gl-es/visualstudio/version-control/git-create-repository?view=vs-2022

[^93_13]: https://learn.microsoft.com/es-mx/previous-versions/visualstudio/mac/set-up-git-repository?view=vsmac-2019

[^93_14]: https://learn.microsoft.com/sk-sk/visualstudio/version-control/git-create-repository?view=vs-2019

[^93_15]: https://learn.microsoft.com/en-ie/previous-versions/visualstudio/visual-studio-2017/version-control/git-create-repository?view=vs-2017

[^93_16]: projects.fall_detection_mobile_app.firebase_database

[^93_17]: projects.fall_detection_mobile_app.uid_configuration

[^93_18]: https://www.perplexity.ai/search/0cb8a2e5-0517-426e-97dd-fbf6e8485e20

[^93_19]: https://www.perplexity.ai/search/3a393b9f-4683-4667-9cdb-3109edf28284

[^93_20]: https://www.perplexity.ai/search/25f8a0d3-db59-45fb-ba98-af5176ce1358


---

# solo me cargo eso

Normal, bro. Tu captura muestra que GitHub solo tiene `.gitattributes` y `.gitignore`, de un commit de hace 8 horas. Eso significa que Visual Studio creó el repo, pero todavía no se hizo commit ni push de tu código. [^94_1312]

## Qué hacer en Visual Studio

1. Abre tu solución `AlertaPulsera`.
2. Entra en **Git → Cambios de Git**. Si no lo ves, usa **Ver → Cambios de Git**.
3. En la lista de cambios, revisa que aparezcan archivos como:

```text
MainPage.xaml
MainPage.xaml.cs
MauiProgram.cs
AlertaPulsera.csproj
```

4. Comprueba que no aparezcan estos archivos:

```text
bin/
obj/
.vs/
*firebase-adminsdk*.json
claves de firma
```

5. Escribe un mensaje de commit, por ejemplo:

```text
Agrega app de pulsera con pulsos y notificaciones
```

6. Pulsa **Confirmar todo**.
7. Después pulsa **Enviar** o **Push**.
8. Refresca GitHub.

## Si “Cambios de Git” sale vacío

Puede estar abierto otro repositorio o una carpeta distinta. En **Git → Administrar ramas** o en la barra inferior de Visual Studio, revisa que el repo activo sea el de tu proyecto.

Si no aparecen cambios, pásame una captura de **Cambios de Git** y de la carpeta donde está tu archivo `.sln`, sin mostrar tokens ni contraseñas.

No ejecutes comandos que borren cosas ni fuerces el push: primero necesitamos ver qué carpeta tiene tu código.

<span style="display:none">[^94_1]</span>

<div align="center">⁂</div>

[^94_1]: imagen.jpg


---

# q pongo en el mensaje?

Pon esto en el mensaje, bro:

```text
Agrega app de pulsera con pulsos y notificaciones
```

Tu captura muestra 40 cambios pendientes, con archivos de código como los de `Platforms`, y el mensaje es obligatorio para confirmar. [^95_1313]

## Antes de pulsar “Confirmar todo”

Baja por la lista de **Cambios** y revisa que no aparezcan:

```text
bin
obj
.vs
*firebase-adminsdk*.json
keystore / jks / pfx
```

Si todo se ve normal:

1. Pulsa **Confirmar todo**.
2. Pulsa **Enviar** o **Push**, normalmente en la barra superior de Cambios de Git o en la parte inferior de Visual Studio.
3. Refresca GitHub.

Si aparece alguno de esos archivos privados, no confirmes todavía y mándame una captura de esa parte de la lista.

<span style="display:none">[^95_1]</span>

<div align="center">⁂</div>

[^95_1]: imagen.jpg


---

# ya le di pero no me sale nada en github

Lo más probable, bro, es que solo hiciste el **commit**, que guarda la versión en tu computadora. Falta el **push**, que es lo que la sube a GitHub. Por eso GitHub sigue mostrando solo `.gitignore` y `.gitattributes`.

## Haz el push

1. Abre **Git → Cambios de Git**.
2. Arriba de la ventana, junto al texto de confirmaciones, busca los números `↑ ↓`. Si ves `↑ 1`, hay un commit pendiente de subir.
3. Pulsa la flecha hacia arriba `↑` o el botón **Enviar**/**Push**.
4. Si Visual Studio pide iniciar sesión en GitHub, acepta y vuelve a intentarlo.
5. Refresca la página del repositorio.

También puedes usar **Git → Insertar cambios** (Push) en el menú superior.

## Revisa que la rama coincida

Tu GitHub muestra la rama `master`. En la barra inferior de Visual Studio comprueba que tu rama local también sea `master`. Si es otra, por ejemplo `main`, el código puede haberse subido a una rama distinta. Revisa el selector de ramas de GitHub antes de asumir que se perdió.

## Si no se sube o da error

Mándame una captura de estos dos lugares:

- La parte superior de **Cambios de Git**, donde aparecen los números `↑ ↓`.
- El mensaje de error o la notificación que muestre Visual Studio al presionar Push.

No uses `push --force`, no borres el repo y no vuelvas a crearlo. Con esa captura vemos si falta el push, la sesión de GitHub o la rama.

---

# ahora si debo empezar con lo del bluetooth

Sí, bro. Ya con los pulsos funcionando, el siguiente paso es usar Bluetooth para mandarle a la ESP32 el Wi-Fi: nombre de red y contraseña. Con eso la pulsera se conecta a internet y publica por MQTT.

## Cómo funciona

```text
App ──Bluetooth──→ ESP32 recibe el Wi-Fi
ESP32 ──Wi-Fi + MQTT──→ EMQX → puente → Firebase → app
```

Bluetooth solo se usa para configurar. Después, los pulsos siguen el camino que ya probamos.

Plugin.BLE, que ya tienes instalado, permite conectar con `ConnectToDeviceAsync`, obtener el servicio y la característica, y enviar datos con `WriteAsync`. Su documentación indica que las escrituras en características deben hacerse desde el hilo principal; si no, puede aparecer un error de escritura. También advierte que no se deben guardar servicios ni características entre sesiones, porque dejan de ser válidos al desconectar.[^97_1]

## Qué necesito de tu ESP32

Para escribir el código de la app, la app y la ESP32 deben hablar con los mismos identificadores. Revisa tu programa de la ESP32 y dime:

1. ¿Ya crea un servidor BLE o hay que programarlo?
2. ¿Qué librería usa: `BLEDevice.h`, NimBLE u otra?
3. ¿Cómo aparece su nombre Bluetooth al escanear?
4. ¿Ya tiene UUID de servicio y características?

Si todavía no tienes eso, lo diseñamos. Un ejemplo común usa un servicio con dos características de escritura, una para el SSID y otra para la contraseña, y la ESP32 guarda los datos y se conecta al Wi-Fi. [^97_1318]

## Una advertencia de seguridad

Un ejemplo simple envía la contraseña del Wi-Fi por BLE sin cifrar. Está bien para probar en tu mesa, pero no es lo ideal para algo final. Espressif ofrece aprovisionamiento con seguridad mediante `Security 1`, con una clave de posesión, o `Security 2`, con usuario y contraseña. [^97_1317] Eso implicaría usar su protocolo en lugar de características propias.

Para tu demo, puedo ayudarte a empezar con características simples y dejar la parte segura como mejora posterior. Dime cuál prefieres, bro.

Pásame el código BLE de la ESP32 o dime que todavía no existe. Y si ya hiciste el push a GitHub, confirma que en GitHub aparecen tus archivos antes de seguir.

<span style="display:none">[^97_10][^97_11][^97_12][^97_13][^97_14][^97_15][^97_2][^97_3][^97_4][^97_5][^97_6][^97_7][^97_8][^97_9]</span>

<div align="center">⁂</div>

[^97_1]: https://www.nuget.org/packages/Plugin.BLE/

[^97_2]: https://randomnerdtutorials.com/esp32-wi-fi-provisioning-ble-arduino/

[^97_3]: https://www.circuitschools.com/esp32-wi-fi-provisioning-via-ble-easy-to-change-wifi-credentials/

[^97_4]: https://github.com/dotnet-bluetooth-le/dotnet-bluetooth-le/blob/main/doc/usage.md

[^97_5]: https://docs.espressif.com/projects/esp-idf/en/v5.0.4/esp32/api-reference/provisioning/wifi_provisioning.html

[^97_6]: https://forum.arduino.cc/t/esp32-wifi-provisioning-with-ble/1403467

[^97_7]: https://www.nuget.org/packages/DSoft.System.BluetoothLe/4.0.2610.101

[^97_8]: https://stackoverflow.com/questions/69735708/xamarin-plugin-ble-why-data-read-doesnt-change

[^97_9]: https://components.espressif.com/components/espressif/network_provisioning/versions/1.4.0/examples/wifi_prov?language=en

[^97_10]: https://github.com/electroank/ESP32-BLE-WiFi-Provisioning

[^97_11]: https://www.jenx.si/2019/08/16/bluetooth-gatt-xamarin-forms-client/

[^97_12]: https://docs.arduino.cc/libraries/wifiprovisioner/

[^97_13]: https://stackoverflow.com/questions/65830039/testing-blebluetooth-low-energy-in-xamarin-forms

[^97_14]: https://learn.microsoft.com/en-us/answers/questions/924411/xamarin-plugin-ble-device-not-found-mobile-app

[^97_15]: https://github.com/xabre/xamarin-bluetooth-le/issues/525


---

# aun hay que programarlo

Va, bro. Entonces lo hacemos en orden y probamos cada parte antes de pasar a la siguiente. Primero armamos la ESP32 y luego la app, para no depurar ambas a la vez.

## Diseño que usaremos

La ESP32 se anunciará por Bluetooth y tendrá un servicio con dos características de escritura:


| Característica | Qué recibe |
| :-- | :-- |
| `wifi_ssid` | Nombre de la red Wi-Fi |
| `wifi_clave` | Contraseña del Wi-Fi |

Cuando reciba ambos datos, la ESP32 los guardará con `Preferences` y se conectará al Wi-Fi. Esa librería guarda valores en la memoria flash, así que no se pierden al reiniciar. [^98_1328][^98_1330]

Los UUID son identificadores que la app y la ESP32 deben compartir idénticos. Los definiremos una sola vez en ambos lados.

## Por qué necesito 3 datos antes del código

El código BLE de Arduino cambió entre versiones. En algunos ejemplos, `onWrite` recibe un puntero y `getValue()` devuelve `std::string`; la documentación actual de Espressif muestra otra API, con `String` y manejadores distintos. [^98_1332][^98_1333] Si te paso la versión equivocada, no va a compilar.

Dime:

1. ¿Qué placa tienes? Por ejemplo ESP32 DevKit, ESP32-C3 o ESP32-S3.
2. ¿Qué versión de **esp32 by Espressif Systems** tienes? Está en Herramientas → Placa → Gestor de placas.
3. ¿Qué librería MQTT usa tu código de la ESP32? Por ejemplo `PubSubClient`.

Si programas con otro entorno, como PlatformIO o ESP-IDF, dímelo también.

## Cuando me respondas

Te daré el sketch de la ESP32 en pasos:

1. Anunciar Bluetooth y recibir SSID y contraseña.
2. Probarlo con la app **nRF Connect**, sin tocar todavía tu app.
3. Conectar la ESP32 al Wi-Fi.
4. Después, conectar `AlertaPulsera` por Bluetooth y enviar los datos.

Por seguridad, el primer sketch no imprimirá la contraseña en el monitor serial. Con características simples, la contraseña viaja por BLE sin protección adicional; para la demo en tu mesa es aceptable, pero luego conviene revisar un aprovisionamiento seguro. [^98_1317]

<span style="display:none">[^98_1][^98_10][^98_11][^98_12][^98_13][^98_14][^98_15][^98_16][^98_2][^98_3][^98_4][^98_5][^98_6][^98_7][^98_8][^98_9]</span>

<div align="center">⁂</div>

[^98_1]: https://docs.espressif.com/projects/esp-idf/en/v5.0.4/esp32/api-reference/provisioning/wifi_provisioning.html

[^98_2]: https://randomnerdtutorials.com/esp32-save-data-permanently-preferences/

[^98_3]: https://forum.arduino.cc/t/esp32-arduino-ble-how-to-read-hex-data/893030

[^98_4]: https://docs.espressif.com/projects/arduino-esp32/en/latest/tutorials/preferences.html

[^98_5]: https://forum.arduino.cc/t/esp32-ble-bluetooth-examples-confuse-me/1344437

[^98_6]: https://docs.espressif.com/projects/arduino-esp32/en/latest/api/ble.html

[^98_7]: https://learn.pcbcupid.com/guides/bluetooth/bluetoothglyph

[^98_8]: https://randomnerdtutorials.com/esp32-web-bluetooth/

[^98_9]: https://forum.arduino.cc/t/bluetooth-low-energy-ble-seguro-con-esp32/1263480

[^98_10]: https://docs.arduino.cc/libraries/preferences/

[^98_11]: https://github.com/espressif/arduino-esp32/issues/5560

[^98_12]: https://esp32.com/viewtopic.php?t=4181

[^98_13]: https://www.tutorialspoint.com/esp32_for_iot/esp32_for_iot_preferences.htm

[^98_14]: https://forum.arduino.cc/t/how-to-send-data-from-client-to-uart-ble-server/1272255

[^98_15]: https://stackoverflow.com/questions/56791714/defining-two-different-callbacks-for-ble-on-esp32

[^98_16]: https://forum.arduino.cc/t/how-to-use-the-library-preferences-h/1375772


---

# uso arduino ide, no tengo libreria, espressif 23, es la q venden en steren no se exactamente cual

Va, bro. Ya sabemos que usas Arduino IDE. Antes de pasarte el programa, falta confirmar la versión instalada y cuál placa tienes; “Espressif 23” no me permite identificar la versión con seguridad.

Steren vende una placa ESP32 con Wi-Fi y Bluetooth BLE, pero no voy a asumir que es exactamente la tuya solo por la tienda.[^99_1]

## 1. Mándame una foto de la placa

Que se vea de frente y se alcancen a leer las letras del cuadrito metálico. No necesitas saber el modelo: con la foto lo revisamos.

## 2. Mándame una captura de la versión

En Arduino IDE:

1. Abre el “Gestor de placas” desde el icono de placas de la barra izquierda.
2. En el buscador escribe:

```text
esp32
```

3. Busca el paquete:

```text
esp32 by Espressif Systems
```

4. Manda una captura donde se vea la versión instalada.

No instales ni actualices nada todavía.

## Qué haremos primero

Prepararemos una prueba pequeña para que la ESP32 aparezca en tu app con el nombre:

```text
AlertaPulsera
```

Primero comprobamos que la app la encuentre; después añadimos la conexión y el envío del Wi-Fi. MQTT y los sensores los dejamos fuera de esa primera prueba para no mezclar errores.

Si ya tienes algún programa guardado en la ESP32, conserva su archivo `.ino` antes de cargar el de prueba, para no perder lo que ya tengas.

<span style="display:none">[^99_10][^99_11][^99_12][^99_13][^99_14][^99_15][^99_2][^99_3][^99_4][^99_5][^99_6][^99_7][^99_8][^99_9]</span>

<div align="center">⁂</div>

[^99_1]: https://www.steren.com.mx/placa-de-programacion-tipo-esp32.html

[^99_2]: https://www.steren.com.mx/proyectos-de-electronica

[^99_3]: https://www.steren.com.mx/proyecto-arduino-servo-motor

[^99_4]: https://www.steren.com.mx/lo-nuevo

[^99_5]: https://www.steren.com.mx/receptor-de-audio-bluetooth.html?p=2

[^99_6]: https://www.steren.com.mx/transmisor-de-audio-bluetooth.html?p=3

[^99_7]: https://www.steren.com.mx/automotriz/receptores-y-transmisores-de-audio-inalambrico-transceptores

[^99_8]: https://www.steren.com.mx/automotriz/transmisores-fm-bluetooth

[^99_9]: https://www.steren.com.mx/proyectos-de-electronica/gabinetes

[^99_10]: https://www.steren.com.mx/smart-home/smart-home-zigbee-bluetooth

[^99_11]: https://www.steren.com.mx/proyectos-de-electronica/placas-de-desarrollo-y-accesorios-para-proyectos

[^99_12]: https://www.steren.com.mx/placa-de-desarrollo-nodemcu-esp8266.html

[^99_13]: https://www.steren.com.mx/modulo-bluetooth.html

[^99_14]: https://www.steren.com.mx/placa-de-desarrollo.html

[^99_15]: https://www.steren.com.mx/

