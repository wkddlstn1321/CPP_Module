#include"DiamondTrap.hpp"

int	main(void)
{
	std::cout << std::endl;
	std::cout << std::endl;
	ClapTrap	clap("ClapTrap");
	std::cout << "=============================" << std::endl;
	ScavTrap	scav("ScavTrap");
	std::cout << "=============================" << std::endl;
	FragTrap	frag("fragTrap");
	std::cout << "=============================" << std::endl;
	DiamondTrap	monster("DiamondTrap");
	std::cout << "=============================" << std::endl;
	std::cout << std::endl;

	frag.takeDamage(clap.getAttackDamage());
	monster.takeDamage(clap.getAttackDamage());
	std::cout << std::endl;

	scav.beRepaired(0);
	std::cout << std::endl;
	monster.beRepaired(0);
	std::cout << std::endl;

	frag.attack("clap");
	std::cout << std::endl;
	scav.attack("clap");
	std::cout << std::endl;
	monster.attack("clap");
	std::cout << std::endl;

	monster.whoAmI();
}