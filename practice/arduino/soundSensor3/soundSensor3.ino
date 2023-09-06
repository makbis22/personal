unsigned int sound;
signed int prevSound;
signed int diffSound;

unsigned long sampleMillis = 50;
unsigned long startMillis;
unsigned long nowMillis;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(A1,INPUT);
  startMillis = millis();
  prevSound = 0;
}

void loop() {
  // put your main code here, to run repeatedly:
  nowMillis=millis();
  if (nowMillis-startMillis >= sampleMillis){
    sound = analogRead(A1);
    diffSound=sound-prevSound;
    prevSound=sound;
    startMillis=nowMillis;

  }
  Serial.print(sound);
  Serial.print(" - ");
  Serial.println(diffSound);
  // delay(50);
}
