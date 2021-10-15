#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
	private:
		std::string _str;
	public:
		Weapon();
		~Weapon();
		Weapon(std::string str);
		Weapon & operator=(const Weapon& param);
		const std::string &getType(void);
		void setType(std::string str_new);
};

#endif