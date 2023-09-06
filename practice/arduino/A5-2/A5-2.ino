#define Cds A0
int adVal;
int lightVal;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  adVal=analogRead(Cds);
  lightVal=map(adVal,0,1023,100,0);

  //Serial.print("Cds = ");
  //Serial.println(adVal);
  Serial.print("LIGHT = ");
  Serial.print(lightVal);  
  Serial.println("%");
  delay(200);
}
