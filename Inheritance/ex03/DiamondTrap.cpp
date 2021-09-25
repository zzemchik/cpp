#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string & name) :  ClapTrap(name + "_clap_name") ,_name1(name)
{
	std::cout << "Call constructor name defalt(DiamondTrap)" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap & d)
{
	std::cout << "Call constructor copy defalt(DiamondTrap)" << std::endl;
	this->_name1 = d._name;
	this->_name = d._name;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap & clap)
{
	if (this != &clap)
	{
		this->_name1 = clap._name1;
		this->_name = clap._name;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Call destructor defalt(DiamondTrap)" << std::endl;
}

void DiamondTrap::whoAmI ()
{
	std::cout << _name1 << " " << ClapTrap::_name << std::endl;
}