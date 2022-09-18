#include"Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog is create" << std::endl;
	this->type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog Destructor" << std::endl;
}

Dog::Dog(const Dog &dog)
{
	this->type = dog.type;
}

Dog&	Dog::operator=(const Dog &dog)
{
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