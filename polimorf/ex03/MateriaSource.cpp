#include "MateriaSource.hpp"



void MateriaSource::learnMateria(Amateria * materia)
{
	_materia[_index] = materia;
	_index++;
}

Amateria * MateriaSource::createMateria(std::string const & type)
{

}

MateriaSource::MateriaSource() : _index(0)
{

}