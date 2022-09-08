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
	int		getRawBits(void)const;
	void	setRawBits(int const raw);
	Fixed(const Fixed &fixed);
	Fixed	&operator=(const Fixed &fixed);
	float	toFloat(void)const;
	int		toInt(void)const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif