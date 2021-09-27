#include "Cure.hpp"

Cure::Cure() : Amateria("cure") { }

void Cure::use(ICharacter& target) 
{
	std::cout << "heals " << target.getName() << " wounds" << std::endl;
}

Cure::~Cure() { }

Amateria* Cure::clone() const
{
	Amateria *clone = new Cure;
	return (clone);
}