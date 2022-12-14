#include"ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a("a");
	ClapTrap	b("b");

	std::cout << std::endl;
	a.setAttackDamage(5);
	b.setAttackDamage(10);

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
	std::cout << "==============a hitpoint 0 status=================" << std::endl;
	a.beRepaired(10);
	std::cout << std::endl;
	for (int i = 0 ; i < 8 ; i++)
		b.attack("a");
	std::cout << "==============b energy 0 status=================" << std::endl;
	b.attack("a");
}