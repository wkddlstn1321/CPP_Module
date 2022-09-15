#include"ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap is created" << std::endl;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap "<< name << " is created" << std::endl;
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " is died" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap)
{
	this->name = clapTrap.name;
	this->hitPoints = clapTrap.hitPoints;
	this->energyPoints = clapTrap.energyPoints;
	this->attackDamage = clapTrap.attackDamage;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &clapTrap)
{
	this->name = clapTrap.name;
	this->hitPoints = clapTrap.hitPoints;
	this->energyPoints = clapTrap.energyPoints;
	this->attackDamage = clapTrap.attackDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->hitPoints <= 0 || this->energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is unable act" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << \
	", causing " << this->attackDamage << " points of damage!" << std::endl;
	this->energyPoints--;
	std::cout << "====Current energyPoints is " << this->energyPoints << "====" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " takeDamage points of " << amount << std::endl;
	this->hitPoints -= amount;
	if (this->hitPoints < 0)
		this->hitPoints = 0;
	std::cout << "====Current hitPoints is " << this->hitPoints << "====" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints <= 0 || this->energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is unable act" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " " << amount << " points of Repaired " << std::endl;
	this->hitPoints += amount;
	this->energyPoints--;
	std::cout << "====Current energyPoints is " << this->energyPoints << "====" << std::endl;
	std::cout << "====Current hitPoints is " << this->hitPoints << "====" << std::endl;
}

void	ClapTrap::setAttackDamage(unsigned int num)
{
	this->attackDamage = num;
}

unsigned int	ClapTrap::getAttackDamage(void)
{
	return (this->attackDamage);
}