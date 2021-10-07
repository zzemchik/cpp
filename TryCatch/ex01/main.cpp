
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
	Bureaucrat *f;
	Form *form;

	try 
	{
		f = new Bureaucrat("bob", 146);
		form = new Form("q", 145, 149);
		// std::cout << *form << std::endl;
		f->signForm(*form);
		// std::cout << *form << std::endl;
		delete f;
	}
	
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	try 
	{
		f = new Bureaucrat("bob", 140);
		form = new Form("q", 145, 149);
		// std::cout << *form << std::endl;
		form->beSigned(*f);
		// std::cout << *form << std::endl;
		delete f;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	
}