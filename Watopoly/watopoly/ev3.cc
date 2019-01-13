#include "ev3.h"
#include <string>

Ev3::Ev3(){
  name = "EV3";
  purchaseCost = 240;
  improvCost = 150;
  faculty = "Env";
  tuitionFee[0] = 20;
  tuitionFee[1] = 100;
  tuitionFee[2] = 300;
  tuitionFee[3] = 750;
  tuitionFee[4] = 925;
  tuitionFee[5] = 1100;
}

Ev3::~Ev3(){}

