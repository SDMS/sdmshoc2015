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
  RED = 0xFF0000,
  ORANGE = 0xFFAA00,
  YELLOW = 0xFFFF00,
  GREEN = 0x00FF00,
  CYAN = 0x00FFFF, 
  BLUE = 0x0000FF,
  PURPLE = 0x8000FF,
  MAGENTA = 0xFF00FF,
  WHITE = 0xFFFFA0,
  OFF = 0x000000
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
