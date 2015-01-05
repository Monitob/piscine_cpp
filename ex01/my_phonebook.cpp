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
#include "conctact.class.hpp"



int main(){

  std::string search_var = "SEARCH";
  std::string exit_var = "EXIT";
  std::string add_var = "ADD";
  std::string str;

  while (std::getline(std::cin, str)){
      if (str.compare(search_var) == 0)
        std::cout << "search";

      if (str.compare(exit_var) == 0) {
        return 0;
      }

      if (str.compare(add_var) == 0)
        std::cout << "add";
  }
  return 0;
}
