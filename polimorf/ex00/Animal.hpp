
#pragma once
#include <iostream>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		Animal(const Animal &);
		Animal(std::string type);
		Animal &operator = (const Animal &);
		std::string getType( void ) const;
		virtual ~Animal();
		virtual void makeSound( void ) const;

};