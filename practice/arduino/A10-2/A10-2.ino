#include <SimpleDHT.h>
#include <LiquidCrystal_I2C.h>

int DHT_Pin = 9;
SimpleDHT11 dht11(DHT_Pin);
byte temp = 0;
byte humi = 0;

LiquidCrystal_I2C lcd (0x27,16,2);

void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);     
  lcd.print("temp = ");
  lcd.setCursor(0,1);
  lcd.print("humi = ");
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
int err = dht11.read(&temp,&humi,NULL);
if (err != SimpleDHTErrSuccess){
  Serial.print("Read DHT11 Failed, err =");
  Serial.println(err);
  delay(1000);
  return;
}
Serial.print("Sample OK : ");
Serial.print((int)temp); Serial.print(" *C, ");
Serial.print((int)humi); Serial.println(" H");
  lcd.setCursor(8,0);
  lcd.print((int)temp); lcd.print (" C");
  lcd.setCursor(8,1); 
  lcd.print((int)humi); lcd.print(" H");

delay(1000);
  
}
