#include <SPI.h>
#include <MFRC522.h>

#define RST_PIN         9          // Pin de reinicio (conectar a RST en el módulo RFID)
#define SS_PIN          10         // Pin SS (conectar a SDA en el módulo RFID)
#define LED_PIN         13         // Pin del LED

MFRC522 mfrc522(SS_PIN, RST_PIN);  // Inicializa la librería MFRC522

void setup() {
  Serial.begin(9600);
  SPI.begin();
  mfrc522.PCD_Init();
  pinMode(LED_PIN, OUTPUT);
  Serial.println("Lector RFID listo");
}

void loop() {
  if (mfrc522.PICC_IsNewCardPresent() && mfrc522.PICC_ReadCardSerial()) {
    Serial.print("Tarjeta detectada. UID: ");
    for (byte i = 0; i < mfrc522.uid.size; i++) {
      Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
      Serial.print(mfrc522.uid.uidByte[i], HEX);
    }
    Serial.println();
    
    // Compara el UID detectado con los UID definidos
    if (checkUID(mfrc522.uid)) {
      digitalWrite(LED_PIN, HIGH); // Enciende el LED
      Serial.println("Encendiendo el LED");
    } else {
      digitalWrite(LED_PIN, LOW); // Apaga el LED
      Serial.println("Apagando el LED");
    }
    
    mfrc522.PICC_HaltA();   // Detiene la comunicación del tarjeta
  }
}

bool checkUID(MFRC522::Uid uid) {
  // Define los UID específicos que deseas detectar
  // Cambia estos valores según los UID de tus tarjetas
  byte uid1[] = {0x01, 0x23, 0x45, 0x67};
  byte uid2[] = {0x89, 0xAB, 0xCD, 0xEF};
  
  if (uid.size != 4) {
    return false;
  }
  
  for (byte i = 0; i < 4; i++) {
    if (uid.uidByte[i] != uid1[i] && uid.uidByte[i] != uid2[i]) {
      return false;
    }
  }
  
  return true;
}

