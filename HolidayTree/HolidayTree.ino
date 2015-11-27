#include <StandardCplusplus.h>
#include <vector>


#include <Adafruit_NeoPixel.h>
#include <HolidayTree.h>

HolidayTree tree = HolidayTree(16, 8);

void setup() {
  Serial.begin(9600);
  Serial.println("Hello World");
  tree.init(.05*255);
}
 
void loop() {
  tree.test();
  delay(250);
  tree.reset();
  delay(250);
}
