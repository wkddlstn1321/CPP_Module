#include<iostream>

int	main(void)
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string	*brainPTR = &brain;
	std::string	&brainREF = brain;

	std::cout << "brain    address : " << &brain << std::endl;
	std::cout << "brainPTR address : " << brainPTR << std::endl;
	std::cout << "brainREF address : " << &brainREF << std::endl;

	std::cout << std::endl;

	std::cout << "brain    value : " << brain << std::endl;
	std::cout << "brainPTR value : " << *brainPTR << std::endl;
	std::cout << "brainREF value : " << brainREF << std::endl;
}