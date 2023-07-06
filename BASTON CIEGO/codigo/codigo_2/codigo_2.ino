// Librería necesaria para controlar el sensor de ultrasonido
#include <NewPing.h>

// Definición de los pines de conexión
#define TRIGGER_PIN 2
#define ECHO_PIN 3
#define DISTANCIA_MAXIMA 200

// Objeto NewPing para controlar el sensor
NewPing sonar(TRIGGER_PIN, ECHO_PIN, DISTANCIA_MAXIMA);

void setup() {
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

  // Esperar un breve período de tiempo antes de realizar la siguiente medición
  delay(500);
}
