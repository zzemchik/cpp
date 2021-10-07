
#include "Bureaucrat.hpp"

int main ()
{
	Bureaucrat *f;
	try
	{
		f = new Bureaucrat("bob", 156);
		std::cout << *f << std::endl;
		delete f;
	}
	catch (std::exception & ex) 
	{
		std::cout << ex.what() << std::endl; 
	}

	try 
	{
		f = new Bureaucrat("bob", -7);
		std::cout << *f << std::endl;
		delete f;

	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	try 
	{
		f = new Bureaucrat("bob", 144);
		std::cout << *f << std::endl;
		delete f;

	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}
	delete f;
}