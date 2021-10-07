#pragma once
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string _targetForm;
	public:
		ShrubberyCreationForm(const std::string  &);
		ShrubberyCreationForm(const ShrubberyCreationForm &);
		ShrubberyCreationForm & operator = (const ShrubberyCreationForm &);

		void execute(Bureaucrat const & executor) const;

		virtual ~ShrubberyCreationForm();
};