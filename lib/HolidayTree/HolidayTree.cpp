/*
  HolidayTree.cpp - Library for Hour of Code NeoPixel Project.
  Created by Giselle Koo, November 2015.
*/
#include "Arduino.h"
#include <StandardCplusplus.h>
#include <Adafruit_NeoPixel.h>
#include <vector>
#include "HolidayTree.h"

/* 
  CONSTRUCTOR. Each strand must have the same number of lights 
*/
HolidayTree::HolidayTree(int nStrands, int nLights){
  /* Save these numbers for future reference */
  numStrands = nStrands;
  numLights = nLights;
  
  /* Create <numStrand> strands with <numLights> lights on each. */
  strand.reserve(numStrands);
  for(int i = 0; i < numStrands; i++){
    strand.push_back(new Adafruit_NeoPixel(nLights, i + 2, NEO_GRB + NEO_KHZ800));
  }
}

/*
  This function should be called in the setup() arduino function.
  Brightness is a number between 1 and 10.
*/
void HolidayTree::init(int brightness){
  if(numStrands > 13) {
    Serial.println("[Warning] Arduino Uno only has 12 non-Serial Digital Pins (DP #2 - DP #13). You may use Analog Pins 0-6 as Digital Pins 14-19"); 
  }
  for(int i = 0; i < numStrands; i++){
    Serial.println(i);
    strand[i]->begin();
    strand[i]->setBrightness(brightness * 2.55);
  }
  show();
}

void HolidayTree::show(int ms){
  for(int i = 0; i < numStrands; i++){
    strand[i]->show();
    delay(ms);
  }
}

void HolidayTree::setLightColor(int strandNum, int light, int red, int green, int blue){
  strand[strandNum]->setPixelColor(light, red, green, blue);
}

void HolidayTree::setLightColor(int strandNum, int light, COLORS c) {
  strand[strandNum]->setPixelColor(light, c);
}

void HolidayTree::setRowColor(int rowNum, int red, int green, int blue) {
  //CODE ME
  for(int i = 0; i < numStrands; i++){
    setLightColor(i, rowNum, red, green, blue);
  }
}

void HolidayTree::setRowColor(int rowNum, COLORS c) {
  //CODE ME
  for(int i = 0; i < numStrands; i++){
    setLightColor(i, rowNum, c);
  }
}

void HolidayTree::setColumnColor(int colNum, int red, int green, int blue) {
  //CODE ME
  for(int i = 0; i < numStrands; i++){
    setLightColor(colNum, i, red, green, blue);
  }
}

void HolidayTree::setColumnColor(int colNum, COLORS c){
  //CODE ME
  for(int i = 0; i < numStrands; i++){
    setLightColor(colNum, i, c);
  }
}

int HolidayTree::getNumStrands(){
  return numStrands;
}

int HolidayTree::getNumLights(){
  return numLights;
}

/* turns all lights red.*/
void HolidayTree::test(){
  for(int i = 0; i < numStrands; i++){
    for(int j = 0; j < numLights; j++){
      setLightColor(i, j, 255, 0, 0);
    }
  }
  show();
}
/* turns all lights off*/
void HolidayTree::reset(){
  for(int i = 0; i < numStrands; i++){
    for(int j = 0; j < numLights; j++){
      setLightColor(i, j, 0, 0, 0);
    }
  }
  show();
}
