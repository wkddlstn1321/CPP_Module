#ifndef BRAIN_HPP
# define BRAIN_HPP

#include<iostream>
#include<algorithm>

class Brain
{
protected:
	std::string	ideas[100];

public:
	Brain();
	~Brain();
	Brain(const Brain &brain);
	Brain &operator=(const Brain &brain);
	void setBrainIdeas(std::string str);
	void ideasPrint(int	n);
};

#endif