#pragma once
#include "ICaracter.hpp"
#include <iostream>

class Character : public ICharacter 
{
	private:
		Amateria *				_materia[4];
		const std::string 		_name;
		int						_iter;
	public:

		Character(const std::string & name);
		~Character();
		std::string const & getName() const;
		void equip(Amateria * m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

};