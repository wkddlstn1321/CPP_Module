#include"Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog is create" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog Destructor" << std::endl;
	delete this->brain;
}

Dog::Dog(const Dog &dog)
{
	this->type = dog.type;
	delete this->brain;
	this->brain = new Brain();
	this->brain = dog.brain;
}

Dog&	Dog::operator=(const Dog &dog)
{
	this->type = dog.type;
	delete this->brain;
	this->brain = new Brain();
	this->brain = dog.brain;
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