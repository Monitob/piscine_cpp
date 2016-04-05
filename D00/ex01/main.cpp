/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_phonebook.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernabe <jbernabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 17:35:01 by jbernabe          #+#    #+#             */
/*   Updated: 2016/04/04 17:51:12 by jbernabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include "Contact.class.hpp"


int addContact(Contact currentContact)
{
  int const num_options(11);
  std::string options[num_options];

  options[0] = ("Please add your Conctact first name: ");
  options[1] = ("Please add your Conctact last name: ");
  options[2] = ("Please add your Conctact nickname: ");
  options[3] = ("Please add your Conctact login: ");
  options[4] = ("Please add your Conctact postal address: ");
  options[5] = ("Please add your Conctact email: ");
  options[6] = ("Please add your Conctact phone number: ");
  options[7] = ("Please add your Conctact bithday date: ");
  options[8] = ("Please add your Conctact favorite meal: ");
  options[9] = ("Please add your Conctact underwear color: ");
  options[10] = ("Please add your Conctact darkest secret: ");
  std::cout << options[0] << std::endl;
  getline(std::cin, currentContact.firstName);
  std::cout << options[1] << std::endl;
  getline(std::cin, currentContact.lastName);
  std::cout << options[2] << std::endl;
  getline(std::cin, currentContact.nickName);
  std::cout << options[3] << std::endl;
  getline(std::cin, currentContact.login);
  std::cout << options[4] << std::endl;
  getline(std::cin, currentContact.postal_address);
  std::cout << options[5] << std::endl;
  getline(std::cin, currentContact.email_address);
  std::cout << options[6] << std::endl;
  getline(std::cin, currentContact.phone_numer);
  std::cout << options[7] << std::endl;
  getline(std::cin, currentContact.birthday_date);
  std::cout << options[8] << std::endl;
  getline(std::cin, currentContact.favorite_meal);
  std::cout << options[9] << std::endl;
  getline(std::cin, currentContact.underwear_color);
  std::cout << options[10] << std::endl;
  getline(std::cin, currentContact.darkest_secret);
  return 1;
}

void  searchCommand(Contact *allContact)
{
  std::cout << allContact->numObjs() << std::endl;
}

int main()
{
  Contact objContact[10];
  int i;
  std::string temp;
  std::string search_var = "SEARCH";
  std::string exit_var = "EXIT";
  std::string add_var = "ADD";
  std::string str;

  for (i = 0; i < 10; i++)
  {
    objContact[i].setIndex(i);
    optContact[i].firstName = "NULL";
  }

  i = 0;
  while (std::getline(std::cin, str))
  {
      if (str.compare(exit_var) == 0) {
        return 0;
      }
      else if (str.compare(search_var) == 0)
        searchCommand(objContact);
      else if (str.compare(add_var) == 0)
      {
        if (addContact(objContact[i]) == 1 && i != 9)
          i++;
        else
          std::cout << "Your have complete your list - Please user: SEARCH OR EXIT" << std::endl;
      }
  }
  return 0;
}
