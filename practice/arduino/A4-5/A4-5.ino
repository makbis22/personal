


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int k =0; k<720;k++)
  Serial.println(sin(k*(PI/180)));
}
