#include"FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap created" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap is created" << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap is died" << std::endl;
}

FragTrap::FragTrap(const FragTrap &scartrap)
{
	this->name = scartrap.name;
	this->hitPoints = scartrap.hitPoints;
	this->energyPoints = scartrap.energyPoints;
	this->attackDamage = scartrap.attackDamage;
}

FragTrap&	FragTrap::operator=(FragTrap scarTrap)
{
	this->name = scarTrap.name;
	this->hitPoints = scarTrap.hitPoints;
	this->energyPoints = scarTrap.energyPoints;
	this->attackDamage = scarTrap.attackDamage;
	return (*this);
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap "<< this->name << " is highFivesGuys" << std::endl;
}