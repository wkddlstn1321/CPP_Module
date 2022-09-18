#include"Animal.hpp"
#include"Cat.hpp"
#include"Dog.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	std::cout << "========Array create========" << std::endl;
	Animal	*animal = new Animal[4];
	for (int i = 0 ; i < 4 ; i++)
	{
		if (i < 2)
			animal[i] = Dog();
		else
			animal[i] = Cat();
		std::cout << std::endl;
	}
	std::cout << "========Array delete========" << std::endl;
	delete[] animal;
	return 0;
}