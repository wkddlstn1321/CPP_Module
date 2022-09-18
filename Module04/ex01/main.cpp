#include"Animal.hpp"
#include"Cat.hpp"
#include"Dog.hpp"
#include"WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;

	const WrongAnimal*	wronganimal = new WrongAnimal();
	const WrongAnimal*	wrongcat = new WrongCat();
	wronganimal->makeSound();
	wrongcat->makeSound();
	delete meta;
	delete j;
	delete i;
	delete wrongcat;
	delete wronganimal;
	return 0;
}