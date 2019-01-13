#include "cph.h"
#include <string>

Cph::Cph(){
  name = "CPH";
  purchaseCost = 160;
  improvCost = 100;
  faculty = "Eng";
  tuitionFee[0] = 12;
  tuitionFee[1] = 60;
  tuitionFee[2] = 180;
  tuitionFee[3] = 500;
  tuitionFee[4] = 700;
  tuitionFee[5] = 900;
}

Cph::~Cph(){}

