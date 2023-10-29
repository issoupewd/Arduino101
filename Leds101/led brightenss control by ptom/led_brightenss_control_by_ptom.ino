#define PTOM A4
#define led 5

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int ptomValue = analogRead(PTOM);
  Serial.println(ptomValue);
  int brightnessLVL = map(ptomValue, 0, 1023, 0, 255);
  analogWrite(led, brightnessLVL);
}