#include"FragTrap.hpp"

int	main(void)
{
	FragTrap	frag("FragTrap");
	ClapTrap	clap("ClapTrap");

	std::cout << std::endl;
	clap.attack("FragTrap");
	std::cout << std::endl;
	frag.takeDamage(clap.getAttackDamage());
	std::cout << std::endl;
	frag.attack("ClapTrap");
	std::cout << std::endl;
	clap.takeDamage(frag.getAttackDamage());
	std::cout << std::endl;
	frag.highFivesGuys();
	std::cout << std::endl;
}