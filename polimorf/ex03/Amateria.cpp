#include "Amateria.hpp"

	Amateria::Amateria(std::string const & type) : _type(type) { }
	std::string const & Amateria::getType() const { return (_type); }
	void Amateria::use(ICharacter & target) { std::cout <<  _type << " do some shit to " << target.getName() << std::endl; }