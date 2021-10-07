#pragma once
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string _targetForm;
	public:
		RobotomyRequestForm(const std::string  &);
		RobotomyRequestForm(const RobotomyRequestForm &);
		RobotomyRequestForm & operator = (const RobotomyRequestForm &);

		void execute(Bureaucrat const & executor) const;

		virtual ~RobotomyRequestForm();
};