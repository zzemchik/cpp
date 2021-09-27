#include "Caracter.hpp"


 std::string const & Character::getName() const
{
	return (_name);
}

Character::Character(const std::string & name) : _name(name), _iter(0)
{

}

void Character::equip(Amateria *m)
{
	
}

void Character::unequip(int idx)
{

}

void Character::use(int idx, ICharacter & target) { _materia[idx]->use(target); }


Character::~Character() { }