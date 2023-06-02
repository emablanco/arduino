La clase AFMotor de la biblioteca Adafruit Motor Shield proporciona una variedad de métodos para controlar motores de corriente continua (DC) y motores paso a paso. Aquí tienes una lista de 20 métodos disponibles en la clase AFMotor:

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

Estos son solo algunos de los métodos disponibles en la clase AFMotor. Puedes consultar la documentación de la biblioteca Adafruit Motor Shield para obtener más detalles sobre estos métodos y otros que puedan ser útiles para tu proyecto específico.
