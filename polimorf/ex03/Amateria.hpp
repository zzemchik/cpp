#pragma once
#include <iostream>
#include "IMateriaSource.hpp"

class ICharacter;

class Amateria
{
	protected:
		std::string _type;
	public:
		Amateria(std::string const & type);
		std::string const & getType() const;
		virtual Amateria* clone() const = 0;
		virtual void use(ICharacter & target);
};