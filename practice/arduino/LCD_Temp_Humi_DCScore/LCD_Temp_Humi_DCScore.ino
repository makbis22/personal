#include <SimpleDHT.h>
#include <LiquidCrystal_I2C.h>

int DHT_Pin = 9;
SimpleDHT11 dht11(DHT_Pin);
byte temp = 0;
byte humi = 0;
float dIndex = 0;

LiquidCrystal_I2C lcd (0x27,16,2);

void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);     
  lcd.print("temp=");
  lcd.setCursor(8,0);
  lcd.print("humi=");
  lcd.setCursor(0,1);
  lcd.print("DC Score = ");
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
dIndex = DIndex(temp,humi);
Serial.print("Sample OK : ");
Serial.print((int)temp); Serial.print(" *C, ");
Serial.print((int)humi); Serial.print(" H,  ");
Serial.print(dIndex); Serial.println("(Discomfort score)");
  lcd.setCursor(5,0);
  lcd.print((int)temp); 
  lcd.setCursor(13,0); 
  lcd.print((int)humi); 
  lcd.setCursor(11, 1);
  lcd.print(dIndex);

delay(1000);
  
}

float DIndex(float t, float h){
  return (1.8f*t)-(0.55*(1-h/100.0f)*(1.8f*t-26))+32;
}