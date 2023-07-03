void setup() {
  Serial.begin(9600);
  pinMode(10, OUTPUT);  // TRIG como salida
  pinMode(11, INPUT);   // ECHO como entrada
}

void loop() {
  // Genera un pulso de 10 microsegundos en el pin TRIG
  digitalWrite(10, LOW);
  delayMicroseconds(2);
  digitalWrite(10, HIGH);
  delayMicroseconds(10);
  digitalWrite(10, LOW);

  // Mide el tiempo que tarda en llegar el eco
  long duracion = pulseIn(11, HIGH);

  // Calcula la distancia en base a la velocidad del sonido (aprox. 343 m/s)
  // y la mitad del tiempo de ida y vuelta del eco
  float distance = duration * 0.0343 / 2;

  Serial.print("Distancia: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  delay(1000);  // Espera 1 segundo antes de realizar la siguiente medición
}
