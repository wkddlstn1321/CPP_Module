#ifndef FORM_HPP
# define FORM_HPP

#include<iostream>
#include"Bureaucrat.hpp"

class Form
{
private:
	const std::string name;
	std::string target;
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
	virtual int beSigned(const Bureaucrat& bureaucrat) = 0;
	virtual int execute(Bureaucrat const & executor) const = 0;
	void	setTarget(std::string target);
	std::string	getTarget() const;
	void	setSignature(bool status);
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
	class SignIsFalse : public std::exception
	{
	public:
		const char *what() const _NOEXCEPT
		{
			return ("sign is false status");
		}
	};
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif
