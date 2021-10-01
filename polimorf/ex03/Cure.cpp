#include "Cure.hpp"

Cure::Cure() : Amateria("cure") { std::cout << "call constructor(Cure)" << std::endl;}

void Cure::use(ICharacter& target) 
{
	std::cout << "heals " << target.getName() << " wounds" << std::endl;
}

Amateria* Cure::clone() const
{
	return new Cure();
}

Cure::~Cure() { std::cout << "Call destructor(Cure)" << std::endl; }