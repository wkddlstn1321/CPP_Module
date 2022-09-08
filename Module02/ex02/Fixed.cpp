#include"Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixedPoint = 0;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixedPoint = (num << this->eightFixed);
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixedPoint = roundf(num * (1 << this->eightFixed));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixedPoint = fixed.getRawBits();
}

Fixed&	Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixedPoint = fixed.getRawBits();
	return (*this);
}

Fixed&	Fixed::operator++()
{
	this->fixedPoint++;
}

Fixed&	Fixed::operator++(int)
{
	++this->fixedPoint;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return (os);
}

float	Fixed::toFloat(void)const
{
	return ((float)this->fixedPoint / (1 << this->eightFixed));
}

int		Fixed::toInt(void)const
{
	return (this->fixedPoint >> this->eightFixed);
}

int	Fixed::getRawBits(void)const
{
	return (this->fixedPoint);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixedPoint = raw;
}
