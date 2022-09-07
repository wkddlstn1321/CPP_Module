#ifndef FIXED_HPP
# define FIXED_HPP

#include<iostream>

class Fixed
{

private:
	std::string	type;

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &fixed);
	Fixed &operator=(const Fixed &fixed);
};

#endif