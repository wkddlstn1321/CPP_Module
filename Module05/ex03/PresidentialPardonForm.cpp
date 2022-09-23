#include"PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
{
	this->setTarget(target);
	std::cout << target << " PresidentialPardonForm is created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &presidentialPardonForm)
{
	this->setTarget(presidentialPardonForm.getTarget());
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &presidentialPardonForm)
{
	this->setTarget(presidentialPardonForm.getTarget());
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << this->getTarget() << " PresidentialPardonForm is died" << std::endl;
}

int PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (this->getSignature() == false) 
			throw Form::SignIsFalse();
		if (executor.getGrade() > 5)
			throw Form::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	return (0);
}

int PresidentialPardonForm::beSigned(const Bureaucrat& bureaucrat)
{
	try
	{
		if (25 < bureaucrat.getGrade())
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
