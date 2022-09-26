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

int	prinIntType(int i, std::string s)
{
	if (i < 32 && i >= 0)
		std::cout << "char: Non displayable" << std::endl;
	else if (i > 126 || i < 0)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
	std::cout << "int: " << i << std::endl;
	if (s.length() <= 6)
	{
		std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(i) << std::endl;
	}
	return (0);
}

int	prinFloatType(float f, std::string s)
{
	if (f < 32 && f >= 0)
		std::cout << "char: Non displayable" << std::endl;
	else if (f > 126 || f < 0)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
	if (f > 2147483647 || f < -2147483648)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	if (s.length() <= 6)
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

int prinDoubleType(double d, std::string s)
{
	if (d < 32 && d >= 0)
		std::cout << "char: Non displayable" << std::endl;
	else if (d > 126 || d < 0)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
	if (d > 2147483647 || d < -2147483648)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	if (s.length() <= 6)
	{
		std::cout << "float: " << static_cast<float>(d) << ".0f" << std::endl;
		std::cout << "double: " << d << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
	}
	return (0);
}
