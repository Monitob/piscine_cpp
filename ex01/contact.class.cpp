
#include <iostream>
#include <string>

Conctact::Conctac(char* str){
  Contact::_nbInst += 1;
  return ;
}
Conctact::~Conctac(){
  Contact::_nbInst -= 1;
  return 0;
}

int Contact::getNbInst(void){
  return Contact::_nbInst;
}

int Contact::_nbInst = 0;
