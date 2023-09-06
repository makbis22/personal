#define RAIN_STEAM A0


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(RAIN_STEAM,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("RAIN/STEAM : ");
  Serial.println(analogRead(RAIN_STEAM));
  delay(500);
}

