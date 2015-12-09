#include <StandardCplusplus.h>
#include <vector>

#include <Adafruit_NeoPixel.h>
#include <HolidayTree.h>

HolidayTree tree = HolidayTree(16, 8);

void loop(){}

void setup() {
  Serial.begin(9600);
  tree.init(10);

  Elisac();
}


void Elisac(){


 tree.setLightColor(1,4,BLUE);
 tree.show(500); 
}

