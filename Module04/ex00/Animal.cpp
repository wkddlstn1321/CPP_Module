#include"Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal is create" << std::endl;
}

Animal::Animal(std::string type)
{
	std::cout << "Animal " << type << " is create" << std::endl;
	this->type = type;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor" << std::endl;
}

Animal::Animal(const Animal &animal)
{
	this->type = animal.type;
}

Animal&	Animal::operator=(const Animal &animal)
{
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