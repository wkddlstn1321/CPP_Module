#ifndef SHRUBBERYCREATIONFORM
# define SHRUBBERYCREATIONFORM

#include"Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	ShrubberyCreationForm();

public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& shrubberyCreationForm);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& shrubberyCreationForm);
	~ShrubberyCreationForm();
	void execute(Bureaucrat const & executor) const;
};

#endif
//ShrubberyCreationForm