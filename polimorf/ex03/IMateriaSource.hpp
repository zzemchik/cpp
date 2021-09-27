#pragma once

#include <iostream>

class Amateria;

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() { }
		virtual void learnMateria(Amateria * ) = 0;
		virtual Amateria * createMateria(std::string const & type) = 0;
};