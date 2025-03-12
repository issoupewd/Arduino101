#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels
// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
// The pins for I2C are defined by the Wire-library. 
// On an arduino UNO:       A4(SDA), A5(SCL)
// On an arduino MEGA 2560: 20(SDA), 21(SCL)
// On an arduino LEONARDO:   2(SDA),  3(SCL), ...
#define OLED_RESET -1 // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_ADDRESS 0x3c 
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);


void setup() {
  // put your setup code here, to run once:
display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS);
delay(100);

}

void loop() {
  // put your main code here, to run repeatedly:
display.clearDisplay();
display.setTextSize(1);
display.setTextColor(WHITE);
display.setCursor(0,0);
display.println("Hello World!");
display.display();
display.setTextSize(2);
display.println("test test test");
display.display();
delay(4000);
display.clearDisplay();

display.setTextSize(1);
display.setCursor(12,24);
display.println("Arduino Workshop");
display.println("by CELEC");
display.setCursor(50,10);
display.println("this is oled");
display.display();
delay(3000); 
display.clearDisplay();
display.setTextSize(4);
display.setCursor(5,16);
display.println("CELEC");
display.display();
delay(4000);




}
