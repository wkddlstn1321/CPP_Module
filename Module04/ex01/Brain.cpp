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

void	Brain::setBrainIdeas(std::string str)
{
	for (int i = 0 ; i < 100 ; i++)
		this->ideas[i] = str;
}

void	Brain::ideasPrint(int n)
{
	if (n > 100 || n < 0)
		std::cout << "0 <= n <= 100" << std::endl;
	for (int i = 0 ; i < n ; i++)
		std::cout << this->ideas[i] << std::endl;
}