#include"Zombie.hpp"

int	main(void)
{
	Zombie	zombie("Foo");
	Zombie	zombie2("Foo2");
	Zombie	*zombie3;

	zombie.announce();
	zombie2.announce();
	zombie3 = newZombie("newZombie");
	randomChump("randomChump");
	zombie3->announce();
	delete(zombie3);
}
