unsigned int sound;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(A1,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  sound = analogRead(A1);
  Serial.print(millis());
  Serial.print(" : ");
  Serial.println(sound);
  delay(50);
}
