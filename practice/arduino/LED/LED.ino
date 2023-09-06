int Redled = 11;
int Greenled = 10;
int Blueled = 9;


void setup() {
  ledOutput(255,0,0);
  delay(1000);
  ledOutput(0,255,0);
  delay(1000);
  ledOutput(0,0,255);
  delay(1000);

}

void loop() {
  for (int i = 0;i<=255;++i){
    ledOutput(255,i,0);
    delay(10);
  }
  for (int i = 0;i<=255;++i){
    ledOutput(0,255,i);
    delay(10);
  }
  for (int i = 0;i<=255;++i){
    ledOutput(i,0,255);
    delay(10);
  }
  for (int i = 0;i<=255;++i){
    ledOutput(i,255,255);
    delay(10);
  }  
  for (int i = 0;i<=255;++i){
    ledOutput(255,i,255);
    delay(10);
  } 
  for (int i = 0;i<=255;++i){
    ledOutput(255,255,i);
    delay(10);
  }  
}

void ledOutput(int Red, int Green, int Blue){
  analogWrite(Redled,Red);
  analogWrite(Greenled,Green);
  analogWrite(Blueled,Blue);
}



