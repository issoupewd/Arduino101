#include <Servo.h>

#define PTOM A0
Servo servo;
int pos = 0;  // servo starting position

void setup() {
  servo.attach(9);
  servo.write(pos);  //first servo position
}
void loop() {
  int ptomValue = analogRead(PTOM);
   pos = map(ptomValue, 0, 1023, 0, 180);
  servo.write(pos);
  delay(pos* (10.0 / 6.0));
}
