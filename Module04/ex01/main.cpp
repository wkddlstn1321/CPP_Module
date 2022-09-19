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
	Animal	*animal[4];
	std::cout << std::endl;
	for (int i = 0 ; i < 4 ; i++)
	{
		if (i < 2)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
		std::cout << std::endl;
	}
	std::cout << "========sound test========" << std::endl;
	for (int i = 0 ; i < 4 ; i++)
	{
		animal[i]->makeSound();
		std::cout << std::endl;
	}
	std::cout << "========Array delete========" << std::endl;
	for (int i = 0 ; i < 4 ; i++)
	{
		delete animal[i];
		std::cout << std::endl;
	}
	std::cout << "=========deep copy test===============" << std::endl;
	Cat	cat1;
	Cat cat2;
	cat1.setBrain("cat");
	cat2 = cat1;
	cat1.setBrain("Dog?");
	std::cout << "cat1" << std::endl;
	cat1.brainPrint(5);
	std::cout << "cat2" << std::endl;
	cat2.brainPrint(5);
	return 0;
}