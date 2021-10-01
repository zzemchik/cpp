#include "Caracter.hpp"

Character::Character(const std::string & name) : _name(name)
{
	std::cout << "call constructor(Character)" << std::endl;
	for (int i = 0; i < 4; i++)
		_materia[i] = 0;
}

Character::Character(const Character & c)
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = c._materia[i];
		this->_name = c._name;
}

Character & Character::operator = (const Character & c)
{
	if (this != &c)
	{	
		for (int i = 0; i < 4; i++)
		this->_materia[i] = c._materia[i];
		this->_name = c._name;
	}
	return (*this);
}

 std::string const & Character::getName() const
{
	return (_name);
}

void Character::equip(Amateria *m)
{
	if (m)
		for (int i = 0; i < 4; i++)
		{
			if (_materia[i] == 0)
			{
				_materia[i] = m->clone();
				break;
			}
		}
	
}

void Character::unequip(int idx)
{
	delete  _materia[idx];
	_materia[idx] = 0;
}

void Character::use(int idx, ICharacter & target) 
{
	if (idx < 0 || idx > 3 || _materia[idx] == 0)
		return ;
	_materia[idx]->use(target);
}


Character::~Character() 
{ 
	for (int i = 0; i < 4; i++)
		delete this->_materia[i];
	std::cout << "call destructor(Character)" << std::endl; 
}