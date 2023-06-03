#include <SoftwareSerial.h>
#include <AFMotor.h>

//Solo dos motores
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

//Serial del BT
SoftwareSerial BTSerial(13,2);

//velocidad de las ruedas
int velocidad_ruedas = 200;

//valores para cambiar la marcha
bool mover3 = false;
bool mover4 = false;

void setup() {

//Velocidad de comunicacion en baudios
 Serial.begin(9600);
 BTSerial.begin(9600);

//configurar la velocidad
  motor3.setSpeed(velocidad_ruedas);
  motor4.setSpeed(velocidad_ruedas);

  Serial.println("Inicio auto");
  
}

void loop() {

  //sino hay datos en el BTSerial no continua el codigo
  while(BTSerial.available()==0){}

  String datos = BTSerial.readString();
  
  Serial.println("string recibido: "+datos);
  
  setMovimiento(datos);
  
}

void setMovimiento(String datos){

  Serial.println("Seteando movimiento");
  
  if(datos.equalsIgnoreCase("adelante"))
    moverAdelante();
  
  if(datos.equalsIgnoreCase("atras"))
    moverAtras();
  
  if(datos.equalsIgnoreCase("derecha"))
    moverDerecha();
  
  if(datos.equalsIgnoreCase("izquierda"))
    moverIzquierda();

  if(datos.equalsIgnoreCase("detener"))
    detener();
}

void detener(){
  Serial.println("DETENER RUEDAS");
  motor3.run(RELEASE);
  motor4.run(RELEASE);
}
void moverAdelante(){

  Serial.println("Moviendo adelante");
  if(!mover3){
    mover3 = !mover3;
    motor3.run(RELEASE);
  }
  if(!mover4){
    mover4 = !mover4;
    motor4.run("RELEASE");
  }

  delay(250);
  
  motor3.run(FORWARD);
  motor4.run(FORWARD);
}
  
void moverAtras(){
  
  Serial.println("Moviendo atras");
  
  if(mover3){
    mover3 = !mover3;
    motor3.run(RELEASE);
  }
  
  if(mover4){
    mover4 = !mover4;
    motor4.run("RELEASE");
  } 

  delay(250);
  
  motor3.run(BACKWARD);
  motor4.run(BACKWARD);
}

void moverIzquierda(){
  
  Serial.println("Moviendo izquierda");
  
  if(mover3){
    mover3 = !mover3;
    motor3.run(RELEASE);
  }

  if(!mover4){
    mover4 = !mover4;
    motor4.run("RELEASE");
  } 

  delay(250);
  
  motor3.run(BACKWARD);
  motor4.run(FORWARD);

  delay(3000);

  motor3.run(RELEASE);
  motor4.run(RELEASE);
  
  delay(250);
  
  motor3.run(FORWARD);
  motor4.run(FORWARD);

}

void moverDerecha(){
  
  Serial.println("Moviendo derecha");
  
  if(!mover3){
    mover3 = !mover3;
    motor3.run(RELEASE);
  }

  if(mover4){
    mover4 = !mover4;
    motor4.run("RELEASE");
  } 

  delay(250);
  
  motor3.run(FORWARD);
  motor4.run(BACKWARD);

  delay(3000);

  motor3.run(RELEASE);
  motor4.run(RELEASE);
  
  delay(250);
  
  motor3.run(FORWARD);
  motor4.run(FORWARD);
}
