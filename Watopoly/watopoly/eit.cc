#include "eit.h"
#include <string>

Eit::Eit(){
  name = "EIT";
  purchaseCost = 300;
  improvCost = 200;
  faculty = "Sci2";
  tuitionFee[0] = 26;
  tuitionFee[1] = 130;
  tuitionFee[2] = 390;
  tuitionFee[3] = 900;
  tuitionFee[4] = 1100;
  tuitionFee[5] = 1275;
}

Eit::~Eit(){}

