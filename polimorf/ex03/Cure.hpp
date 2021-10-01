#pragma once
#include <iostream>
#include "Amateria.hpp"

class Cure : public Amateria
{
	private:
		Cure(const Cure &);
		Cure & operator = (const Cure &);
	public:
		Cure();
		void use(ICharacter & target);
		~Cure();
		Amateria* clone() const;

};