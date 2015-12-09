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
    for(int i = 0; i < 8; i++){
  tree.setLightColor(i + 7,   i, MAGENTA);
    }


  Set_diagonal(2, WHITE);
  Set_diagonal(1, RED);
  Set_diagonal(0, YELLOW);
  Set_diagonal(15, GREEN);
  Set_diagonal(14, BLUE);
  Set_diagonal(13, CYAN);
  Set_diagonal(12, MAGENTA);
  Set_diagonal(11, PURPLE);
   tree.show(500);
  tree.setColumnColor(9, RED);
  tree.setColumnColor(8, GREEN);
  tree.setColumnColor(7, CYAN);
  tree.setColumnColor(6, RED);
  tree.show(500);

 }

void Set_diagonal(int num, COLORS c){
 
 for(int i = 0; i < 8; i++){
  tree.setLightColor(i + num,   i, c);
 }
}

