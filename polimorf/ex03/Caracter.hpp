#pragma once
#include "ICaracter.hpp"
#include <iostream>

class Character : public ICharacter 
{
	private:
		Amateria *				_materia[4];
		std::string 		_name;
	public:

		Character(const std::string & name);
		Character(const Character &);
		Character & operator = (const Character &);
		std::string const & getName() const;
		void equip(Amateria * m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		~Character();

};