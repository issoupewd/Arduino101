#define led 5

int brightnessLVL = 0;
int brightnesSTEP = 2;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  analogWrite(led, brightnessLVL);
  brightnessLVL = brightnessLVL + brightnesSTEP;
  if (brightnessLVL == 255) {
    brightnessLVL = 0;
  }
  delay(50);
}