#include"Bureaucrat.hpp"

int	main()
{
	Bureaucrat	ins("ins", 2);
	Bureaucrat	jang("jang", 149);
	Bureaucrat	high_grade("high_grade", 151);

	std::cout << high_grade << std::endl;
	std::cout << std::endl;
	ins.gradeUp();
	std::cout << std::endl;
	std::cout << ins << std::endl;
	std::cout << std::endl;
	jang.gradeDown();
	std::cout << std::endl;
	std::cout << jang << std::endl;
	std::cout << std::endl;
	ins.gradeUp();
	std::cout << std::endl;
	std::cout << ins << std::endl;
	std::cout << std::endl;
	jang.gradeDown();
	std::cout << std::endl;
	std::cout << jang << std::endl;
}