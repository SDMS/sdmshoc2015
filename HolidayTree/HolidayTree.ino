#include <StandardCplusplus.h>
#include <vector>

#include <Adafruit_NeoPixel.h>
#include <HolidayTree.h>

HolidayTree tree = HolidayTree(16, 8);

void loop(){}

void setup() {
  Serial.begin(9600);
  tree.init(10);
  while(true){
    jadam();
    tree.reset();
    lynnlb();
    tree.reset();
  }
}

void lynnlb() {
  tree.setRowColor(6, MAGENTA);
  tree.setRowColor(5, PURPLE);
  tree.show(500);
}


void jadam(){
 tree.setRowColor(7, CYAN);
 tree.setRowColor(1, BLUE);
 tree.setRowColor(2,BLUE);
 tree.show(500);
}

