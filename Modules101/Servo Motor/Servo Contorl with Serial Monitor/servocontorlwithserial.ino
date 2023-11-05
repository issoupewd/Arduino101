#include <Servo.h>

Servo servo; 

int pos = 0;    // servo starting position

void setup() {
  servo.attach(6); 
  Serial.begin(9600); 
  servo.write(pos); //first servo position 
  Serial.println("Hello! it is the servo , tell what position should i go to ? ");
}

void loop() {

  while (Serial.available()){
    String phi = Serial.readStringUntil('\n'); // read until the newline
    pos = phi.toInt() ;
    if ( pos >= 0 && pos <= 180) {
        servo.write(pos);  // turn serevo to the inputted position
        Serial.println("Servo angle set to " + phi );
      } else {
        Serial.println("Invalid angle. Enter a value between 0 and 180.");
      }
 
    delay(phi.toFloat()*(10.0/6.0)); // delay for maximum speed
  }
    }


