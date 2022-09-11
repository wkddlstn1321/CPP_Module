#include"ScarTrap.hpp"

ScarTrap::ScarTrap()
{
	std::cout << "ScarTrap created" << std::endl;
}

ScarTrap::ScarTrap(std::string name)
{
	std::cout << "ScarTrap is created" << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScarTrap::~ScarTrap()
{
	std::cout << "ScarTrap is died" << std::endl;
}

ScarTrap::ScarTrap(const ScarTrap &scartrap)
{
	this->name = scartrap.name;
	this->hitPoints = scartrap.hitPoints;
	this->energyPoints = scartrap.energyPoints;
	this->attackDamage = scartrap.attackDamage;
}

ScarTrap&	ScarTrap::operator=(ScarTrap scarTrap)
{
	this->name = scarTrap.name;
	this->hitPoints = scarTrap.hitPoints;
	this->energyPoints = scarTrap.energyPoints;
	this->attackDamage = scarTrap.attackDamage;
	return (*this);
}

void	ScarTrap::attack(const std::string& target)
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

void	ScarTrap::guardGate()
{
	std::cout << "ScarTrap "<< this->name << " is guardGateMode" << std::endl;
}