
#include <iostream>
#include <string>
#include <sstream>
#include "Contact.class.hpp"

Contact::Contact() : index(0) {
  Contact::_nbInst += 1;

  return ;
}
Contact::~Contact(){
  Contact::_nbInst -= 1;
  return ;
}

int Contact::getNbInst(){
  return Contact::_nbInst;
}

void Contact::setIndex(int i){
  if (i < 10)
    this->index = i;
}

void Contact::setName(std::string name){
  Contact::_firstName = name;
}

int Contact::_nbInst = 0;
