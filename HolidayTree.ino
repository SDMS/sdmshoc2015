#include <HolidayTree.h>

HolidayTree tree = HolidayTree(16, 8);

void setup() {
  tree.init(64);
  Serial.begin(9600);
}
 
void loop() {
  tree.test();
  delay(250);
  tree.reset();
  delay(250);
}
