
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main ()
{
	Bureaucrat *f;
	Form *form;


	try 
	{
		f = new Bureaucrat("bob", 149);
		form = new ShrubberyCreationForm("house");
		f->signForm(*form);
		// std::cout << *form << std::endl;
		f->executeForm(*form);
		// std::cout << *form << std::endl;
		delete f;
		delete form;

	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}
	
	try 
	{
		f = new Bureaucrat("bob", 115);
		form = new ShrubberyCreationForm("house");
		f->signForm(*form);
		// std::cout << *form << std::endl;
		f->executeForm(*form);
		// std::cout << *form << std::endl;
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
		form = new ShrubberyCreationForm("house");
		// f->signForm(*form);
		// std::cout << *form << std::endl;
		f->executeForm(*form);
		// std::cout << *form << std::endl;
		delete f;
		delete form;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}
	
}