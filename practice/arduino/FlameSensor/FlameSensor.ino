const int sensMin = 0;
const int sensMax = 1023;

void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  Serial.begin(9600);
}+

void loop() {
  // put your main code here, to run repeatedly:
  int flameVal=analogRead(A0);
  int range = map(flameVal,sensMin,sensMax,0,1);
  int flag = 0;
  //Serial.println(range);
 
  switch (range){
  case 0 :
  Serial.println("!!!!!!!!!!FIRE!!!!!!!!!!");
  digitalWrite(8,HIGH);

  

  break;
  case 1 :
  Serial.println("SAFE ^_^");
  digitalWrite(8,LOW);

  break;
  }
  delay(1);
}


