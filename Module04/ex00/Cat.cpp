#include"Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat is create" << std::endl;
	this->type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat Destructor" << std::endl;
}

Cat::Cat(const Cat &cat)
{
	this->type = cat.type;
}

Cat&	Cat::operator=(const Cat &cat)
{
	this->type = cat.type;
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