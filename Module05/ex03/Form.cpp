#include"Form.hpp"

Form::Form() : grade(0)
{
	std::cout << "Form constructor" << std::endl;
}

Form::Form(const std::string name, const int grade) : name(name), grade(grade)
{
	this->signature = false;
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
		const_cast<int&>(this->grade) = 0;
		return ;
	}
	std::cout << name << " is create" << std::endl;
}

Form::Form(const Form& form) : name(form.name), grade(form.grade)
{
	this->signature = false;
	std::cout << name << " is copyConstructor" << std::endl;
}

Form& Form::operator=(const Form& form)
{
	(void)form;
	std::cout << "Form::std::string name & Form::int grade is const [ = ] This operator is not available" << std::endl;
	return (*this);
}

Form::~Form()
{
	std::cout << "Form destructor" << std::endl;
}

std::string	Form::getName() const
{
	return (this->name);
}

int	 Form::getGrade() const
{
	return (this->grade);
}

bool Form::getSignature() const
{
	return (this->signature);
}

std::ostream& operator<<(std::ostream& os, const Form& form)
{
	os << form.getTarget() << ", form grade " << form.getGrade() << ", form sign " << form.getSignature() << std::endl;
	return (os);
}

void	Form::setTarget(std::string target)
{
	this->target = target;
}
std::string	Form::getTarget() const
{
	return (this->target);
}
void	Form::setSignature(bool status)
{
	this->signature = status;
}