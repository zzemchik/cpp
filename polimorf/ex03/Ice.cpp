#include "Ice.hpp"

Ice::Ice() : Amateria("ice") { }
void Ice::use(ICharacter& target)
{
	std::cout << "shoots an ice bolt at " << target.getName() << std::endl;
}
Ice::~Ice()	{ }

Amateria* Ice::clone() const
{
	Amateria *clone = new Ice;
	return (clone);
}