#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class BitcoinExchange
{
private:

public:
	std::map<int, float> _Db;
	BitcoinExchange();
	~BitcoinExchange();
	BitcoinExchange(const BitcoinExchange& ref);

	BitcoinExchange&	operator=(const BitcoinExchange& ref);
	int		GetKeyInteger(std::string str);
	void	openFile(std::string filename);
	void	inputParse(std::string filename);
	bool	lineCheck(std::string line);
	bool	dateCheck(std::string line);
	bool	valueCheck(std::string line);

};

#endif
