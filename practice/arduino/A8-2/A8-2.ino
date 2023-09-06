#define Tilt 3
int TiltState=0;

void setup( ) {
  Serial.begin(9600);
  pinMode(Tilt, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(Tilt), Tilt_ISR, RISING);
}

void loop( ) {
  if (TiltState) {
  Serial.println("Tilt on");
  TiltState=0; } 
  delay(300);
}

void Tilt_ISR( ){
TiltState=1;
}