#include "building.h"
#include <string>
using namespace std;

Building::Building(){
  name = "";
  owner = '\0';
  faculty = "";
  type = "";
  isProperty = false;
  isMorgaged = false;
  improvable = false;
  purchaseCost = 0;
  improvCost = 0;
  tuitionFee = nullptr;
  improved = 0;
}

Building::~Building() {}

string Buidling::getName(){
  return name;
}

char Building::getOwner(){
  return owner;
}

void Building::setOwner(char newOwner){
  owner = newOwner;  
}

string Building::getFaculty(){
  return faculty;
}

bool Building::getIsProperty(){
  return isProperty;
}

bool Building::getIsMorgaged(){
  return isMorgaged;
}

void Building::setMorgaged(bool morgaged){
  isMorgaged = morgaged;
}

bool Building::getImprovable(){
  return improvable;
}

int Building::getPurchaseCost(){
  return purchaseCost;
}

int Building::getImprovCost(){
  return improvCost;
}

int Building::getImproved(){
  return improved;
}

void Building::setImproved(int newImproved){
  improved = newImproved;
}
