#include"Zombie.hpp"

int	main(void)
{
	Zombie	*zombie;

	zombie = zombieHorde(5, "Horde~~");
	for (int i = 0 ; i < 5 ; i++)
	{
		zombie[i].announce();
	}
	delete[] zombie;
}
