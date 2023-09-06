#include <LiquidCrystal_I2C.h>

#define LM35 A0

LiquidCrystal_I2C lcd (0x27,16,2);



void setup() {
  // put your setup code here, to run once:

  analogReference(DEFAULT); 
  lcd.init();
  lcd.backlight();



  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int analogInput = analogRead(LM35);
  float tempC = (analogInput*5.0*100.0) / 1024.0;
  float tempF = (tempC*9.0/5.0)+32.0;
  Serial.println(analogInput);
  String(ADCstr)=String(analogInput);

  lcd.setCursor(0, 0);
  lcd.print("ADC = "+ ADCstr);
  float TempValue = ((analogInput * 5.0 *100.0) 
  /1024.0); 
  String(Tempstr)=String(TempValue);
  lcd.setCursor(0, 1);
  lcd.print("Temp. is "+ Tempstr +(char)0xDF+"C" );
  delay(1000);
  lcd.clear();

}
