#include <iostream>
#include "Amateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : IMateriaSource
{
	private:
		Amateria *_materia[4];
		int _index;
	public:
		MateriaSource();
		~MateriaSource();
		void learnMateria(Amateria * );
		Amateria * createMateria(std::string const & type);
};