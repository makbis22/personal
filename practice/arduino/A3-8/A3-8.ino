// C++ code
//

#define LED_1_Pin 5
#define LED_2_Pin 6
#define LED_3_Pin 7
#define SW1_Pin 11

int LED_Mode=0;
int SW1=1;




void setup()
{
  pinMode(LED_1_Pin,OUTPUT);
  pinMode(LED_2_Pin,OUTPUT);
  pinMode(LED_3_Pin,OUTPUT);
  pinMode(SW1_Pin,INPUT);

}

void loop()
{
	SW1=digitalRead(SW1_Pin);
  
  if (SW1 == 0){
    LED_Mode = LED_Mode + 1 ;
    if (LED_Mode>4) LED_Mode=1;
  }
  
  if (LED_Mode==1){
  	digitalWrite(LED_1_Pin,HIGH);
    digitalWrite(LED_2_Pin,LOW);
    digitalWrite(LED_3_Pin,LOW);
  
  }
  else if (LED_Mode==2){
  	digitalWrite(LED_1_Pin,LOW);
    digitalWrite(LED_2_Pin,HIGH);
    digitalWrite(LED_3_Pin,LOW);
    	
    
  }
  else if (LED_Mode==3){
  	digitalWrite(LED_1_Pin,LOW);
    digitalWrite(LED_2_Pin,LOW);
    digitalWrite(LED_3_Pin,HIGH);
    	
    
  }  
  else {
  	digitalWrite(LED_1_Pin,LOW);
    digitalWrite(LED_2_Pin,LOW);
    digitalWrite(LED_3_Pin,LOW);  
	LED_Mode=0;
  
  }
  
  delay(150);
      
}