unsigned int adPulse;
unsigned long startT;
unsigned long nowT;
unsigned int flagT = 50;
signed int diffP;
signed int nowP;
signed int prevP;
String rxd;

bool buzzerOn = false;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(A5,INPUT);
  pinMode(7,OUTPUT);
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
    if (buzzerOn) {
      Serial.println(nowP);
    }
    
    // Serial.println(diffP);
  }
  if (Serial.available()){
    rxd = Serial.readStringUntil("\n");}
  if (rxd == String('@')){
    buzzerOn = true;
   } else if (rxd == String('#')) 
   {
      buzzerOn = false;
   }
    rxd = "";
    if (buzzerOn) {
    tone(7, nowP, 100);
  } else {
    noTone(7);
  }
}
  // void serialEvent(){
  // if (Serial.available()){
  //   rxd = Serial.readStringUntil("\n");
    // String cmd = rxd.substring(1,rxd.length()-1);
    // int comma = cmd.indexOf(",");
    // motion = cmd.substring(0,comma).toInt();
    // speed = cmd.substring(comma+1).toInt();}
    
   
  

  // delay(100);

