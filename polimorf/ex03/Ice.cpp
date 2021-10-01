#include "Ice.hpp"

Ice::Ice() : Amateria("ice") { std::cout << "call constructor(ice)" << std::endl;}

void Ice::use(ICharacter& target)
{
	std::cout << "shoots an ice bolt at " << target.getName() << std::endl;
}

Amateria* Ice::clone() const
{
	return new Ice();
}

Ice::~Ice()	{ std::cout << "Call destructor(Ice)" << std::endl; }