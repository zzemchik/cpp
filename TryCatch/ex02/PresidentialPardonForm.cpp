#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string  & target) : Form("PresidentialPardonForm", 25, 5), _targetForm(target) { }

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & p) : Form("PresidentialPardonForm", 25, 5) { *this = p; }

PresidentialPardonForm & PresidentialPardonForm::operator = (const PresidentialPardonForm & p)
{
	if (this != &p)
		this->_targetForm = p._targetForm;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	this->checkBureaucratCan(executor);
	std::cout <<  "Tells us " << this->_targetForm << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
PresidentialPardonForm::~PresidentialPardonForm()
{}