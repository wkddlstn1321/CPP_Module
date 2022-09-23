#include"Bureaucrat.hpp"
#include"Form.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	try
	{
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
		this->grade = 0;
		return ;
	}
	std::cout << name << " is employ" << std::endl;
	this->grade = grade;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << this->name << " was fired" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat) : name(bureaucrat.name)
{
	this->grade = bureaucrat.grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bureaucrat)
{
	(void)bureaucrat;
	std::cout << "Bureaucrat::std::string name is const [ = ] This operator is not available" << std::endl;
	return (*this);
}

std::string	Bureaucrat::getName()const
{
	return (this->name);
}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

void	Bureaucrat::gradeUp()
{
	try
	{
		if (grade - 1 < 1)
			throw Bureaucrat::GradeTooHighException();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
		return ;
	}
	std::cout << this->name << " is grade Up" << std::endl;
	this->grade -= 1;
}

void	Bureaucrat::gradeDown()
{
	try
	{
		if (grade + 1 > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
		return ;
	}
	std::cout << this->name << " is grade Down" << std::endl;
	this->grade += 1;
}

void	Bureaucrat::signForm(Form &form)
{
	int	checkSign;

	checkSign = form.beSigned(*this);
	if (checkSign == 1)
	{
		std::cout << this->name << " couldn’t sign " << form.getTarget() << " because " << this->name << " grade to low " << std::endl;
	}
	else
		std::cout << this->name << " signed " << form.getTarget() << std::endl; 
}

void	Bureaucrat::executeForm(Form &form)
{
	int	checkSign;

	checkSign = form.execute(*this);
	if (checkSign == 1)
	{
		if (form.getSignature() == false)
		{
			std::cout << this->name << " couldn’t excute " << form.getTarget() << " because " <<
			form.getTarget() << " sign is false status" << std::endl;
		}
		else
		{
			std::cout << this->name << " couldn’t excute " << form.getTarget() << " because " << this->name << " grade to low " << std::endl;
		}
	}
	else
		std::cout << this->name << " excuted " << form.getTarget() << std::endl; 
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (os);
}
