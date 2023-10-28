
#define LED 13
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED, LOW);
}

void loop() {
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED, HIGH);
  delay(1000);  // Wait for 1000 millisecond(s)
  // turn the LED off by making the voltage LOW
  digitalWrite(LED, LOW);
  delay(1000);  // Wait for 1000 millisecond(s)
}