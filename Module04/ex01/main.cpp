#include"Animal.hpp"
#include"Cat.hpp"
#include"Dog.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	// Animal	*animal = new Animal[4];
	// for (int i = 0 ; i < 50 ; i++)
	// {
	// 	if (i < 25)
	// 		animal[i] = Dog();
	// 	else
	// 		animal[i] = Cat();
	// 	std::cout << std::endl;
	// }
	// delete[] animal;
	system("leaks Animal");
	return 0;
}