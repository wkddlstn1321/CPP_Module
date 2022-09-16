#include"ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap created" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap " << name << " is created" << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name << " is died" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &Scavtrap)
{
	this->name = Scavtrap.name;
	this->hitPoints = Scavtrap.hitPoints;
	this->energyPoints = Scavtrap.energyPoints;
	this->attackDamage = Scavtrap.attackDamage;
}

ScavTrap&	ScavTrap::operator=(ScavTrap ScavTrap)
{
	this->name = ScavTrap.name;
	this->hitPoints = ScavTrap.hitPoints;
	this->energyPoints = ScavTrap.energyPoints;
	this->attackDamage = ScavTrap.attackDamage;
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->hitPoints <= 0 || this->energyPoints <= 0)
	{
		std::cout << "SkarTrap " << this->name << " is unable act" << std::endl;
		return ;
	}
	std::cout << "SkarTrap " << this->name << " attacks " << target << \
	", causing " << this->attackDamage << " points of damage!" << std::endl;
	this->energyPoints--;
	std::cout << "====Current energyPoints is " << this->energyPoints << "====" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap "<< this->name << " is guardGateMode" << std::endl;
}