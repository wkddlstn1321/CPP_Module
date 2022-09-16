#include"ScavTrap.hpp"

int	main(void)
{
	ScavTrap	Scav("ScavTrap");
	ClapTrap	clap("ClapTrap");

	std::cout << std::endl;
	clap.attack("ScavTrap");
	std::cout << std::endl;
	Scav.takeDamage(clap.getAttackDamage());
	std::cout << std::endl;
	Scav.attack("ClapTrap");
	std::cout << std::endl;
	clap.takeDamage(Scav.getAttackDamage());
	std::cout << std::endl;
	Scav.guardGate();
	std::cout << std::endl;
}