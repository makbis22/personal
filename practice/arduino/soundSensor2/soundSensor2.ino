unsigned int sound;
unsigned long sampleMillis = 50;
unsigned long startMillis;
unsigned long nowMillis;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(A1,INPUT);
  startMillis = millis();
}

void loop() {
  // put your main code here, to run repeatedly:
  nowMillis=millis();
  if (nowMillis-startMillis >= sampleMillis){
    sound = analogRead(A1);
    startMillis=nowMillis;
  }
  Serial.print(nowMillis);
  Serial.print(" : ");
  Serial.println(sound);
  // delay(50);
}
