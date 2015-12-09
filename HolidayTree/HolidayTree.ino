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
   tree.setLightColor(i + 1,  i, WHITE);
 }

 for(int i = 0; i < 8; i++){
   tree.setLightColor(i + 2,  i, RED);
 }

 for(int i = 0; i < 8; i++){
  tree.setLightColor(i + 3,   i, YELLOW);
 }
  for(int i = 0; i < 8; i++){
  tree.setLightColor(i + 4,   i, GREEN);
  }
    for(int i = 0; i < 8; i++){
  tree.setLightColor(i + 5,   i, CYAN);
    }
    
    for(int i = 0; i < 8; i++){
  tree.setLightColor(i + 6,   i, BLUE);
    }
    
    for(int i = 0; i < 8; i++){
  tree.setLightColor(i + 7,   i, MAGENTA);
    }

    Set_diagonal(WHITE);
    tree.show(500);
    Set_diagonal(RED);
    tree.show(500);

 }

void Set_diagonal(COLORS c){

 for(int i = 0; i < 8; i++){
  tree.setLightColor(i + 8,   i, c); 
  }
    
 }

