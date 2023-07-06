const int triggerPin = 2;  // Pin del trigger (salida)
const int echoPin = 3;     // Pin del echo (entrada)

void setup() {
  Serial.begin(9600);       // Inicializar el puerto serial
  
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // Limpiar el pin de trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  
  // Generar un pulso de ultrasonido
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  
  // Medir el tiempo de duración del eco | cuanto demora en ponerce en HIGH
  unsigned long duracion = pulseIn(echoPin, HIGH);
  
  // Calcular la distancia en centímetros | 343 m/s | 0.034 cm/s
  unsigned int distancia = duracion * 0.034 / 2;
  
  // Mostrar la distancia en el monitor serial
  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");
  
  delay(1000);  // Esperar 1 segundo antes de la siguiente medición
}
