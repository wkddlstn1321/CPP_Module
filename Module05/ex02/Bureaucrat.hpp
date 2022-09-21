#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include<iostream>
#include<exception>

class Form;

class Bureaucrat
{
private:
	const std::string	name;
	int					grade;
	Bureaucrat();

public:
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat& bureaucrat);
	Bureaucrat& operator=(const Bureaucrat& bureaucrat);
	std::string	getName() const;
	int		getGrade() const;
	void	gradeUp();
	void	gradeDown();
	void	signForm(Form &form);
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

std::ostream& operator<<(std::ostream& os, const Bureaucrat& Bureaucrat);

#endif