#include <SimpleDHT.h>

int DHT_Pin = 9;
SimpleDHT11 dht11(DHT_Pin);
byte temp = 0;
byte humi = 0;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
int err = dht11.read(&temp,&humi,NULL);
if (err != SimpleDHTErrSuccess){
  Serial.print("Read DHT11 Failed, err =");
  Serial.println(err);
  delay(1000);
  return;
}
Serial.print("Sample OK : ");
Serial.print((int)temp); Serial.print(" *C,");
Serial.print((int)humi); Serial.println(" H");

delay(2000);
  
}
