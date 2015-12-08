#include <StandardCplusplus.h>
#include <vector>

#include <Adafruit_NeoPixel.h>
#include <HolidayTree.h>

HolidayTree tree = HolidayTree(16, 8);

void loop(){}

void setup() {
  Serial.begin(9600);
  tree.init(10);
  zeynabmn();
}

void zeynabmn(){

  tree.setRowColor(4,GREEN);
  tree.show(500);
  
}

