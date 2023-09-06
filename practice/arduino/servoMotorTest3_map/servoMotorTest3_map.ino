#include <Servo.h>
#define ServoPin 3
Servo servo;

#define VolPin A0

int Angle = 0;

void setup() {
  // put your setup code here, to run once:
  servo.attach(ServoPin);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int vol = analogRead(VolPin);
  // Angle = vol / 6; //0~1023 -> 0~180
  Angle = map(vol,0,1023,0,180);

  servo.write(Angle);
  Serial.print("angle = ");
  Serial.println(Angle);
  delay(100);
  
}
