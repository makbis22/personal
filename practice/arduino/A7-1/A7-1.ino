void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()){
    unsigned char inByte = Serial.read();

    Serial.write(inByte);
    Serial.print("(");
    Serial.print(inByte);
    Serial.println(") Received");
  }
}
