  int count = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(count);
  if (count++>9999) count=0;
  delay(200);
}
