#define CDS A0

int ADC_Data[20]={3,45,75,90,109,123,135,144,157,169,178,241,281,322,346,365,393,402,409,422};
int LUX_Data[20]={0, 1, 2, 3,  4,  5,  6,  7,  8,  9, 10, 20, 30, 40, 50, 60, 70, 80, 90,100};

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(CDS,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int ad_Cds=analogRead(CDS);
  int lux = AdcLux(ad_Cds);
  Serial.print(ad_Cds);
  Serial.print(" - ");
  Serial.println(lux);
  delay(250);
}

int AdcLux(int AdValue){
  int LuxVal=0;
  char k;

  for (k=0;k<20;k++) if (AdValue<ADC_Data[k]) break;
  if (k<2) LuxVal = 0;
  else if (k<11) LuxVal = LUX_Data[k-1];
  else if (k>19) LuxVal = 100;
  else {
    LuxVal=LUX_Data[k-1] + (LUX_Data[k]-LUX_Data[k-1]) * (AdValue-ADC_Data[k-1])/(ADC_Data[k]-ADC_Data[k-1]);
  }
  return LuxVal;
}

