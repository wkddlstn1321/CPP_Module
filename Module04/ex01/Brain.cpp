#include"Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor" << std::endl;
}

Brain::Brain(const Brain &brain)
{
	std::cout << "Brain copy constructor" << std::endl;
	std::copy(std::begin(brain.ideas), std::end(brain.ideas), std::begin(this->ideas));
}

Brain&	Brain::operator=(const Brain &brain)
{
	std::cout << "Brain Assignment Operator Overloading" << std::endl;
	std::copy(std::begin(brain.ideas), std::end(brain.ideas), std::begin(this->ideas));
	return (*this);
}
