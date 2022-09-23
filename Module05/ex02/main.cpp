#include"Form.hpp"
#include"ShrubberyCreationForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"PresidentialPardonForm.hpp"

int	main()
{
	std::cout << "======constructor output======" << std::endl;
	Bureaucrat	insjang("ins", 1);
	Bureaucrat	jim("jim", 145);
	ShrubberyCreationForm	shrubbery("home");
	RobotomyRequestForm		robot("robot");
	PresidentialPardonForm	presi("president");
	std::cout << std::endl;

	std::cout << "======sign Test======" << std::endl;
	jim.signForm(shrubbery);
	std::cout << std::endl;
	jim.signForm(robot);
	std::cout << std::endl;
	jim.signForm(presi);
	std::cout << std::endl;

	std::cout << "======execute Test======" << std::endl;
	jim.executeForm(shrubbery);
	insjang.executeForm(robot);
	std::cout << std::endl;
	insjang.signForm(robot);
	insjang.signForm(presi);
	std::cout << std::endl;
	insjang.executeForm(shrubbery);
	insjang.executeForm(robot);
	insjang.executeForm(presi);
	std::cout << std::endl;
	std::cout << "======destructor output======" << std::endl;
}