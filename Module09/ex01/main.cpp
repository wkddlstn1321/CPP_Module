#include <iostream>
#include <sstream>
#include "RPN.hpp"

int	main(int ac, char **av)
{
	std::string token;
	if (ac < 2)
	{
		std::cout << "Using ./RPN number number + - / * " << std::endl;
	}
	RPN test;
	for (int i = 1 ; i < ac ; i++) {
		std::stringstream ss(static_cast<std::string>(av[i]));
		while (ss >> token)
		{
			int	check = test.tokenParse(token);
			if (check == 0)
			{
				std::cout << "input error" << std::endl;
				return (1);
			}
			test.add(token, check);
		}
	}
	if (test.stackSize() != 1)
	{
		std::cout << "input error" << std::endl;
		return (1);
	}
	std::cout << test.stackTop() << std::endl;
}
