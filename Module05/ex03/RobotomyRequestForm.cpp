#include"RobotomyRequestForm.hpp"
#include<ctime>
#include<cstdlib>

RobotomyRequestForm::RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
{
	this->setTarget(target);
	std::cout << target << " RobotomyRequestForm is created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robotomyRequestForm)
{
	this->setTarget(robotomyRequestForm.getTarget());
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &robotomyRequestForm)
{
	this->setTarget(robotomyRequestForm.getTarget());
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	delete this;
	std::cout << this->getTarget() << " RobotomyRequestForm is died" << std::endl;
}

int RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (this->getSignature() == false) 
			throw Form::SignIsFalse();
		if (executor.getGrade() > 45)
			throw Form::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}
	std::cout << "drilling noises toktoktoktok~~~~" << std::endl;
	srand((unsigned int)time(NULL));
	if ((rand() % 2) == 0)
		std::cout << this->getTarget() <<" has been robotomized successfully 50% of the time" << std::endl;
	else
		std::cout << this->getTarget() << " robotomy failed..." << std::endl;
	return (0);
}

int RobotomyRequestForm::beSigned(const Bureaucrat& bureaucrat)
{
	try
	{
		if (72 < bureaucrat.getGrade())
			throw Form::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
		return (1);
	}
	this->setSignature(true);
	return (0);
}
