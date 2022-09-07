#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include<iostream>

class ClapTrap
{

private:
	std::string	type;

public:
	ClapTrap();
	~ClapTrap();
	ClapTrap::ClapTrap(const ClapTrap &fixed);
	ClapTrap	&operator=(const ClapTrap &fixed);
	int		getRawBits(void)const;
	void	setRawBits(int const raw);
};

#endif