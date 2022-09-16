#include"FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap created" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap " << name << " is created" << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " is died" << std::endl;
}

FragTrap::FragTrap(const FragTrap &Scavtrap)
{
	this->name = Scavtrap.name;
	this->hitPoints = Scavtrap.hitPoints;
	this->energyPoints = Scavtrap.energyPoints;
	this->attackDamage = Scavtrap.attackDamage;
}

FragTrap&	FragTrap::operator=(FragTrap ScavTrap)
{
	this->name = ScavTrap.name;
	this->hitPoints = ScavTrap.hitPoints;
	this->energyPoints = ScavTrap.energyPoints;
	this->attackDamage = ScavTrap.attackDamage;
	return (*this);
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap "<< this->name << " is highFivesGuys" << std::endl;
}