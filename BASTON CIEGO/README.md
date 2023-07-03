## En la línea de código:

```BASH
long duration = pulseIn(11, HIGH);

```
La función **pulseIn()** es una función de Arduino que mide la duración de un pulso digital en un pin específico. Toma dos parámetros: el número del pin donde se realizará la medición y el estado del pulso que se va a medir (HIGH o LOW).

En este caso, **pulseIn(11, HIGH)** mide la duración de un pulso en el pin digital 11 cuando está en estado HIGH (alto). El pin 11 está conectado al pin ECHO del sensor ultrasónico **AJ-SR04M**, que se utiliza para recibir el eco del pulso ultrasónico.

La función **pulseIn()** espera a que el pin especificado cambie de estado y luego mide el tiempo que permanece en ese estado. Devuelve la duración del pulso en microsegundos.

El tipo de datos **long** se utiliza para almacenar valores enteros largos, ya que **pulseIn()** devuelve un valor de tiempo que puede ser mayor a 32,767 microsegundos, que es el rango máximo del tipo de datos **int**.

Entonces, la línea de código **long duracion = pulseIn(11, HIGH);** mide la duración del pulso de **eco** en el pin **ECHO** del sensor y almacena ese valor en la variable duracion para su posterior uso en el cálculo de la distancia.

## En la línea de código:

```BASH
   float distancia = duracion * 0.0343 / 2;

```
El sensor ultrasónico **AJ-SR04M** funciona midiendo el tiempo que tarda un pulso ultrasónico en ir y volver desde el sensor hasta el objeto detectado. Con ese tiempo, podemos calcular la distancia utilizando la fórmula básica de la velocidad: **distancia = velocidad * tiempo.**

En el caso de este sensor, asumiremos una velocidad del sonido de aproximadamente **343 metros por segundo**. La distancia que queremos obtener es la de regreso del pulso, por lo tanto, necesitamos dividir el tiempo por 2.

- Duración representa el tiempo que tarda el pulso en ir y volver, y se mide en microsegundos.
- 0.0343 es el factor de conversión que nos permite convertir el tiempo en microsegundos a distancia en centímetros, utilizando la velocidad del sonido. Esta cifra se obtiene dividiendo la velocidad del sonido en cm/s (34300 cm/s) por 1000000 para convertirlo a cm/microsegundo.
- / 2 divide la duración entre 2 para obtener la distancia de ida y vuelta.

El resultado se almacena en la variable distancia como un valor de punto flotante (float) en centímetros.

