int segmentPin[] = {2, 3, 4, 6, 5, 7, 8, 9};
int segments = 8;
int Digit[10][8] = {
{0, 0, 0, 0, 0, 0, 1, 1}, //0
{1, 0, 0, 1, 1, 1, 1, 1}, //1
{0, 0, 1, 0, 0, 1, 0, 1}, //2
{0, 0, 0, 0, 1, 1, 0, 1}, //3
{1, 0, 0, 1, 1, 0, 0, 1}, //4
{0, 1, 0, 0, 1, 0, 0, 1}, //5
{0, 1, 0, 0, 0, 0, 0, 1}, //6
{0, 0, 0, 1, 1, 1, 1, 1}, //7
{0, 0, 0, 0, 0, 0, 0, 1}, //8
{0, 0, 0, 0, 1, 0, 0, 1} //9



};
int Count=0;

void setup() {
  // put your setup code here, to run once:
  for (int k = 0 ; k < segments ; k++) {
  pinMode(segmentPin[k], OUTPUT);}
}

void loop() {
  for (int k = 0 ; k < segments ; k++) {
  digitalWrite(segmentPin[k], !Digit[Count][ k ]);
  }
  delay(1000);
  if (++Count>9) {
    Count=0;}

}
