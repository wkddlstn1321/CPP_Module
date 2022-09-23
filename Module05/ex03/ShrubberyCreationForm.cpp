#include"ShrubberyCreationForm.hpp"
#include<fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
{
	this->setTarget(target);
	std::cout << target << " ShrubberyCreationForm is created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& shrubberyCreationForm)
{
	this->setTarget(shrubberyCreationForm.getTarget());
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& shrubberyCreationForm)
{
	this->setTarget(shrubberyCreationForm.getTarget());
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	delete this;
	std::cout << this->getTarget() << " ShrubberyCreationForm is died" << std::endl;
}

int ShrubberyCreationForm::beSigned(const Bureaucrat& bureaucrat)
{
	try
	{
		if (145 < bureaucrat.getGrade())
			throw Form::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
		return (1);
	}
	this->setSignature(true);
	return (0);
}

int ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream ofs;
	try
	{
		if (this->getSignature() == false) 
			throw Form::SignIsFalse();
		if (executor.getGrade() > 137)
			throw Form::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}
	std::string filename = this->getTarget() + "_srubbery";
	ofs.open(filename);
	std::string	treeArt = 
							"                                   .         ;\n"
							"      .              .              ;%     ;;\n"
							"        ,           ,                :;%  %;\n"
							"         :         ;                   :;%;'     .,\n"
							",.        %;     %;            ;        %;'    ,;\n"
							"  ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
							"   %;       %;%;      ,  ;       %;  ;%;   ,%;'\n"
							"    ;%;      %;        ;%;        % ;%;  ,%;'\n"
							"     `%;.     ;%;     %;'         `;%%;.%;'\n"
							"      `:;%.    ;%%. %@;        %; ;@%;%'\n"
							"         `:%;.  :;bd%;          %;@%;'\n"
							"           `@%:.  :;%.         ;@@%;'\n"
							"             `@%.  `;@%.      ;@@%;\n"
							"               `@%%. `@%%    ;@@%;\n"
							"                 ;@%. :@%%  %@@%;\n"
							"                   %@bd%%%bd%%:;\n"
							"                     #@%%%%%:;;\n"
							"                     %@@%%%::;\n"
							"                     %@@@%(o);  . '\n"
							"                     %@@@o%;:(.,'\n"
							"                 `.. %@@@o%::;\n"
							"                    `)@@@o%::;\n"
							"                     %@@(o)::;\n"
							"                    .%@@@@%::;\n"
							"                    ;%@@@@%::;.\n"
							"                   ;%@@@@%%:;;;.\n"
							"               ...;%@@@@@%%:;;;;,..    Gilo97\n"
							"\n"
							"------------------------------------------------\n"
							"Thank you for visiting https://asciiart.website/\n"
							"This ASCII pic can be found at\n"
							"https://asciiart.website/index.php?art=plants/trees";
	ofs.write(treeArt.c_str(), treeArt.length());
	ofs.close();
	return (0);
}
