#include <Servo.h>
const int TX = 9; // the TRIG pin
const int RX = 10; // the ECHO pin
long duration;
long distance;
Servo door;
void setup() {
  door.attach(5);
  pinMode(TX, OUTPUT);
  pinMode(RX, INPUT);
  door.write(0); // Initial position
}
void loop() {
  distance = calculateDistance(); 
  if (distance <= 30) {
    door.write(90); // Open door position
  } else {
    door.write(0); // Closed door position
  }
  delay(100); 
}
// Function to calculate distance
long calculateDistance() {
  digitalWrite(TX, LOW);
  delayMicroseconds(2);
  digitalWrite(TX, HIGH);
  delayMicroseconds(10);
  digitalWrite(TX, LOW);
  duration = pulseIn(RX, HIGH);
  return (0.034 * duration) / 2; // Return calculated distance
}