#include "Animal.hpp"

Animal::Animal() : _type("polimorf")
{
	std::cout << "Call defolt constructor (Animal)" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Call type constructor (Animal)" << std::endl;
}

Animal::Animal(const Animal &animal)
{
	this->_type = animal._type;
	std::cout << "Call cory constructor (Animal)" << std::endl;
}


Animal &Animal::operator = (const Animal & animal)
{
	std::cout << "Call overloard = constructor (Animal)" << std::endl;
	if (this != &animal)
	{
		this->_type = animal._type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Call destructor (Animal)" << std::endl;
}

std::string Animal::getType( void ) const { return (_type); }

void Animal::makeSound( void ) const
{
	std::cout << _type <<  " say kek" << std::endl;
}