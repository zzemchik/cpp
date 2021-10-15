#include "Weapon.hpp"

const std::string &Weapon::getType(void)
{
	return((const std::string &)_str);
}

void Weapon::setType(std::string str_new)
{
	_str = str_new;
}
Weapon::Weapon(std::string str) : _str(str) {}
Weapon::~Weapon() {}
Weapon::Weapon() {}
Weapon & Weapon::operator=(const Weapon& param)
{
	if (this != &param)
		this->_str = param._str;
	_str = param._str;
	return (*this);
}