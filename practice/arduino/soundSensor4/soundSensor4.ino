unsigned int sound;
signed int prevSound;
signed int diffSound;

unsigned long sampleMillis = 25;
unsigned long startMillis;
unsigned long nowMillis;

unsigned int signalMax = 0;
unsigned int signalMin = 1024;

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
    if (sound>signalMax) signalMax=sound;
    if (sound<signalMin) signalMin=sound;
    startMillis=nowMillis;

  }
  Serial.print(sound);
  Serial.print(" ");
  Serial.print(diffSound);
  Serial.print(" ");
  Serial.print(signalMin);
  Serial.print(" ");
  Serial.println(signalMax);
  // delay(50);
}
