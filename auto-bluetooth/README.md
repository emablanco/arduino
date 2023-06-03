# La clase AFMotor de la biblioteca Adafruit Motor Shield proporciona una variedad de métodos para controlar motores de corriente continua (DC) y motores paso a paso. 

## Lista de 20 métodos disponibles en la clase AFMotor:
 
1.    AFMotor(uint8_t num): Constructor para crear una instancia de un motor específico en el shield.
1.    setSpeed(uint8_t speed): Establece la velocidad del motor.
1.    run(uint8_t cmd): Activa el motor y establece su dirección y modo de operación.
1.    run(uint8_t cmd, uint8_t speed): Activa el motor con una velocidad específica.
1.    run(uint8_t cmd, uint8_t speed, uint8_t accel): Activa el motor con una velocidad y aceleración específicas.
1.    run(uint8_t cmd, uint8_t speed, uint8_t accel, uint8_t distance): Activa el motor con velocidad, aceleración y distancia específicas.
1.    setCommand(uint8_t cmd): Establece el comando de control del motor.
1.    setSpeedRamp(uint8_t ramp): Establece la rampa de velocidad del motor.
1.    setStepMode(uint8_t mode): Establece el modo de pasos para motores paso a paso.
1.    step(uint16_t steps, uint8_t dir, uint8_t style): Realiza un número determinado de pasos en un motor paso a paso.
1.    release(): Detiene el motor y lo deja sin alimentación.
1.    isRunning(): Verifica si el motor está en funcionamiento.
1.    disableOutputs(): Desactiva las salidas del motor.
1.    enableOutputs(): Activa las salidas del motor.
1.    getCurrentMilliamps(): Obtiene la corriente en miliamperios del motor.
1.    getDirection(): Obtiene la dirección actual del motor.
1.    getSpeed(): Obtiene la velocidad actual del motor.
1.    getRamp(): Obtiene la rampa de velocidad actual del motor.
1.    getSteps(): Obtiene el número de pasos realizados por el motor paso a paso.
1.    getMode(): Obtiene el modo de pasos actual para motores paso a paso.

Estos son solo algunos de los métodos disponibles en la clase AFMotor.

## Lista de 20 métodos de la biblioteca Serial en Arduino:

1.    Serial.begin(baudRate): Inicia la comunicación serial con una velocidad de transmisión específica.
1.    Serial.end(): Detiene la comunicación serial.
1.    Serial.available(): Devuelve el número de bytes disponibles para leer del búfer de recepción.
1.    Serial.read(): Lee el siguiente byte de datos del búfer de recepción y lo devuelve como un valor entero.
1.    Serial.write(data): Envía datos a través de la comunicación serial. El parámetro 'data' puede ser un valor entero o un byte.
1.    Serial.print(data): Imprime datos en la comunicación serial. Puede recibir diferentes tipos de datos como parámetros.
1.    Serial.println(data): Imprime datos en la comunicación serial seguidos de un carácter de nueva línea.
1.    Serial.flush(): Espera a que se completen las transmisiones pendientes antes de continuar.
1.    Serial.setTimeout(timeout): Establece el tiempo máximo de espera para la recepción de datos.
1.    Serial.find(target): Busca un patrón específico en los datos recibidos y devuelve true si se encuentra.
1.    Serial.readString(): Lee una cadena de caracteres del búfer de recepción.
1.    Serial.readStringUntil(delimiter): Lee una cadena de caracteres del búfer de recepción hasta que se encuentra un delimitador específico.
1.    Serial.parseFloat(): Lee un número de punto flotante del búfer de recepción.
1.    Serial.parseInt(): Lee un número entero del búfer de recepción.
1.    Serial.availableForWrite(): Devuelve la cantidad de espacio disponible en el búfer de transmisión.
1.    Serial.write(buf, len): Envía un búfer de datos específico de longitud determinada a través de la comunicación serial.
1.    Serial.getDebugStream(): Obtiene un puntero al objeto Stream que representa la comunicación serial.
1.    Serial.peek(): Devuelve el siguiente byte disponible en el búfer de recepción sin eliminarlo del búfer.
1.    Serial.findUntil(target, terminator): Busca un patrón específico en los datos recibidos hasta que se encuentra un terminador específico.
1.    Serial.swap(): Intercambia los pines RX y TX de la comunicación serial.

Estos son solo algunos de los métodos más utilizados en la biblioteca Serial de Arduino.
