
#include <iostream>
#include <string>
#include <sstream>
#include <cstddef>        // std::size_t
#include "Contact.class.hpp"

Contact::Contact() : index(0) {
  Contact::_count += 1;

  return ;
}

Contact::~Contact(){
  Contact::_count -= 1;
  return ;
}

size_t Contact::getNbInst(){
  return Contact::_count;
}

void Contact::setIndex(int i){
  if (i < 10)
    this->index = i;
}

size_t Contact::numObjs(){
  return Contact::_count;
}

size_t Contact::_count = 0;
