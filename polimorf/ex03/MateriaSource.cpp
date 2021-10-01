#include "MateriaSource.hpp"


MateriaSource::MateriaSource()
{
	std::cout << "call constructor(MaterialSource)" << std::endl;
	for (int i = 0; i < 4; i++)
		_materia[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource & m)
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = m._materia[i];
}

MateriaSource & MateriaSource::operator =(const MateriaSource & m)
{
	if (this != &m)
	{
		for (int i = 0; i < 4; i++)
			this->_materia[i] = m._materia[i];
	}
	return (*this);
}

void MateriaSource::learnMateria(Amateria * m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] == 0)
		{
			this->_materia[i] = m;
			break;
		}
	}
}

Amateria * MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] != 0 && this->_materia[i]->getType() == type)
			return (this->_materia[i]);
	}
	return (0);
	
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		delete this->_materia[i];
	}
	std::cout << "call destructor(MateriaSource)" << std::endl;
}