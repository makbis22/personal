unsigned int adPulse;
unsigned long startT;
unsigned long nowT;
unsigned int flagT = 50;
signed int diffP;
signed int nowP;
signed int prevP;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(A5,INPUT);
  startT = millis();
  prevP = 0;
}

void loop() {
  // put your main code here, to run repeatedly:
  nowT = millis();
  // nowP = analogRead(A5);
  if (nowT - startT >= flagT){
    startT = millis();
    nowP = analogRead(A5);
    diffP = nowP - prevP;
    prevP = nowP;
    // Serial.print("@");
    Serial.println(nowP);
    
    // Serial.println(diffP);

  }
  // delay(100);
}
