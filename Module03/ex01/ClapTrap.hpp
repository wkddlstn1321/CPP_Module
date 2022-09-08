#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include<iostream>

class ClapTrap
{

private:
	std::string		name;
	unsigned int	hitPoints;
	unsigned int	energyPoints;
	unsigned int	attackDamage;

public:
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(const ClapTrap &clapTrap);
	ClapTrap	&operator=(const ClapTrap &clapTrap);
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	void	setAttackDamage(unsigned int num);
	unsigned int	getAttackDamage(void);
};

#endif