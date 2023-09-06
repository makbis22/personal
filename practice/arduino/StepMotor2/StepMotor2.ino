#include <Stepper.h>
const int stepsPerRev = 2048;
Stepper step28BYJ48(stepsPerRev,8,10,9,11);
long startTime;

void setup() {
  // put your setup code here, to run once:
  step28BYJ48.setSpeed(3);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("CLOCKWISE");
  startTime = millis();
  step28BYJ48.step(stepsPerRev);
  Serial.println(millis()-startTime);
  delay(500);

  Serial.println("COUNTER CLOCKWISE");
  startTime = millis();
  step28BYJ48.step(-stepsPerRev);
  Serial.println(millis()-startTime);
  delay(500);
}
