// C++ code
//
const byte button_pin =2;
const byte ledPin = 8;
const byte soundPin = 7;
volatile byte state = LOW;

void setup()
{
  pinMode(button_pin,INPUT_PULLUP);
  pinMode(ledPin,OUTPUT);
  pinMode(soundPin,OUTPUT);
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(button_pin),
                  inter_func,RISING);
  
}

void loop()
{
  digitalWrite(ledPin, state);

  digitalWrite(soundPin, state);
  Serial.println(state);

}

void inter_func(){
  state =! state;}