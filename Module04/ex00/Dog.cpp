#include"Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor" << std::endl;
	this->type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog Destructor" << std::endl;
}

Dog::Dog(const Dog &dog)
{
	std::cout << "Dog copy constructor" << std::endl;
	this->type = dog.type;
}

Dog&	Dog::operator=(const Dog &dog)
{
	std::cout << "Dog Assignment Operator Overloading" << std::endl;
	this->type = dog.type;
	return (*this);
}

void	Dog::makeSound()const
{
	std::cout << "Dog is bowwow~" << std::endl;
}

std::string	Dog::getType()const
{
	return (this->type);
}