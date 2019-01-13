#include "acbuilding.h"
#include <string>
#include <iostream>

AcBuilding::AcBuilding(){
  type = "acbuilding";
  tuitionFee = new int [6];
}

AcBuilding::~AcBuilding(){
  delete tuitionFee;
}
