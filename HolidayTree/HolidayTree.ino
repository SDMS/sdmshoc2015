#include <StandardCplusplus.h>
#include <vector>

#include <Adafruit_NeoPixel.h>
#include <HolidayTree.h>

HolidayTree tree = HolidayTree(16, 8);

void loop(){}

void setup() {
  Serial.begin(9600);
  tree.init(10);
  lynnlb();
}
void lynnlb() {
  tree.setRowColor(6,MAGENTA);
  tree.setRowColor(5,PURPLE);
  tree.setRowColor(0,RED);
  tree.show(500);
  
  
  
  }
