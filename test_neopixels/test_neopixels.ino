// Simple NeoPixel test.  Lights just a few pixels at a time so a
// 1m strip can safely be powered from Arduino 5V pin.  Arduino
// may nonetheless hiccup when LEDs are first connected and not
// accept code.  So upload code first, unplug USB, connect pixels
// to GND FIRST, then +5V and digital pin 6, then re-plug USB.
// A working strip will show a few pixels moving down the line,
// cycling between red, green and blue.  If you get no response,
// might be connected to wrong end of strip (the end wires, if
// any, are no indication -- look instead for the data direction
// arrows printed on the strip).
 
#include <Adafruit_NeoPixel.h>
 
#define PIN      6
#define N_LEDS   8
 
Adafruit_NeoPixel strip = Adafruit_NeoPixel(N_LEDS, PIN, NEO_GRB + NEO_KHZ800);

int rgbColor[3] = {50, 0, 0};

void setup() {
  strip.begin();
  strip.setBrightness(0.10*255);
  strip.show();
  Serial.begin(9600);
}
 
void loop() {
  for(int decColor = 0; decColor < 3; decColor +=1) {
    int incColor = decColor == 2? 0 : decColor + 1;
    
    for(int i = 0; i < 255; i +=1){
      rgbColor[decColor] -= 1;
      rgbColor[incColor] += 1;
      chase(strip.Color(rgbColor[0], rgbColor[1], rgbColor[2]));
      delay(100);
    }
    
    Serial.print(rgbColor[0]);
    Serial.print(" ");
    Serial.print(rgbColor[1]);
    Serial.print(" ");
    Serial.println(rgbColor[2]);
    
  }
}
 
static void chase(uint32_t c) {
  for(uint16_t i=0; i<strip.numPixels()+4; i++) {
      strip.setPixelColor(i  , c); // Draw new pixel
      strip.setPixelColor(i-4, 0); // Erase pixel a few steps back
      strip.show();
      delay(25);
  }
}
