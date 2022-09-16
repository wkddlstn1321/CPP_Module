#include"DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap created" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap " << name << " is created" << std::endl;
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondTrap)
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
	ClapTrap::name = diamondTrap.name + "_clap_name";
	this->hitPoints = diamondTrap.hitPoints;
	this->energyPoints = diamondTrap.energyPoints;
	this->attackDamage = diamondTrap.attackDamage;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->name << " is died" << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name = " << this->name << "\nClapTrap name = " << this->ClapTrap::name << std::endl;
}
