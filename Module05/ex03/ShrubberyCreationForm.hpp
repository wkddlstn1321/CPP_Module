#ifndef SHRUBBERYCREATIONFORM
# define SHRUBBERYCREATIONFORM

#include"Form.hpp"
#include"Bureaucrat.hpp"

class ShrubberyCreationForm : public Form
{
private:
	ShrubberyCreationForm();

public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& shrubberyCreationForm);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& shrubberyCreationForm);
	~ShrubberyCreationForm();
	int execute(Bureaucrat const & executor) const;
	int beSigned(const Bureaucrat& bureaucrat);
};

#endif