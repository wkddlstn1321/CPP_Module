#include"ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a("a");
	ClapTrap	b("b");

	a.setAttackDamage(5);
	b.setAttackDamage(10);
	a.attack("b");
	b.takeDamage(a.getAttackDamage());
	b.beRepaired(2);
	a.attack("b");
	b.takeDamage(a.getAttackDamage());
	b.attack("a");
	a.takeDamage(b.getAttackDamage());
	a.beRepaired(10);
}