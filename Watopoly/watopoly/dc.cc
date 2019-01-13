#include "dc.h"
#include <string>

Dc::Dc(){
  name = "DC";
  purchaseCost = 400;
  improvCost = 200;
  faculty = "Math";
  tuitionFee[0] = 50;
  tuitionFee[1] = 200;
  tuitionFee[2] = 600;
  tuitionFee[3] = 1400;
  tuitionFee[4] = 1700;
  tuitionFee[5] = 2000;
}

Dc::~Dc(){}


