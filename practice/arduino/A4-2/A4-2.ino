int count=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (++count>9)
  count =0;
  Serial.print("Count = ");
  Serial.println(count);

  delay(1000); 
  }
