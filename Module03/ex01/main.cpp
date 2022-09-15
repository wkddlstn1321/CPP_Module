#include"ScarTrap.hpp"

int	main(void)
{
	ScarTrap	scar("ScarTrap");
	ClapTrap	clap("ClapTrap");

	std::cout << std::endl;
	clap.attack("ScarTrap");
	std::cout << std::endl;
	scar.takeDamage(clap.getAttackDamage());
	std::cout << std::endl;
	scar.attack("ClapTrap");
	std::cout << std::endl;
	clap.takeDamage(scar.getAttackDamage());
	std::cout << std::endl;
	scar.guardGate();
	std::cout << std::endl;
}