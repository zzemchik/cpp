#pragma once
#include <iostream>
#include "IMateriaSource.hpp"

class ICharacter;

class Amateria
{
	protected:
		std::string _type;
	public:
		Amateria(const Amateria &);
		Amateria(std::string const & type);
		Amateria & operator = (const Amateria &);
		std::string const & getType() const;
		virtual void use(ICharacter & target);
		virtual ~Amateria();

		virtual Amateria* clone() const = 0;
};

#include "ICaracter.hpp"
