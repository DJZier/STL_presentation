#ifndef SMARTPHONE_H
#define SMARTPHONE_H
#include <iostream>     
#include <algorithm>    
#include <vector> 

using namespace std;

class Smartphone
{
private:
  string reference;
  string company;
public:
  Smartphone(string ref, string comp):reference(ref), company(comp){}
  string getRef(){return reference;}
  string getComp(){return company;}
  bool operator==(Smartphone right);

};
bool Smartphone::operator==(Smartphone right){
  if ((reference == right.getRef()) && company == right.getComp()){
    return true;
  }
  else {
    return false;
  }
}

#endif