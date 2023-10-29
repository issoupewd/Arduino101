//traffic control with 2 button cars and passenger
#define RC 2
#define YC 3
#define GC 4

#define RP 8
#define YP 9
#define GP 10
// P for people & C for cars   , R : red , Y : yellow  , G : green
#define BTN1 11  // Button one
#define BTN2 12  // bittton two

void setup() {
  // put your setup code here, to run once:
  pinMode(RC, OUTPUT);
  pinMode(YC, OUTPUT);
  pinMode(GC, OUTPUT);
  pinMode(RP, OUTPUT);
  pinMode(YP, OUTPUT);
  pinMode(GP, OUTPUT);
  pinMode(BTN1, INPUT);
  pinMode(BTN2, INPUT);

  digitalWrite(RC, LOW);
  digitalWrite(YC, LOW);
  digitalWrite(GC, LOW);
  digitalWrite(RP, LOW);
  digitalWrite(YP, LOW);
  digitalWrite(GP, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:


  if (digitalRead(BTN1) || digitalRead(BTN2) == HIGH) {  // digitalRead to read the pin values, HIGH OR LOW , we use if cond

    // between changing
    digitalWrite(GC, LOW);
    digitalWrite(RP, LOW);

    digitalWrite(YC, HIGH);
    digitalWrite(YP, HIGH);
    delay(2000);

    // cars  stop & people go
    digitalWrite(YC, LOW);
    digitalWrite(YP, LOW);

    digitalWrite(RC, HIGH);
    digitalWrite(GP, HIGH);
    delay(4000);

    // between changing
    digitalWrite(RC, LOW);
    digitalWrite(GP, LOW);

    digitalWrite(YC, HIGH);
    digitalWrite(YP, HIGH);
    delay(2000);
    digitalWrite(YC, LOW);
    digitalWrite(YP, LOW);

  } else {  // if it is not HIGH , it's LOW , button not pressed
    digitalWrite(GC, HIGH);
    digitalWrite(RP, HIGH);
  }
  
  delay(2000);
}
