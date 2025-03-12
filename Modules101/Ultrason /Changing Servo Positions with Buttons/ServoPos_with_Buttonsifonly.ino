#include <Servo.h>
Servo srv;

int phid;
#define BTN1 3
#define BTN2 5
#define BTN3 7
#define BTN4 9

void setup() {
  // put your setup code here, to run once:
  srv.attach(11);  //the servo
  phid = 0;        //so it will be at 0° when we trun it on
  srv.write(phid);
  delay(2000);
}

void loop() {
  if (digitalRead(BTN1) == HIGH) {  // digitalRead to read the pin values, HIGH OR LOW , we use if cond
    phid = 0;
  } else if (digitalRead(BTN2) == HIGH) {
    phid = 45;
  } else if (digitalRead(BTN3) == HIGH) {
    phid = 90;
  } else if (digitalRead(BTN4) == HIGH) {
    phid = 180;
  }
  srv.write(phid);
}