#pragma once
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string _targetForm;
	public:
		PresidentialPardonForm(const std::string &);
		PresidentialPardonForm(const PresidentialPardonForm &);
		PresidentialPardonForm & operator = (const PresidentialPardonForm &);

		void execute(Bureaucrat const & executor) const;
		
		virtual ~PresidentialPardonForm();
};