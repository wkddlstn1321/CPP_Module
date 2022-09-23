#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include"Form.hpp"
#include"Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
private:
	RobotomyRequestForm();

public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &robotomyRequestForm);
	RobotomyRequestForm& operator=(const RobotomyRequestForm &robotomyRequestForm);
	~RobotomyRequestForm();
	int execute(Bureaucrat const & executor) const;
	int beSigned(const Bureaucrat& bureaucrat);
};

#endif
