#include"WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor" << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "wrongCat Destructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &Wrongcat)
{
	std::cout << "WrongCat copy constructor" << std::endl;
	this->type = Wrongcat.type;
}

WrongCat&	WrongCat::operator=(const WrongCat &Wrongcat)
{
	std::cout << "WrongCat Assignment Operator Overloading" << std::endl;
	this->type = Wrongcat.type;
	return (*this);
}

void	WrongCat::makeSound()const
{
	std::cout << "WrongCats is meow meow" << std::endl;
}

std::string	WrongCat::getType()const
{
	return (this->type);
}