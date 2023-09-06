#include <SPP.h>
#include <SPI.h>

USB Usb;
BTD Btd(&Usb);
SPP SerialBT(&Btd, "YOONPAPER", "1234");

#define SPP_Packet_length 5

unsigned char SPP_data[SPP_Packet_length] = {'@', 'D', 0x03, 0xff, '\n' };
unsigned char SPP_flag = 0;

#define DUST_LED A2
#define DUST_OUT A3

int DustADC=0;
float dustDensity=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  if (Usb.Init( ) == -1) {
    Serial.println(F("\r\nOSC did not start"));
    while (1); 
    }
  Serial.println(F("\r\nSPP Bluetooth Library Started"));
  pinMode(DUST_LED, OUTPUT);
  pinMode(DUST_OUT, INPUT);
  digitalWrite(DUST_LED, HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  Usb.Task( );
  if (SerialBT.connected) {
    SPP_data[2]=(unsigned char)dustDensity/256;
    SPP_data[3]=(unsigned char)dustDensity%256;
    SerialBT.write(SPP_data, SPP_Packet_length);
    Serial.print("Dust[ug/m3] : ");
    Serial.println(dustDensity);
    }
  DustADC=SensorRead( );
  dustDensity = DustDensity_ugPm3(DustADC);
  delay(1000);
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