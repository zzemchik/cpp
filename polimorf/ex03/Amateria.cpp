#include "Amateria.hpp"

	Amateria::Amateria(const Amateria & m)
	{
		this->_type = m._type;
	}

	Amateria::Amateria(std::string const & type) : _type(type) { std::cout << "call constructor(Amateria)" << std::endl; }

	Amateria & Amateria::operator = (const Amateria & materia)
	{
		if (this != &materia)
		{
			this->_type = materia._type;
		}
		return (*this);
	}

	std::string const & Amateria::getType() const { return (_type); }

	void Amateria::use(ICharacter & target) { std::cout <<  _type << " do some shit to " << target.getName() << std::endl; }

	Amateria::~Amateria() { std::cout << "Call destructor(Amateria)" << std::endl; }