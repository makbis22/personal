#include <LiquidCrystal_I2C.h>

#include <Servo.h>
#define ServoPin 3
Servo servo;

#define VolPin A0

LiquidCrystal_I2C lcd(0x27,16,2);

int Angle = 0;

void setup() {
  // put your setup code here, to run once:
  servo.attach(ServoPin);
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(1,0);
  lcd.print("SERVO MOTOR");
}

void loop() {
  // put your main code here, to run repeatedly:
  int vol = analogRead(VolPin);
  // Angle = vol / 6; //0~1023 -> 0~180
  Angle = map(vol,0,1023,0,180);

  servo.write(Angle);
  delay(50);

  SelcdDisplay(Angle);
  
}

void SelcdDisplay(int Angle){
  Serial.print("angle = ");
  Serial.println(Angle);

  lcd.setCursor(2,0);
  lcd.print("SERVO MOTOR");
  lcd.setCursor(2,1);
  lcd.print("angle = ");
  lcd.print(String(Angle)+char(0xdf));
  delay(50);
  lcd.clear();
}
