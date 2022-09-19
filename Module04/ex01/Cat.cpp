#include"Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor" << std::endl;
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
	std::cout << "Cat copy constructor" << std::endl;
	this->type = cat.type;
	this->brain = new Brain(*cat.brain);
}

Cat&	Cat::operator=(const Cat &cat)
{
	std::cout << "Cat Assignment Operator Overloading" << std::endl;
	this->type = cat.type;
	delete this->brain;
	this->brain = new Brain(*cat.brain);
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

void	Cat::brainPrint(int n)
{
	this->brain->ideasPrint(n);
}

void	Cat::setBrain(std::string str)
{
	this->brain->setBrainIdeas(str);
}