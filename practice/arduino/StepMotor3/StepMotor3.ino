#include <Stepper.h>
const int stepsPerRev = 2048;
int anglePerSec=2048/60;
Stepper step28BYJ48(stepsPerRev,8,10,9,11);
long startTime;

void setup() {
  // put your setup code here, to run once:
  step28BYJ48.setSpeed(15);
  Serial.begin(9600);
  startTime = millis();
}

void loop() {
  if((millis()-startTime)>=1000){
    startTime=millis();
    step28BYJ48.step(anglePerSec);
    Serial.println(startTime);
    delay(100);
  }
}
