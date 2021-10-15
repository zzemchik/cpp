#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string 	_name;
		Weapon 			*_weapon;
		HumanB();
	public:
		HumanB(std::string name, std::string str);
		HumanB(std::string name);
		void setWeapon(Weapon weapon);
		~HumanB();
		void attack();

};

#endif 