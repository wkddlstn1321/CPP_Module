#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include"Form.hpp"
#include"Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
private:
	PresidentialPardonForm();

public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &presidentialPardonForm);
	PresidentialPardonForm& operator=(const PresidentialPardonForm &presidentialPardonForm);
	~PresidentialPardonForm();
	int execute(Bureaucrat const & executor) const;
	int beSigned(const Bureaucrat& bureaucrat);
};

#endif