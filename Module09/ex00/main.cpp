#include<iostream>
#include"BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	if (ac < 2) {
		std::cout << "Using ./btc input.txt";
		return (1);
	}
	BitcoinExchange a;
	for (int i = 1 ; i < ac ; i++)
		a.inputParse(static_cast<std::string>(av[i]));
}