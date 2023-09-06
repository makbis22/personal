#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd (0x27,16,2);
long Count = 0;

void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);     
  lcd.print("want rest");
  lcd.setCursor(0, 1);
  lcd.print(" Count = ");
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(9,1);
  lcd.print(Count);

  delay(500);
  if (++Count>999999) Count = 0;
}
