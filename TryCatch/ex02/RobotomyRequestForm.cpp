#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string  & target) : Form("RobotomyRequestForm", 72, 45), _targetForm(target) { }

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & p) : Form("RobotomyRequestForm", 72, 45) { *this = p; }

RobotomyRequestForm & RobotomyRequestForm::operator = (const RobotomyRequestForm & p)
{
	if (this != &p)
		this->_targetForm = p._targetForm;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	this->checkBureaucratCan(executor);
	std::cout <<  "Makes some drilling noises, and tell us that ";
	std::cout << this->_targetForm << "  has been robotomized successfully 50% of";
	std::cout << "the time. Otherwise, tell us it’s a failure." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}