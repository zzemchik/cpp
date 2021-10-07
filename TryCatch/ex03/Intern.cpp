#include "Intern.hpp"

Intern::Intern()
{
	_form[0] = "Presidential Pardon";
	_form[1] = "Robotomy Request";
	_form[2] = "Shrubbery Creation";
}

Intern::Intern(const Intern & i) { *this = i; }

Intern & Intern::operator = (const Intern & i)
{
	if (this != &i) { }
	return (*this);
}

Intern::~Intern() { }

Form * Intern::makeForm(const std::string & form, const std::string & target)
{
	int i;
	for (i = 0; i < 3; i++)
		if (_form[i] == form)
			break;
	switch (i) {
		case 0:
			return new PresidentialPardonForm(target);
		case 1:
			return new RobotomyRequestForm(target);
		case 2:
			return new ShrubberyCreationForm(target);
		default:
			throw FormNotFound();
	}
}

Intern::FormNotFound::FormNotFound() {};

const char* Intern::FormNotFound::what() const throw () { return "form not found!"; }