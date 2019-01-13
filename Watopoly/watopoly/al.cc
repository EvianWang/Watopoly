#include "al.h"
#include <string>

Al::Al(){
  name = "AL";
  purchaseCost = 40;
  improvCost = 50;
  faculty = "Arts1";
  tuitionFee[0] = 2;
  tuitionFee[1] = 10;
  tuitionFee[2] = 30;
  tuitionFee[3] = 90;
  tuitionFee[4] = 160;
  tuitionFee[5] = 250;
}

Al::~Al(){}
