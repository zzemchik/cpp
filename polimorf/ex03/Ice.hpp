#pragma once
#include <iostream>
#include "Amateria.hpp"
class Ice : public Amateria
{
	public:
		Ice();
		void use(ICharacter & target);
		~Ice();
		Amateria* clone() const; 
};