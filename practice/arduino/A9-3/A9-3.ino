#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd (0x27,16,2);
long Count = 0;

void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.backlight();

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()){
    delay(100);
    lcd.clear();

    while (Serial.available() > 0) lcd.print((char)Serial.read());
  }
}
