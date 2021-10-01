#include <iostream>
#include "Amateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		Amateria *_materia[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &);
		MateriaSource & operator =(const MateriaSource &);
		void learnMateria(Amateria * );
		Amateria * createMateria(std::string const & type);
		~MateriaSource();
};