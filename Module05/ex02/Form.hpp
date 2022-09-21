#ifndef FORM_HPP
# define FORM_HPP

#include<iostream>
#include"Bureaucrat.hpp"

class Form
{
private:
	const std::string name;
	bool	signature;
	const int grade;

public:
	Form();
	Form(const std::string name, const int grade);
	Form(const Form& form);
	Form& operator=(const Form& form);
	virtual ~Form();
	std::string	getName() const;
	int	 getGrade() const;
	bool getSignature() const;
	int beSigned(const Bureaucrat& bureaucrat);
	virtual void execute(Bureaucrat const & executor) const = 0;
	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const _NOEXCEPT
		{
			return ("grade is to High");
		}
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const _NOEXCEPT
		{
			return ("grade is to Low");
		}
	};
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif
