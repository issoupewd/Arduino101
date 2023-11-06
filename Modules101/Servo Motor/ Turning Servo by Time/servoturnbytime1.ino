#include <Servo.h>
Servo srv;  // Declare your servo

void setup() {
  srv.attach(7);  // Attach the servo to pin 7
  Serial.begin(9600);
  srv.write(0);
  delay(1000);
}

void loop() {
  for (int a = 0; a <= 180; a++) {
    srv.write(a);
    delay(a*(10.0/6.0));
    Serial.print("Angle:");
    Serial.print(a);
    Serial.println(" ");
  }


  for (int a = 180; a > 0; a--) {
    srv.write(a);
    delay(a*(10.0/6.0));
    Serial.print("Angle:");
    Serial.print(a);
    Serial.println(" ");
  }
}
