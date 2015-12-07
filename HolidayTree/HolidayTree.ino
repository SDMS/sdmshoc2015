#include <StandardCplusplus.h>
#include <vector>

#include <Adafruit_NeoPixel.h>
#include <HolidayTree.h>

HolidayTree tree = HolidayTree(16, 8);

void loop(){}

void setup() {
  Serial.begin(9600);
  tree.init(10);
  elisa();
}

void elisa(){
  tree.setRowColor(7, BLUE);
  tree.setRowColor(6, WHITE);
  tree.setRowColor(5, BLUE);
  tree.setRowColor(4, WHITE);
  tree.setRowColor(3, BLUE);
  tree.setRowColor(2, WHITE);
  tree.setRowColor(1, BLUE);
  tree.setRowColor(0, WHITE);
  tree.show(250);
  tree.setRowColor(0, BLUE);
  tree.setRowColor(1, WHITE);
  tree.setRowColor(2, BLUE);
  tree.setRowColor(3, WHITE);
  tree.setRowColor(4, BLUE);
  tree.setRowColor(5, WHITE);
  tree.setRowColor(6, BLUE);
  tree.setRowColor(7, WHITE);
  tree.show(250);
}

void atif(){
}

void lynn(){
}

void jada(){
}
