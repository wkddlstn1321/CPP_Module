#include"DiamondTrap.hpp"

int	main(void)
{
	ClapTrap	clap("ClapTrap");
	std::cout << "=============================" << std::endl;
	ScavTrap	scav("ScavTrap");
	std::cout << "=============================" << std::endl;
	FragTrap	frag("fragTrap");
	std::cout << "=============================" << std::endl;
	DiamondTrap	dia("DiamondTrap");
	std::cout << "=============================" << std::endl;
	std::cout << std::endl;

	frag.takeDamage(0);
	dia.takeDamage(0);
	std::cout << std::endl;

	scav.beRepaired(0);
	dia.beRepaired(0);
	std::cout << std::endl;

	frag.attack("clap");
	scav.attack("clap");
	dia.attack("clap");
	std::cout << std::endl;

	dia.guardGate();
	std::cout << std::endl;
	dia.highFivesGuys();
	std::cout << std::endl;
	dia.whoAmI();
	std::cout << std::endl;
}