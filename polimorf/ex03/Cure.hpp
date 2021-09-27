#pragma once
#include <iostream>
#include "Amateria.hpp"
class Cure : public Amateria
{
	public:
		Cure();
		void use(ICharacter & target);
		~Cure();
		Amateria* clone() const;

};