#include <Servo.h>

Servo srv;

int phid;
#define BTN1 3
#define BTN2 5
#define BTN3 7
#define BTN4 9

void setup() {
  srv.attach(11);  // the servo
  phid = 0;        // so it will be at 0° when we turn it on
  srv.write(phid);
  delay(2000);
}

void loop() {
  for (int i = 0; i < 4; i++) {
    if (digitalRead(i * 2 + BTN1) == HIGH) { 
      switch (i) {
        case 0: phid = 0; break;
        case 1: phid = 45; break;
        case 2: phid = 90; break;
        case 3: phid = 180; break;
      }
    }
  }

  srv.write(phid);

}
