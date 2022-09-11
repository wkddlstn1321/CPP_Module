#include<iostream>
#include<algorithm>
#include<ctype.h>
#include<string.h>

int	main(int ac, char **av)
{
	(void)av;
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		int i = 0;
		for (int i = 1 ; i < ac ; i++) {
			std::string	str = av[i];
			std::transform(str.begin(), str.end(), str.begin(), std::tolower);
			std::cout << str << std::endl;
			// for (int j = 0 ; av[i][j] ; j++) {
			// 	std::cout << (char)toupper(av[i][j]);
			// }
			std::cout << " ";
		}
		std::cout << std::endl;
	}
}