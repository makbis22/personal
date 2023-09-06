unsigned int adPulse;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(A5,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  adPulse = analogRead(A5);
  Serial.println(adPulse);
  delay(100);
}
