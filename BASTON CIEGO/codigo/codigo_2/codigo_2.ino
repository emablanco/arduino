// Librería necesaria para controlar el sensor de ultrasonido
#include <NewPing.h>

// Definición de los pines de conexión
#define TRIGGER_PIN 2
#define ECHO_PIN 3
#define DISTANCIA_MAXIMA 200

int buzzer =3;

// Objeto NewPing para controlar el sensor
NewPing sonar(TRIGGER_PIN, ECHO_PIN, DISTANCIA_MAXIMA);

void setup() {
  pinMode(buzzer, OUTPUT);
  // Inicialización del puerto serie
  Serial.begin(9600);
}

void loop() {
  // Realizar una medición de distancia
  unsigned int distancia = sonar.ping_cm();

  // Mostrar la distancia medida por el sensor
  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");

    int poder = map(distancia, 0,200,1,4);
     
    switch(poder){
      case 1: tone(buzzer,400);break;
      case 2: tone(buzzer,300);break;
      case 3: tone(buzzer,200);break;
      case 4: tone(buzzer,100);break;     
    }
  

  // Esperar un breve período de tiempo antes de realizar la siguiente medición
  delay(500);
}
