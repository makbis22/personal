

void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int readVal = analogRead(A0);
  Serial.println(readVal);
  if (readVal>350)
  digitalWrite(8,HIGH);
  else
digitalWrite(8,LOW);
}
