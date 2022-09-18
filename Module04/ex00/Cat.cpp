#include"Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor" << std::endl;
	this->type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat Destructor" << std::endl;
}

Cat::Cat(const Cat &cat)
{
	std::cout << "Cat copy constructor" << std::endl;
	this->type = cat.type;
}

Cat&	Cat::operator=(const Cat &cat)
{
	std::cout << "Cat Assignment Operator Overloading" << std::endl;
	this->type = cat.type;
	return (*this);
}

void	Cat::makeSound()const
{
	std::cout << "Cat is Meow meow~" << std::endl;
}

std::string	Cat::getType()const
{
	return (this->type);
}