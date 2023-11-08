int buzzer = 5;
int TRIG = 10;
int ECHO = 11;
void setup() {
  Serial.begin(9600);
  pinMode(TRIG, OUTPUT);  // TRIG como salida
  pinMode(ECHO, INPUT);   // ECHO como entrada
}

void loop() {
  // Genera un pulso de 10 microsegundos en el pin TRIG
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  // Mide el tiempo que tarda en llegar el eco
  long duracion = pulseIn(ECHO, HIGH);

  // Calcula la distancia en base a la velocidad del sonido (aprox. 343 m/s)
  // y la mitad del tiempo de ida y vuelta del eco
  float distancia = duracion * 0.0343 / 2;

  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");

  if(distancia <= 200){

    int poder = map(distancia, 0,200,1,4);
    
    switch(poder){
      case 1: tone(buzzer,400);break;
      case 2: tone(buzzer,300);break;
      case 3: tone(buzzer,200);break;
      case 4: tone(buzzer,100);break;     
    }
  }
  
  
  delay(1000);  // Espera 1 segundo antes de realizar la siguiente medición
}
