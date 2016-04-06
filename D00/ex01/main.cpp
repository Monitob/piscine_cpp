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
#include <iomanip>      // std::setw
#include "Contact.class.hpp"


int addContact(Contact *currentContact)
{
  int const num_options(11);
  std::string options[num_options];
//set and get line funcion to detect the empty lines
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
  getline(std::cin, currentContact->firstName);
  std::cout << options[1] << std::endl;
  getline(std::cin, currentContact->lastName);
  std::cout << options[2] << std::endl;
  getline(std::cin, currentContact->nickName);
  std::cout << options[3] << std::endl;
  getline(std::cin, currentContact->login);
  std::cout << options[4] << std::endl;
  getline(std::cin, currentContact->postal_address);
  std::cout << options[5] << std::endl;
  getline(std::cin, currentContact->email_address);
  std::cout << options[6] << std::endl;
  getline(std::cin, currentContact->phone_numer);
  std::cout << options[7] << std::endl;
  getline(std::cin, currentContact->birthday_date);
  std::cout << options[8] << std::endl;
  getline(std::cin, currentContact->favorite_meal);
  std::cout << options[9] << std::endl;
  getline(std::cin, currentContact->underwear_color);
  std::cout << options[10] << std::endl;
  getline(std::cin, currentContact->darkest_secret);
  return 1;
}

void  searchCommand(Contact *allContact)
{
  std::string fname,lname, nname, id_choise;
  std::string::size_type sz;   // alias of size_t
  int id_c;

  for (size_t i = 0;!allContact[i].firstName.empty(); i++)
  {
    fname = allContact[i].firstName;
    lname = allContact[i].lastName;
    nname = allContact[i].nickName;

    std::cout << std::setiosflags (std::ios::internal | std::ios::right);
    std::cout << std::setw(10) << i;
    std::cout << "|";
    std::cout << std::setiosflags (std::ios::internal | std::ios::right);
    fname.resize (10,'.');
    fname.replace(10,1,1,'.');
    std::cout << std::setw(10) << fname;
    std::cout << "|";
    std::cout << std::setiosflags (std::ios::internal | std::ios::right);
    lname.resize (10,'.');
    lname.replace(10,1,1,'.');
    std::cout << std::setw(10) << lname;
    std::cout << "|";
    std::cout << std::setiosflags (std::ios::internal | std::ios::right);
    nname.resize (10,'.');
    nname.replace(10,1,1,'.');
    std::cout << std::setw(10) << nname;
    std::cout << std::endl;
    std::cout << "Index" << std::endl;
    while (getline(std::cin, id_choise))
    {
      id_c =  std::stoi(id_choise, &sz);
      if (id_c <= 9 && !allContact[id_c].firstName.empty())
      {
          std::cout << allContact[id_c].firstName << std::endl;
          std::cout << allContact[id_c].lastName << std::endl;
          std::cout << allContact[id_c].nickName << std::endl;
          std::cout << allContact[id_c].postal_address << std::endl;
          std::cout << allContact[id_c].postal_address << std::endl;
          std::cout << allContact[id_c].email_address << std::endl;
          std::cout << allContact[id_c].phone_numer << std::endl;
          std::cout << allContact[id_c].birthday_date << std::endl;
          std::cout << allContact[id_c].favorite_meal << std::endl;
          std::cout << allContact[id_c].underwear_color << std::endl;
          std::cout << allContact[id_c].darkest_secret << std::endl;
          return ;
      }
      else{
        std::cout << "Choose a good index" << std::endl;
      }
    }
  }
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
        if (addContact(&objContact[i]) == 1 && i != 9)
        {
          str.clear();
          i++;
        }
        else
          std::cout << "Your have complete your list - Please user: SEARCH OR EXIT" << std::endl;
      }
  }
  return 0;
}
