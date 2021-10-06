
#pragma once
#include <iostream>

class Animal
{
	protected:
		std::string _type;
		Animal(std::string type);
	public:
		Animal(const Animal &);
		Animal &operator = (const Animal &);
		std::string getType( void ) const;
		virtual ~Animal();
		virtual void makeSound( void ) const = 0;

};