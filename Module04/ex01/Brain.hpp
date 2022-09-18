#ifndef BRAIN_HPP
# define BRAIN_HPP

#include<iostream>

class Brain
{
protected:
	std::string	ideas[100];

public:
	Brain();
	Brain(std::string type);
	virtual ~Brain();
	Brain(const Brain &animal);
	Brain &operator=(const Brain &animal);
	virtual void	makeSound()const;
	std::string	getType()const;
};

#endif