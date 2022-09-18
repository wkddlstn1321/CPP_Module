#include"Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor" << std::endl;
}

Animal::Animal(std::string type)
{
	std::cout << "Animal type is " << type << std::endl;
	this->type = type;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor" << std::endl;
}

Animal::Animal(const Animal &animal)
{
	std::cout << "Animal copy constructor" << std::endl;
	this->type = animal.type;
}

Animal&	Animal::operator=(const Animal &animal)
{
	std::cout << "Animal Assignment Operator Overloading" << std::endl;
	this->type = animal.type;
	return (*this);
}

void	Animal::makeSound()const
{
	std::cout << "this is Animal Sound" << std::endl;
}

std::string	Animal::getType()const
{
	return (this->type);
}