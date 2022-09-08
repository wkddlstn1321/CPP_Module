#ifndef FIXED_HPP
# define FIXED_HPP

#include<iostream>
#include<math.h>

class Fixed
{

private:
	int					fixedPoint;
	static const int	eightFixed = 8;

public:
	Fixed();
	Fixed(const int num);
	Fixed(const float num);
	~Fixed();
	Fixed(const Fixed &fixed);
	int		getRawBits(void)const;
	void	setRawBits(int const raw);
	float	toFloat(void)const;
	int		toInt(void)const;

	Fixed	&operator=(const Fixed &fixed);

	Fixed	&operator>(const Fixed &fixed);
	Fixed	&operator<(const Fixed &fixed);
	Fixed	&operator>=(const Fixed &fixed);
	Fixed	&operator<=(const Fixed &fixed);
	Fixed	&operator==(const Fixed &fixed);
	Fixed	&operator!=(const Fixed &fixed);

	Fixed	&operator+(const Fixed &fixed);
	Fixed	&operator-(const Fixed &fixed);
	Fixed	&operator*(const Fixed &fixed);
	Fixed	&operator/(const Fixed &fixed);

	Fixed	&operator++();
	Fixed	&operator++(int);
	Fixed	&operator--();
	Fixed	&operator--(int);

	static int&	min(Fixed& fixed);
	static int&	max(Fixed &num1, Fixed &num2);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
