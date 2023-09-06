int ranNum;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  randomSeed(analogRead(5));
}

void loop() {
  // put your main code here, to run repeatedly:
  ranNum = random(300);
  Serial.println(ranNum);
  delay(50);
}
