#define DUST_LED A2
#define DUST_OUT A3

int DustADC=0;
float dustDensity=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(DUST_LED, OUTPUT);
  pinMode(DUST_OUT, INPUT);
  digitalWrite(DUST_LED, HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  DustADC=SensorRead( );
  Serial.print("Dust[ug/m3]:");
  dustDensity = DustDensity_ugPm3(DustADC);
  Serial.print(dustDensity);

  Serial.print(" = ");

  Serial.print("@");
  Serial.print("D");
  Serial.print(dustDensity);

  Serial.print("\n");


  delay(2000);

}

unsigned int SensorRead(void){
  unsigned int sensor_data;

  digitalWrite(DUST_LED,LOW);
  delayMicroseconds(280);
  sensor_data = analogRead(DUST_OUT);
  delayMicroseconds(40);
  digitalWrite(DUST_LED,HIGH);
  delayMicroseconds(9680);

  return sensor_data;

}

float DustDensity_ugPm3(int RawVal) { 
  float Dust=(float)RawVal*(5.0/1023.0)/5.8-0.1;
  return Dust*1000;
}