#include"DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap created" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name), ClapTrap(name), ScavTrap(name)
{
	std::cout << "DiamondTrap " << name << " is created" << std::endl;
	this->name = name;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	ClapTrap::name = name + "_clap_name";
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondTrap) : ClapTrap()
{
	this->name = diamondTrap.name;
	ClapTrap::name = diamondTrap.name + "_clap_name";
	this->hitPoints = diamondTrap.hitPoints;
	this->energyPoints = diamondTrap.energyPoints;
	this->attackDamage = diamondTrap.attackDamage;

}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap &diamondTrap)
{
	this->name = diamondTrap.name;
	this->hitPoints = diamondTrap.hitPoints;
	this->energyPoints = diamondTrap.energyPoints;
	this->attackDamage = diamondTrap.attackDamage;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->name << " is died" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << this->name << " " << 
}
