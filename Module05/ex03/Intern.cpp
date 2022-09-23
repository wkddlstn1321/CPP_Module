#include"Intern.hpp"
#include"ShrubberyCreationForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"PresidentialPardonForm.hpp"

Intern::Intern()
{
	std::cout << "Intern is employ"<< std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern was fired" << std::endl;
}

Intern::Intern(const Intern &intern)
{
	(void)intern;
}

Intern&	Intern::operator=(const Intern &intern)
{
	(void)intern;
	return (*this);
}

Form* Intern::makeForm(std::string formName, std::string targetName)
{
	std::string formType[3];

	formType[0] = "shrubbery creation";
	formType[1] = "robotomy request";
	formType[2] = "presidential pardon";
	int	i;
	for (i = 0 ; i < 3 ; i++)
	{
		if (formType[i] == formName)
			break ;
	}
	switch (i)
	{
	case 0:
		return (new ShrubberyCreationForm(targetName));
		break;
	case 1:
		return (new RobotomyRequestForm(targetName));
		break;
	case 2:
		return (new PresidentialPardonForm(targetName));
		break;
	default:
		std::cout << "non exist form name" << std::endl;
		return (0);
	}
}
