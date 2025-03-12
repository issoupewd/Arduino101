
const int TX = 9;   //the TRIG pin
const int RX = 10;  // the ECHO pin
long duration;
int distance;
#define tit 3
void setup() {
  // put your setup code here, to run once:

  pinMode(TX, OUTPUT);
  pinMode(RX, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  distance = discalc();
  if (distance <= 30) {

    int buzzLVL = map(distance, 0, 30, 0, 255);
    analogWrite(tit, buzzLVL);
  } else {
    analogWrite(tit, 0);
  }
}

// distance
int discalc() {
  digitalWrite(TX, LOW);
  delayMicroseconds(2);
  digitalWrite(TX, HIGH);
  delayMicroseconds(10);
  digitalWrite(TX, LOW);
  duration = pulseIn(RX, HIGH);
  distance = 0.034 * duration / 2;

  return distance;
}
