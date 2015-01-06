/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_phonebook.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernabe <jbernabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 17:35:01 by jbernabe          #+#    #+#             */
/*   Updated: 2015/01/05 17:35:03 by jbernabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include "Contact.class.hpp"

int main(){

  Contact objContact[10];
  //std::string indexContact[11];
  int i;
  std::string temp;
  std::string search_var = "SEARCH";
  std::string exit_var = "EXIT";
  std::string add_var = "ADD";
  std::string str;

  for (i = 0; i < 10; i++)
    objContact[i].setIndex(i);

  i = 0;
  while (std::getline(std::cin, str)){
      if (str.compare(search_var) == 0)
        std::cout << "search";

      if (str.compare(exit_var) == 0) {
        return 0;
      }

      if (str.compare(add_var) == 0) {
        std::cout << "Please add your Conctact first name: " << std::endl;
        getline (std::cin,temp);
        objContact[i].setIndex(i);
        objContact[i].setName(temp);
        i++;
      }
  }
  return 0;
}
