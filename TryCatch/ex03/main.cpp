
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
int main ()
{
	Bureaucrat *f;
	Form *form;
	try 
	{
		f = new Bureaucrat("bob", 149);
		Intern intern;
		form = intern.makeForm("Presidential Pardon", "bob");
		f->signForm(*form);
		f->executeForm(*form);
		delete f;
		delete form;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}
	try 
	{
		f = new Bureaucrat("bob", 149);
		Intern intern;
		form = intern.makeForm("Presidential Pardon123", "bob");
		f->signForm(*form);
		f->executeForm(*form);
		delete f;
		delete form;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}
	try 
	{
		f = new Bureaucrat("bob", 149);
		Intern intern;
		form = intern.makeForm("Robotomy Request", "bob");
		f->signForm(*form);
		f->executeForm(*form);
		delete f;
		delete form;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}
	
}