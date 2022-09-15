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
	// a.attack("b");
	// std::cout << std::endl;
	// b.takeDamage(a.getAttackDamage());
	// std::cout << std::endl;
	// b.beRepaired(2);
	// std::cout << std::endl;
	// a.attack("b");
	// std::cout << std::endl;
	// b.takeDamage(a.getAttackDamage());
	// std::cout << std::endl;
	// b.attack("a");
	// std::cout << std::endl;
	// a.takeDamage(b.getAttackDamage());
	// std::cout << std::endl;
	// a.beRepaired(10);
	// a.guardGate();
}