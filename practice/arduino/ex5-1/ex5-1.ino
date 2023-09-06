int ledA = 3;
int ledB = 5;
int brightness = 0;
int increment = 1;

int Redled = = 11;
int Greenled = 10;
int Blueled = 9;


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  analogWrite(ledA,brightness) ;
  analogWrite(ledB,255-brightness);

  brightness=brightness +increment;
  if ((brightness>=255)||(brightness<=0)){
    increment = -increment;
  }
  delay(10);

}
