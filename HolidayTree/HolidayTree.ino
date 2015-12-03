#include <StandardCplusplus.h>
#include <vector>

#include <Adafruit_NeoPixel.h>
#include <HolidayTree.h>

HolidayTree tree = HolidayTree(16, 8);

void setup() {
  Serial.begin(9600);
  tree.init(10);
}

void elisa(){
  tree.setRowColor(7, RED);
  tree.setRowColor(6, WHITE);
  tree.setRowColor(5, RED);
  tree.setRowColor(4, WHITE);
  tree.setRowColor(3, RED);
  tree.setRowColor(2, WHITE);
  tree.setRowColor(1, RED);
  tree.setRowColor(0, WHITE);
  tree.show(250);
  tree.setRowColor(0, RED);
  tree.setRowColor(1, WHITE);
  tree.setRowColor(2, RED);
  tree.setRowColor(3, WHITE);
  tree.setRowColor(4, RED);
  tree.setRowColor(5, WHITE);
  tree.setRowColor(6, RED);
  tree.setRowColor(7, WHITE);
  tree.show(250);
}

void atif(){
}

void lynn(){
}

void jada(){
}

void loop() {
  elisa();
  delay(600000);
}
