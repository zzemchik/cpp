
#include "HumanB.hpp"

void HumanB::attack()
{
	std::cout << _name << " attack with his " << _weapon->getType() << std::endl;
}

HumanB::HumanB(){}

HumanB::HumanB(std::string name)
{
	_weapon = new Weapon();
	_weapon->setType("finger");
	_name = name;
}

void HumanB::setWeapon(Weapon weapon)
{
	
	_weapon->setType(weapon.getType());
}
HumanB::HumanB(std::string name, std::string str)
{
	_name = name;
	_weapon->setType(str);
}

HumanB::~HumanB()
{

}