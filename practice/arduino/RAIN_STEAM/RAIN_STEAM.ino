#define CDS A0


void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(CDS,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int ad_Cds=analogRead(CDS);
  Serial.println(ad_Cds);
  delay(500);
}

