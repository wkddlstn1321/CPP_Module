#include"Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixedPoint = 0;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixedPoint = num;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixedPoint = num;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixedPoint = fixed.fixedPoint;
}

Fixed&	Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixedPoint = fixed.fixedPoint;
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	std::cout << fixed.toFloat();
	return (os);
}

float	Fixed::toFloat(void)const
{
	return (this->fixedPoint);
}

int		Fixed::toInt(void)const
{
	return (this->fixedPoint);
}