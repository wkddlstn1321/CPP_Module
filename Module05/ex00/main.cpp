#include"Bureaucrat.hpp"

int	main()
{
	std::cout << "======constructor output======" << std::endl;
	Bureaucrat	overGrade("over", 0);
	Bureaucrat	underGrade("under", 151);
	Bureaucrat	ins("ins", 2);
	Bureaucrat	jang("jang", 149);

	std::cout << std::endl;
	std::cout << ins << std::endl;
	std::cout << jang << std::endl;

	std::cout << std::endl;
	std::cout << "======grade Up test======" << std::endl;
	std::cout << std::endl;
	ins.gradeUp();
	std::cout << ins << std::endl;
	ins.gradeUp();
	std::cout << ins << std::endl;
	std::cout << std::endl;
	std::cout << "======grade Down test======" << std::endl;
	std::cout << std::endl;
	jang.gradeDown();
	std::cout << jang << std::endl;
	jang.gradeDown();
	std::cout << jang << std::endl;
	std::cout << std::endl;
	std::cout << "======destructor output======" << std::endl;
}