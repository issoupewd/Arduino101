#include <Servo.h>

Servo servo; // our  servo

int servoPos = 0; //first servo position 
int sDirec = 1; // for controlling  servo step and direction 
unsigned long sMoveT = 20; // base servo moving time , as a servo clock 
unsigned long sMoved = 0; // last move

void setup() {
  // put your setup code here, to run once:
servo.attach(7);  
}

void loop() {
  // put your main code here, to run repeatedly:

  if (millis() - sMoved >= sMoveT) {
    sMoved = millis();
    servo.write(servoPos);
    servoPos += sDirec; // add one degree 
    if (servoPos >= 180 || servoPos <= 0) {
      sDirec *= -1; // reverse direction 
    }
  }

}
