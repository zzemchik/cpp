#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string  & target) : Form("ShrubberyCreationForm", 145, 137), _targetForm(target) { }

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & p) : Form("ShrubberyCreationForm", 145, 137) { *this = p;}

ShrubberyCreationForm & ShrubberyCreationForm::operator = (const ShrubberyCreationForm & p)
{
	if (this != &p)
		this->_targetForm = p._targetForm;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	this->checkBureaucratCan(executor);
	std::cout <<  "Create a file called  " << this->_targetForm;
	std::cout << " shrubbery, and write ASCII trees inside it, in the current directory.";
 	std::cout << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}