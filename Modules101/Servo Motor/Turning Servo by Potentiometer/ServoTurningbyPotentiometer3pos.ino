#include <Servo.h>
Servo srv;

int phid;
#define ptm A0  //ptm for potentiometer

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  srv.attach(9);  //the servo
  phid = 0;       //so it will be at 0° when we trun it on
  delay(2000);
}

void loop() {
  int ptm_val = analogRead(ptm);
  int phi = map(ptm_val, 0, 1023, 1, 3);  // phi = angle
  switch (phi) {
    case 1:
      phid = 0;  // phid = angle en degré
      break;
    case 2:
      phid = 90;  //tourne 90°
      break;
    case 3:
      phid = 180;
      break;
  }

  srv.write(phid);
  Serial.print("angle = ");
  Serial.println(phid);
    delay(phid* (10.0 / 6.0));
}

/*
for if we can use :
if (phi==1) {myservo.write(0);}
elseif (phi==2) {myservo.write(45);}
else {myservo.write(180);}
*/
