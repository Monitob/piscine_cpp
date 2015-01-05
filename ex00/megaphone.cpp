/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernabe <jbernabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 14:40:01 by jbernabe          #+#    #+#             */
/*   Updated: 2015/01/05 14:40:03 by jbernabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctype.h>

int  main (int ac, char **av) {

   if (ac < 2) {
     std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
     return -1;
   }

   for (int i = 1; i < ac; i++) {
     std::string s(av[i]);
     for(unsigned int l = 0; l <= s.length(); l++)
     {
       if (isspace(s[l]))
         l++;
       s[l] = toupper(s[l]);
     }
     std::cout << s;
   }
   std::cout << std::endl;
  return 0;
}
