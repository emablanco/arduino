#include <SoftwareSerial.h>
#include <AFMotor.h>

//Solo dos motores
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

//Serial del BT
SoftwareSerial BTSerial(13,2);

int velocidad_ruedas = 200;


bool encendido3 = false;
bool encendido4 = false;


void setup() {

//Velocidad de comunicacion en baudios
 Serial.begin(9600);
 BTSerial.begin(9600);

  motor3.setSpeed(velocidad_ruedas);
  motor4.setSpeed(velocidad_ruedas);

  Serial.println("Inicio auto");
  
}

void loop() {
  
  while(BTSerial.available()==0){}

    String datos = BTSerial.readString();
    Serial.println(datos +" cargados");

    if(datos.equalsIgnoreCase("motor3")){
      encendido3 = !encendido3;
      if(encendido3){
        motor3.run(FORWARD);
      }
      else{
        motor3.run(RELEASE);
      }
    }

    if(datos.equalsIgnoreCase("motor4")){
      encendido4 = !encendido4;
      if(encendido4){
        motor4.run(FORWARD);
      }
      else{
        motor4.run(RELEASE);
      }
    }

  
}
