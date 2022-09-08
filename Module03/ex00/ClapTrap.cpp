#include"ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap is created" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap is created" << std::endl;
	this->name = name;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap is died" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap)
{

}

void	ClapTrap::attack(const std::string& target)
{

}

void	ClapTrap::takeDamage(unsigned int amount)
{

}

void	ClapTrap::beRepaired(unsigned int amount)
{

}
