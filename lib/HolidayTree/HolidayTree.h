 /*
  HolidayTree.h - Library for Hour of Code NeoPixel Project.
  Created by Giselle Koo, November 2015.
*/
#ifndef HolidayTree_h
#define HolidayTree_h

#include "Arduino.h"
#include <Adafruit_NeoPixel.h>
#include <vector>

class HolidayTree
{
  public:
    HolidayTree(int nStrands, int nLights);
    void init(int brightness);
    void setLightColor(int strandNum, int light, int red, int green, int blue);
    int getNumStrands();
    int getNumLights();
    void show();
    void test();
    void reset();
  private:
    std::vector<Adafruit_NeoPixel> strand;
    int numStrands;
    int numLights;
};

#endif
