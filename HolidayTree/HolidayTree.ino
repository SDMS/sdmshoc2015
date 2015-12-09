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
    Elisac();
  }
}


void Elisac(){

  tree.setColumnColor(0, RED);
 tree.setColumnColor(1, RED);
 tree.setColumnColor(2, RED);
 tree.setColumnColor(3, RED);
 tree.setColumnColor(4, RED);
 tree.setColumnColor(5, WHITE);
 tree.setColumnColor(6, BLUE);
 tree.setColumnColor(7, BLUE);
 tree.setColumnColor(8, BLUE);
 tree.setColumnColor(9, BLUE);
 tree.setColumnColor(10, BLUE);
 tree.setColumnColor(11, GREEN);
 tree.setColumnColor(12, GREEN);
 tree.setColumnColor(13, GREEN); 
 tree.setColumnColor(14, GREEN);
 tree.setColumnColor(15, GREEN); 
 tree.show(1000);
 tree.setColumnColor(0, BLUE);
 tree.setColumnColor(1, BLUE);
 tree.setColumnColor(2, BLUE);
 tree.setColumnColor(3, BLUE);
 tree.setColumnColor(4, BLUE);
 tree.setColumnColor(5, GREEN);
 tree.setColumnColor(6, GREEN);
 tree.setColumnColor(7, GREEN);
 tree.setColumnColor(8, GREEN);
 tree.setColumnColor(9, GREEN);
 tree.setColumnColor(10, WHITE);
 tree.setColumnColor(11, RED);
 tree.setColumnColor(12, RED);
 tree.setColumnColor(13, RED);
 tree.setColumnColor(14, RED);
 tree.setColumnColor(15, RED);
 tree.show(1000);
 tree.setColumnColor(0, GREEN);
 tree.setColumnColor(1, GREEN);
 tree.setColumnColor(2, GREEN); 
 tree.setColumnColor(3, GREEN);
 tree.setColumnColor(4, GREEN);
 tree.setColumnColor(5, RED);
 tree.setColumnColor(6, RED);
 tree.setColumnColor(7, RED);
 tree.setColumnColor(8, RED);
 tree.setColumnColor(9, RED); 
 tree.setColumnColor(10, WHITE); 
  tree.setColumnColor(11, BLUE);
 tree.setColumnColor(12, BLUE);
 tree.setColumnColor(13, BLUE); 
 tree.setColumnColor(14, BLUE);
 tree.setColumnColor(15, BLUE);
  tree.show(1000);  
    for(int i = 0; i < 8; i++){
  tree.setLightColor(i + 7,   i, MAGENTA);
    }
 }

void Set_diagonal(int num, COLORS c){

 for(int i = 0; i < 8; i++){
 
 } 
 }

