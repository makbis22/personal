#include <SPI.h>

#include <MFRC522.h>
#include <MFRC522Extended.h>
#include <deprecated.h>
#include <require_cpp11.h>

#define SS_PIN 10
#define RST_PIN 9

MFRC522 mfrc522 (SS_PIN,RST_PIN);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  SPI.begin();
  mfrc522.PCD_Init();
  
  Serial.println("READI");
}

void loop() {
  // put your main code here, to run repeatedly:
  if (!mfrc522.PICC_IsNewCardPresent()) return;
  if(!mfrc522.PICC_ReadCardSerial()) return;
  
  Serial.print("UID : ");
  for (byte k = 0;k<mfrc522.uid.size;k++){
    Serial.print(mfrc522.uid.uidByte[k]<0x10 ? " 0":" ");
    Serial.print(mfrc522.uid.uidByte[k],HEX);
   
  }
  Serial.println();
}
