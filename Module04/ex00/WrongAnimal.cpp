#include"WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "WrongAnimal type is " << type << std::endl;
	this->type = type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "wrongAnimal Destructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &animal)
{
	std::cout << "WrongAnimal copy constructor" << std::endl;
	this->type = animal.type;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &animal)
{
	std::cout << "WrongAnimal Assignment Operator Overloading" << std::endl;
	this->type = animal.type;
	return (*this);
}

void	WrongAnimal::makeSound()const
{
	std::cout << "this is WrongAnimal make Sound" << std::endl;
}

std::string	WrongAnimal::getType()const
{
	return (this->type);
}