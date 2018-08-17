//This is an example of HSV write

#include <Adafruit_NeoPixel.h>
#define PIN 7
#define LED_NUM 100

Adafruit_NeoPixel strip = Adafruit_NeoPixel(LED_NUM, PIN, NEO_GRB + NEO_KHZ800); //Левая лента

void setup() {
  strip.begin();
  strip.show();
  for (int i; i < 50; i++) {
    strip.setPixelColorHsv(i, i*30, 255, i*5);
  }
  strip.show();
}
void loop() {
  // put your main code here, to run repeatedly:

}
