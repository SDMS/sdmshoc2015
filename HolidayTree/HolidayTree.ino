#include <StandardCplusplus.h>
#include <vector>

#include <Adafruit_NeoPixel.h>
#include <HolidayTree.h>

HolidayTree tree = HolidayTree(16, 8);

void setup() {
  Serial.begin(9600);
  Serial.println("Hello World");
  tree.init(10);
}
 
void loop() {
  tree.setLightColor(0, 0, 70, 70, 70);
  tree.show();
  delay(250);
  tree.setLightColor(0, 0, 0, 0, 0);
  tree.show();
  delay(250);
}
