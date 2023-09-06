
int respin=A5;
int LED1 = 11;
int LED2 = 10;
int LED3 = 9;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(respin,INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(respin));
  delay(100);
  
  if(analogRead(respin)<300){
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
    delay(100);
  }
  else if (300<analogRead(respin) && analogRead(respin)<=335){
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
    delay(100);    
  }
  else if (335<analogRead(respin) && analogRead(respin)<=370){
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,LOW);
    delay(100);    
  }
  else {
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
    delay(100);    
  }  
}
