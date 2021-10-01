#pragma once
#include <iostream>
#include "Amateria.hpp"

class Ice : public Amateria
{
	private:
		Ice & operator = (const Ice &);
		Ice(const Ice &);
	public:
		Ice();
		void use(ICharacter & target);
		Amateria* clone() const; 
		~Ice();
};