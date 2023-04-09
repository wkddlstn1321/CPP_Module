#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
	openFile("data.csv");
}

BitcoinExchange::~BitcoinExchange() {}
BitcoinExchange::BitcoinExchange(const BitcoinExchange& ref) : _Db(ref._Db) {}
BitcoinExchange&	BitcoinExchange::operator=(const BitcoinExchange& ref)
{
	this->_Db = ref._Db;
	return (*this);
}

void	BitcoinExchange::openFile(std::string filename)
{
	std::ifstream file(filename);
	std::string line;
	std::string token1;
	std::string token2;
	if (!file.is_open())
	{
		std::cout << "Error: could not open file." << std::endl;
		exit(1);
	}
	getline(file, line, '\n');
	while (getline(file, line, '\n'))
	{
		std::stringstream ss(line);
		getline(ss, token1, ',');
		getline(ss, token2, ',');
		this->_Db[GetKeyInteger(token1)] = std::strtod(token2.c_str(), NULL);
	}
}


int	BitcoinExchange::GetKeyInteger(std::string str)
{
	//x * 10000 + y * 100 + z
	std::stringstream ss(str);
	std::string line;
	int	form = 10000;
	int	result = 0;
	while (getline(ss, line, '-'))
	{
		int val = atoi(line.c_str());
		if (form == 100) {
			if (!(val >= 0 && val <= 12))
			{
				std::cout << "Error: not a positive number." << std::endl;
				return (-1);
			}
		}
		result += form * val;
		form /= 100;
	}
	return (result);
}

void	BitcoinExchange::inputParse(std::string filename)
{
	std::ifstream file(filename);
	std::string line;
	std::string token1;
	std::string token2;
	if (!file.is_open())
	{
		std::cout << "Error: could not open file." << std::endl;
		exit(1);
	}
	getline(file, line, '\n');
	if (line != "date | value")
	{
		std::cout << "Error: input file wrong." << std::endl;
		exit(1);
	}
	while (getline(file, line, '\n'))
	{
		std::stringstream ss(line);
		if (lineCheck(line) == false)
		{
			if (line.length() != 0)
				std::cout << "Error: bad input => " << line << std::endl;
			continue ;
		}
		getline(ss, token1, '|');
		getline(ss, token2, '|');
		if (dateCheck(token1) == false)
		{
			std::cout << "Error: bad input => " << token1 << std::endl;
			continue ;
		}
		if (valueCheck(token2) == false)
		{
			continue ;
		}
		std::map<int, float>::iterator it;
		int		key = GetKeyInteger(token1);
		float	value = strtod(token2.c_str(), NULL);
		it = this->_Db.find(key);
		if (it == this->_Db.end())
		{
			it = _Db.lower_bound(key);
			if (it == this->_Db.begin())
			{
				std::cout << "Error: bad input => " << token1 << std::endl;
				continue ;
			}

			it--;
		}
		std::cout.precision(token2.length());
		std::cout << token1 << "=>" << token2 << " = " << it->second * value << std::endl;
	}
}

//한줄 확인
bool	BitcoinExchange::lineCheck(std::string line)
{
	//공백이 두개 파이프 한개가 아니거나 .이 두개 이상이면 실패
	if (std::count(line.begin(), line.end(), ' ') != 2 || std::count(line.begin(), line.end(), '|') != 1 || std::count(line.begin(), line.end(), '.') > 1)
		return (false);
	size_t pipe = line.find('|');
	//파이프 위치가 0번째 일 때 세그폴트 방지용 조건문
	if (pipe < 1)
		return (false);
	//파이프 앞뒤로 공백이 아니면 실패
	if (line[pipe - 1] != ' ' || line[pipe + 1] != ' ')
		return (false);
	//소수점
	size_t pipe2 = line.find('.');
	if (pipe2 < pipe)
		return (false);
	//특수문자 알파벳 쳐내기
	size_t len = line.length();
	for (size_t i = 0 ; i < len ; i++) {
		if ((line[i] >= '0' && line[i] <= '9') || line[i] == ' ' || line[i] == '|' || line[i] == '-' || line[i] == '.')
			continue ;
		else
			return (false);
	}
	return (true);
}

//날짜 체크 
bool	BitcoinExchange::dateCheck(std::string line)
{
	// 구분자 - 두개만 있는지 확인
	if (std::count(line.begin(), line.end(), '-') != 2)
		return (false);
	std::stringstream ss(line);
	std::string token;
	getline(ss, token, '-');
	int year = atoi(token.c_str());
	getline(ss, token, '-');
	int mon = atoi(token.c_str());
	getline(ss, token, '-');
	int day = atoi(token.c_str());
	// 1 ~ 12 월 사이 체크
	if (mon < 1 || mon > 12)
		return (false);
	// 1 ~ 31 일 사이 체크
	if (day < 1 || day > 31)
		return (false);
	// 30일까지 있는 월 체크
	if (mon == 4 || mon == 6 || mon == 9 || mon == 11)
	{
		if (day > 30)
			return (false);
	}
	// 평년 2월 28 || 윤년 2월 29 일 체크
	if (mon == 2)
	{
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			if (day > 29)
				return (false);
		}
		else
		{
			if (day > 28)
				return (false);
		}
	}
	return (true);
}

//값 체크
bool	BitcoinExchange::valueCheck(std::string line)
{
	//공백 제거
	line.erase(0, 1);

	//값 비어있을때 처리
	if (line.length() == 0)
	{
		std::cout << "Error: Empty number." << std::endl;
		return (false);
	}

	// 마이너스 처리
	for (size_t i = 0 ; i < line.length() ; i++)
	{
		if (line[i] == '-')
		{
			if (i == 0)
				std::cout << "Error: not a positive number." << std::endl;
			else
				std::cout << "Error: " << line << " is not a number." << std::endl;
			return (false);
		}
	}

	//소수점 맨앞에 있는 경우 처리
	size_t dot = line.find('.');
	if (dot == 0)
	{
		std::cout << "Error: dot can't first position in number." << std::endl;
		return (false);
	}

	//1000 넘어가는 숫자 처리
	if ((dot != std::string::npos && dot > 5) || (dot == std::string::npos && line.length() > 4) || atof(line.c_str()) > 1000)
	{
		std::cout << "Error: too large a number." << std::endl;
		return (false);
	}
	return (true);
}
