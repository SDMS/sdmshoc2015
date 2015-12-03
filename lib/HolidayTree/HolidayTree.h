 /*
  HolidayTree.h - Library for Hour of Code NeoPixel Project.
  Created by Giselle Koo, November 2015.
*/
#ifndef HolidayTree_h
#define HolidayTree_h

#include "Arduino.h"
#include <Adafruit_NeoPixel.h>
#include <vector>

enum COLORS { 
  RED = 0b111111110000000000000000,
  ORANGE = 0b111111111000000000000000,
  YELLOW = 0b111111111111111100000000,
  GREEN = 0b000000001111111100000000,
  CYAN = 0b000000001111111111111111, 
  BLUE = 0b000000000000000011111111,
  PURPLE = 0b100000000000000011111111,
  MAGENTA = 0b111111110000000011111111,
  WHITE = 0b111111111111111111111111,
  OFF = 0b000000000000000000000000
};

class HolidayTree
{
  public:
    HolidayTree(int nStrands, int nLights);
    void init(int brightness);
    void setLightColor(int strandNum, int light, int red, int green, int blue);
    void setLightColor(int strandNum, int light, COLORS c);
    void setRowColor(int rowNum, int red, int green, int blue);
    void setRowColor(int rowNum, COLORS c);
    void setColumnColor(int colNum, int red, int green, int blue);
    void setColumnColor(int colNum, COLORS c);
    int getNumStrands();
    int getNumLights();
    void show(int ms);
    void test();
    void reset();
  private:
    std::vector<Adafruit_NeoPixel *> strand;
    int numStrands;
    int numLights;
};


#endif
