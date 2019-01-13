#include "phys.h"
#include <string>

Phys::Phys(){
  name = "PHYS";
  purchaseCost = 260;
  improvCost = 150;
  faculty = "Sci1";
  tuitionFee[0] = 22;
  tuitionFee[1] = 110;
  tuitionFee[2] = 330;
  tuitionFee[3] = 800;
  tuitionFee[4] = 975;
  tuitionFee[5] = 1150;
}

Phys::~Phys(){}


