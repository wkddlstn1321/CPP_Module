#ifndef INTERN_HPP
# define INTERN_HPP

#include"Form.hpp"

class Intern
{
private:

public:
	Intern();
	~Intern();
	Intern(const Intern &intern);
	Intern&	operator=(const Intern &intern);
	Form* makeForm(std::string formName, std::string targetName);
};

#endif