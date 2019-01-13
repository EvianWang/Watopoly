#ifndef _BUILDING_H_
#define _BUILDING_H_
#include <string>
#include <iostream>

class Building{
 protected:
  std::string name;
  char owner;
  std::string faculty;
  std::string type;

  bool isProperty;
  bool isMorgaged;
  bool improvable;
 
  int purchaseCost;
  int improvCost;
  int *tuitionFee;
  int improved;

 public:
  Building();
  virtual ~Building();
  std::string getName();
  char getOwner();
  void setOwner(char newOwner);
  std::string getFaculty();
  std::string getType();
  bool getIsProperty();
  bool getIsMorgaged();
  void setMorgaged(bool morgage);
  bool getImprovable();
  int getPurchaseCost();
  int getImprovCost();
  int getTuitionFee();
  int getImproved();
  void setImproved(int newImproved);
};

#endif 
