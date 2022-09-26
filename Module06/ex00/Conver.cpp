#include"Conver.hpp"

bool	isCharType(char *str)
{
	if (std::strlen(str) == 1 && std::isdigit(str[0]) == 0)
		return (true);
	return (false);
}

bool	isnanType(std::string s, char *pos, double d)
{
	std::string::size_type size = s.find('.');

	if (std::isnan(d))
		return (true);
	if (std::strlen(pos) > 1 || (std::strlen(pos) == 1 && pos[0] != 'f'))
		return (true);
	if (size == std::string::npos)
		return (false);
	if (size == s.length() - 1 || s[size + 1] == 'f')
		return (true);
	return (false);
}

bool	isIntType(double d, char *pos, std::string s)
{
	std::string::size_type	npos;
	npos = s.find('.');
	if (std::strlen(pos) == 0 && d <= 2147483647 && d >= -2147483648 && npos == std::string::npos)
		return (true);
	return (false);
}

int	prinCharType(char c)
{
	if (c < 32)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
	return (0);
}

int	prinNanType()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;
	return (0);
}

int	prinIntType(int i)
{
	if (static_cast<char>(i) < 32 && static_cast<char>(i) >= 0)
		std::cout << "char: Non displayable" << std::endl;
	else if (static_cast<char>(i) > 126 || static_cast<char>(i) < 0)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
	return (0);
}

int	prinFloatType(float f)
{
	if (static_cast<char>(f) < 32 && static_cast<char>(f) >= 0)
		std::cout << "char: Non displayable" << std::endl;
	else if (static_cast<char>(f) > 126 || static_cast<char>(f) < 0)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
	if (static_cast<int>(f) > 2147483647 || static_cast<int>(f) < -2147483648)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	if (static_cast<int>(f) == f)
	{
		std::cout << "float: " << f << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(f) << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(f) << std::endl;
	}
	return (0);
}

int prinDoubleType(double d)
{
	if (static_cast<char>(d) < 32 && static_cast<char>(d) >= 0)
		std::cout << "char: Non displayable" << std::endl;
	else if (static_cast<char>(d) > 126 || static_cast<char>(d) < 0)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
	if (static_cast<int>(d) > 2147483647 || static_cast<int>(d) < -2147483648)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	if (static_cast<int>(d) == d)
	{
		std::cout << "float: " << d << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(d) << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << d << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(d) << std::endl;
	}
	return (0);
}
