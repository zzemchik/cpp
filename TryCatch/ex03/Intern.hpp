
#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	private:
		std::string _form[3];
		Intern & operator = (const Intern &);
		Intern(const Intern &);
	public:
		Intern();
		~Intern();
		
		Form *makeForm(const std::string &, const std::string &);

		class FormNotFound : public std::exception
		{
			public:
			FormNotFound();
			virtual const char* what() const throw ();
			virtual ~FormNotFound() throw () {};
		};

};