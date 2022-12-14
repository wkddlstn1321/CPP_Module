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
	Form();

public:
	Form(const std::string name, const int grade);
	Form(const Form& form);
	Form& operator=(const Form& form);
	~Form();
	std::string	getName() const;
	int	 getGrade() const;
	bool getSignature() const;
	int beSigned(const Bureaucrat& bureaucrat);
	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("grade is to High");
		}
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("grade is to Low");
		}
	};
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif
