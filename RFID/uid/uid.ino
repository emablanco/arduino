#include <SPI.h>
#include <MFRC522.h>

#define RST_PIN         9       // Pin de reinicio (conectar a RST en el módulo RFID)
#define SS_PIN          10      // Pin SS (conectar a SDA en el módulo RFID)

MFRC522 mfrc522(SS_PIN, RST_PIN);  // Inicializa la librería MFRC522

void setup() {
  Serial.begin(9600);
  SPI.begin();
  mfrc522.PCD_Init();
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
    mfrc522.PICC_HaltA();   // Detiene la comunicación del tarjeta
  }
}

