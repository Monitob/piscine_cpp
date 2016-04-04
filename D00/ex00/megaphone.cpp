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
		for(std::string::iterator p = s.begin(); s.end() != p; p++)
		{
			*p = toupper(*p);
		}
		std::cout << s;
	}
	std::cout << std::endl;
	return 0;
}
