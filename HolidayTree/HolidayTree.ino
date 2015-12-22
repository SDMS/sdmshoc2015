#include <Adafruit_NeoPixel.h>
#include <HolidayTree.h>

HolidayTree tree = HolidayTree(16, 8);

void loop(){
	myPattern0();
	myPattern0();
	myPattern1();
	myPattern1();
	myPattern2();
	myPattern2();
	myPattern3();
	myPattern3();
}

void setup() {
  Serial.begin(9600);
  tree.init(10);
}

void myPattern0() {
	//Francesco ?
	// write your code here!
	tree.setColumnColor(0,BLUE);
	tree.show(500);
	tree.setColumnColor(1,GREEN);
	tree.show(500);
	tree.setColumnColor(2,RED);
	tree.show(500);
	tree.setColumnColor(3,BLUE);
	tree.show(500);
	tree.setColumnColor(4,GREEN);
	tree.show(500);
	tree.setColumnColor(5,RED);
	tree.show(500);
	tree.setColumnColor(6,BLUE);
	tree.show(500);
	tree.setColumnColor(7,GREEN);	
	tree.show(500);
	tree.setColumnColor(8,RED);
	tree.show(500);
	tree.setColumnColor(9,BLUE);
	tree.show(500);
	tree.setColumnColor(10,GREEN);
	tree.show(500);
	tree.setColumnColor(11,RED);
	tree.show(500);
	tree.setColumnColor(12,BLUE);
	tree.show(500);
	tree.setColumnColor(13,GREEN);
	tree.show(500);
	tree.setColumnColor(14,RED);
	tree.show(500);
	tree.setColumnColor(15,BLUE);
	tree.show(500);
	tree.reset();
	tree.show(500);

}

void myPattern1() {
	//Elisa Correa-Rosa
	// write your code here!
	setDiagonal(0, WHITE);
	setDiagonal(1, RED);
	setDiagonal(2, WHITE);
	setDiagonal(3, GREEN);
	setDiagonal(4, WHITE);
	setDiagonal(5, BLUE);
	setDiagonal(6, WHITE);
	setDiagonal(7, GREEN);
	setDiagonal(8, WHITE);
	setDiagonal(9, BLUE);
	setDiagonal(10, WHITE);
	setDiagonal(11, RED);
	setDiagonal(12, WHITE);	
	setDiagonal(13, GREEN);
	setDiagonal(14, WHITE);
	setDiagonal(15, BLUE);
	tree.show(5000);
	tree.setColumnColor(0, GREEN);
	tree.setColumnColor(1, BLUE);
	tree.setColumnColor(2, WHITE);
	tree.setColumnColor(3, WHITE);
	tree.setColumnColor(4, BLUE);
	tree.setColumnColor(5, BLUE);
	tree.setColumnColor(6, WHITE);
	tree.setColumnColor(7, WHITE);
	tree.setColumnColor(8, RED);
	tree.setColumnColor(9, RED);
	tree.setColumnColor(10, RED);
	tree.setColumnColor(11, RED);
	tree.setColumnColor(12, WHITE);
	tree.setColumnColor(13, WHITE);
	tree.setColumnColor(14, GREEN);
	tree.setColumnColor(15, GREEN);
	tree.show(5000);
	tree.setColumnColor(0, RED);
	tree.setColumnColor(1, RED);
	tree.setColumnColor(2, RED);
	tree.setColumnColor(3, RED);
	tree.setColumnColor(4, RED);
	tree.setColumnColor(5, RED);
	tree.setColumnColor(6, RED);
	tree.setColumnColor(7, RED);
	tree.setColumnColor(8, RED);
	tree.setColumnColor(9, RED);
	tree.setColumnColor(10, RED);
	tree.setColumnColor(11, RED);
	tree.setColumnColor(12, RED);
	tree.setColumnColor(13, RED);
	tree.setColumnColor(14, RED);
	tree.setColumnColor(15, RED);
	tree.show(5000);
	tree.setColumnColor(0, WHITE);
	tree.setColumnColor(1, WHITE);
	tree.setColumnColor(2, WHITE);
	tree.setColumnColor(3, WHITE);
	tree.setColumnColor(4, WHITE);
	tree.setColumnColor(5, WHITE);
	tree.setColumnColor(6, WHITE);
	tree.setColumnColor(7, WHITE);
	tree.setColumnColor(8, WHITE);
	tree.setColumnColor(9, WHITE);
	tree.setColumnColor(10, WHITE);
	tree.setColumnColor(11, WHITE);
	tree.setColumnColor(12, WHITE);
	tree.setColumnColor(13, WHITE);
	tree.setColumnColor(14, WHITE);
	tree.setColumnColor(15, WHITE);
	tree.show(5000);
	tree.setColumnColor(0, GREEN);
	tree.setColumnColor(1, GREEN);
	tree.setColumnColor(2, GREEN);
	tree.setColumnColor(3, GREEN);
	tree.setColumnColor(4, GREEN);
	tree.setColumnColor(5, GREEN);
	tree.setColumnColor(6, GREEN);
	tree.setColumnColor(7, GREEN);
	tree.setColumnColor(8, GREEN);
	tree.setColumnColor(9, GREEN);
	tree.setColumnColor(10, GREEN);
	tree.setColumnColor(11, GREEN);
	tree.setColumnColor(12, GREEN);
	tree.setColumnColor(13, GREEN);
	tree.setColumnColor(14, GREEN);
	tree.setColumnColor(15, GREEN);
	tree.show(5000);
	tree.setColumnColor(0, WHITE);
	tree.setColumnColor(1, WHITE);
	tree.setColumnColor(2, WHITE);
	tree.setColumnColor(3, WHITE);
	tree.setColumnColor(4, WHITE);
	tree.setColumnColor(5, WHITE);
	tree.setColumnColor(6, WHITE);
	tree.setColumnColor(7, WHITE);
	tree.setColumnColor(8, WHITE);
	tree.setColumnColor(9, WHITE);
	tree.setColumnColor(10, WHITE);
	tree.setColumnColor(11, WHITE);
	tree.setColumnColor(12, WHITE);
	tree.setColumnColor(13, WHITE);
	tree.setColumnColor(14, WHITE);
	tree.setColumnColor(15, WHITE);
	tree.show(5000);
	tree.setColumnColor(0, BLUE);
	tree.setColumnColor(1, BLUE);
	tree.setColumnColor(2, BLUE);
	tree.setColumnColor(3, BLUE);
	tree.setColumnColor(4, BLUE);
	tree.setColumnColor(5, BLUE);
	tree.setColumnColor(6, BLUE);
	tree.setColumnColor(7, BLUE);
	tree.setColumnColor(8, BLUE);
	tree.setColumnColor(9, BLUE);
	tree.setColumnColor(10, BLUE);
	tree.setColumnColor(11, BLUE);
	tree.setColumnColor(12, BLUE);
	tree.setColumnColor(13, BLUE);
	tree.setColumnColor(14, BLUE);
	tree.setColumnColor(15, BLUE);
	tree.show(5000);
}

void setDiagonal(int n, COLORS c){
	for(int i = 0; i < 8; i++){
		tree.setLightColor((n + i) % 16, i, c);
	}
}

void myPattern2() {
	//Anthony Carbo
	tree.setRowColor(0,RED);
	tree.show(500);
	tree.setRowColor(0,255,80,0);
	tree.show(500);
	tree.setRowColor(0,YELLOW);
	tree.show(500);
	tree.setRowColor(0,GREEN);
	tree.show(500);
	tree.setRowColor(0,CYAN);
	tree.show(500);
	tree.setRowColor(0,BLUE);
	tree.show(500);
	tree.setRowColor(0,PURPLE);
	tree.show(500);
	tree.setRowColor(0,255,0,100);
	tree.show(500);

	tree.setRowColor(1,255,80,0);
	tree.show(500);
	tree.setRowColor(1,YELLOW);
	tree.show(500);
	tree.setRowColor(1,GREEN);
	tree.show(500);
	tree.setRowColor(1,CYAN);
	tree.show(500);
	tree.setRowColor(1,BLUE);
	tree.show(500);
	tree.setRowColor(1,PURPLE);
	tree.show(500);
	tree.setRowColor(1,255,0,100);
	tree.show(500);
	tree.setRowColor(1,RED);
	tree.show(500);


	tree.setRowColor(2,YELLOW);
	tree.show(500);
	tree.setRowColor(2,GREEN);
	tree.show(500);
	tree.setRowColor(2,CYAN);
	tree.show(500);
	tree.setRowColor(2,BLUE);
	tree.show(500);
	tree.setRowColor(2,PURPLE);
	tree.show(500);
	tree.setRowColor(2,255,0,100);
	tree.show(500);
	tree.setRowColor(2,RED);
	tree.show(500);
	tree.setRowColor(2,255,80,0);
	tree.show(500);



	tree.setRowColor(3,GREEN);
	tree.show(500);
	tree.setRowColor(3,CYAN);
	tree.show(500);
	tree.setRowColor(3,BLUE);
	tree.show(500);
	tree.setRowColor(3,PURPLE);
	tree.show(500);
	tree.setRowColor(3,255,0,100);
	tree.show(500);
	tree.setRowColor(3,RED);
	tree.show(500);
	tree.setRowColor(3,255,80,0);
	tree.show(500);
	tree.setRowColor(3,YELLOW);
	tree.show(500);

	tree.setRowColor(4,CYAN);
	tree.show(500);
	tree.setRowColor(4,BLUE);
	tree.show(500);
	tree.setRowColor(4,PURPLE);
	tree.show(500);
	tree.setRowColor(4,255,0,100);
	tree.show(500);
	tree.setRowColor(4,RED);
	tree.show(500);
	tree.setRowColor(4,255,80,0);
	tree.show(500);
	tree.setRowColor(4,YELLOW);
	tree.show(500);
	tree.setRowColor(4,GREEN);
	tree.show(500);

	tree.setRowColor(5,BLUE);
	tree.show(500);
	tree.setRowColor(5,PURPLE);
	tree.show(500);
	tree.setRowColor(5,255,0,100);
	tree.show(500);
	tree.setRowColor(5,RED);
	tree.show(500);
	tree.setRowColor(5,255,80,0);
	tree.show(500);
	tree.setRowColor(5,YELLOW);
	tree.show(500);
	tree.setRowColor(5,GREEN);
	tree.show(500);
	tree.setRowColor(5,CYAN);
	tree.show(500);

	tree.setRowColor(6,PURPLE);
	tree.show(500);
	tree.setRowColor(6,255,0,100);
	tree.show(500);
	tree.setRowColor(6,RED);
	tree.show(500);
	tree.setRowColor(6,255,80,0);
	tree.show(500);
	tree.setRowColor(6,YELLOW);
	tree.show(500);
	tree.setRowColor(6,GREEN);
	tree.show(500);
	tree.setRowColor(6,CYAN);
	tree.show(500);
	tree.setRowColor(6,BLUE);
	tree.show(500);


	
	tree.setRowColor(7,255,0,100);
	tree.show(500);
	tree.setRowColor(7,RED);
	tree.show(500);
	tree.setRowColor(7,255,80,0);
	tree.show(500);
	tree.setRowColor(7,YELLOW);
	tree.show(500);
	tree.setRowColor(7,GREEN);
	tree.show(500);
	tree.setRowColor(7,CYAN);
	tree.show(500);
	tree.setRowColor(7,BLUE);
	tree.show(500);
	tree.setRowColor(7,PURPLE);
	tree.show(500);

}

void myPattern3() {
	lynnlb();
	tree.reset();
	tree.show(500);
	jadam();
	tree.reset();
	tree.show(500);
	zeynabmn();
	tree.reset();
	tree.show(500);
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

void zeynabmn(){

  tree.setRowColor(4,GREEN);
  tree.show(500);
  tree.setRowColor(4,GREEN);
  tree.show(500);
  
  
}
