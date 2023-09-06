#include <SimpleDHT.h>

unsigned int gasVal;

// #define Packet_length 9
// unsigned char TxData[Packet_length] = {'@', 'G', 0x00, 0x00, 0x00, 0x00,0x00,0x00, '\n'};

int DHT_Pin = 7;
SimpleDHT11 dht11(DHT_Pin);
byte temp = 0;
byte humi = 0;
float dIndex = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  gasVal = MQ5_ppm();
 

  int err = dht11.read(&temp,&humi,NULL);
  if (err != SimpleDHTErrSuccess){
    Serial.print("Read DHT11 Failed, err =");
    Serial.println(err);
    delay(1000);
    return;
  }
  
  Serial.print("$");
  Serial.print(temp);
  Serial.print(",");
  Serial.print(humi);
  Serial.print(",");
  Serial.println(gasVal);

  
  
  delay(500);
}

unsigned int MQ5_ppm(){
  unsigned int adVal = analogRead(A0) / 0.6; // 2k//3k
  float ratio = adVal/(614-adVal);
  if (ratio > 6.7) ratio=6.7;
  unsigned int ppm = pow(2.71828182, 0.7201*ratio)*119.37;
  if (ppm > 1000) ppm=1000;
  return ppm;

}
