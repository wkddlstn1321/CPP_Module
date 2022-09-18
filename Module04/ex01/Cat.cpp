#include"Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat is create" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat Destructor" << std::endl;
	delete this->brain;
}

Cat::Cat(const Cat &cat)
{
	this->type = cat.type;
	delete this->brain;
	this->brain = new Brain();
	this->brain = cat.brain;
}

Cat&	Cat::operator=(const Cat &cat)
{
	this->type = cat.type;
	delete this->brain;
	this->brain = new Brain();
	this->brain = cat.brain;
	return (*this);
}

void	Cat::makeSound()const
{
	std::cout << "cat is Meow meow~" << std::endl;
}

std::string	Cat::getType()const
{
	return (this->type);
}