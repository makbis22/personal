

int motion=0; //0:stop 1:cw 2:ccw
int speed=0; //101~255

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(7,OUTPUT);
  digitalWrite(7,LOW);
    pinMode(6,OUTPUT);
  digitalWrite(6,LOW);
    pinMode(5,OUTPUT);
  digitalWrite(5,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  // motorCW(200); delay(2000);
  // motorSTOP(); delay(1000);
  // motorCCW(101); delay(2000);
  // motorSTOP(); delay(1000);
  switch(motion){
    case 0 :
    motorSTOP(); speed=0; break;
    case 1 :
    motorCW(speed); break;
    case 2 : 
    motorCCW(speed); break;
    default:
    motorSTOP(); speed=0; break;
  }
  motorStatus();
  delay(100);
}

void motorCW(int speed){
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  analogWrite(5,speed);
}

void motorCCW(int speed){
    digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  analogWrite(5,speed);
}

void motorSTOP(){
    digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  analogWrite(5,LOW);
}

void serialEvent(){
  if (Serial.available()){
    String rxd = Serial.readStringUntil("\n");
    String cmd = rxd.substring(1,rxd.length()-1);
    int comma = cmd.indexOf(",");
    motion = cmd.substring(0,comma).toInt();
    speed = cmd.substring(comma+1).toInt();

    Serial.println(motion);
    Serial.println(speed);
  }
}

void motorStatus(){
  Serial.print("@");
  Serial.print(motion);
  Serial.print(",");
  Serial.println(speed);
}