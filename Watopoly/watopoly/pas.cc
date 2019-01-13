#include "pas.h"
#include <string>

Pas::Pas(){
  name = "PAS";
  purchaseCost = 100;
  improvCost = 50;
  faculty = "Arts2";
  tuitionFee[0] = 6;
  tuitionFee[1] = 30;
  tuitionFee[2] = 90;
  tuitionFee[3] = 270;
  tuitionFee[4] = 400;
  tuitionFee[5] = 550;
}

Pas::~Pas(){}

