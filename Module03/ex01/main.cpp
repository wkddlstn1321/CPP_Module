#include"ScarTrap.hpp"

int	main(void)
{
	ScarTrap	a("a");
	ScarTrap	b("b");

	std::cout << std::endl;
	a.attack("b");
	std::cout << std::endl;
	b.takeDamage(a.getAttackDamage());
	std::cout << std::endl;
	b.beRepaired(2);
	std::cout << std::endl;
	a.attack("b");
	std::cout << std::endl;
	b.takeDamage(a.getAttackDamage());
	std::cout << std::endl;
	b.attack("a");
	std::cout << std::endl;
	a.takeDamage(b.getAttackDamage());
	std::cout << std::endl;
	a.beRepaired(10);
	a.guardGate();
}