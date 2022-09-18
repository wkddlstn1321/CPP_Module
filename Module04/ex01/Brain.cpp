#include"Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain is create" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain is delete" << std::endl;
}

Brain::Brain(const Brain &brain)
{
	std::copy(std::begin(brain.ideas), std::end(brain.ideas), std::begin(this->ideas));
}

Brain&	Brain::operator=(const Brain &brain)
{
	std::copy(std::begin(brain.ideas), std::end(brain.ideas), std::begin(this->ideas));
	return (*this);
}
