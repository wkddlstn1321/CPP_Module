#include<iostream>
#include<algorithm>
#include<ctype.h>

int	main(int ac, char **av)
{
	(void)av;
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1 ; i < ac ; i++) {
			std::string	str = av[i];
			std::transform(str.begin(), str.end(), str.begin(), toupper);
			std::cout << str;
			std::cout << " ";
		}
		std::cout << std::endl;
	}
}