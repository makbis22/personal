int pushBtn = 2;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pushBtn, INPUT);
}

void loop() {
  int btnState = digitalRead(pushBtn);
  Serial.println(btnState);
  delay(1);

}
