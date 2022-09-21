#include"Form.hpp"

int	main()
{
	std::cout << "======constructor output======" << std::endl;
	Form		over("over", 0);
	Form		a("a", 3);
	Form		b("b", 148);
	Bureaucrat	ins("ins", 2);
	Bureaucrat	jang("jang", 149);
	std::cout << std::endl;

	std::cout << a.getName() << std::endl; 
	std::cout << a.getGrade() << std::endl;
	std::cout << a.getSignature() << std::endl;
	std::cout << std::endl;

	std::cout << "======signed success case======" << std::endl;
	std::cout << a << std::endl;
	ins.signForm(a);
	std::cout << std::endl;
	std::cout << a << std::endl;
	std::cout << "======signed fail case======" << std::endl;
	std::cout << b << std::endl;
	jang.signForm(b);
	std::cout << std::endl;
	std::cout << b << std::endl;
	std::cout << std::endl;

	std::cout << "======destructor output======" << std::endl;
}