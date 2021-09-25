#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Call defolt constructor (Dog)" << std::endl;
}

Dog::Dog(const Dog & dog)
{
	std::cout << "Call copy constructor (Dog)" << std::endl;
	this->_type = dog._type;
}

Dog &Dog::operator = (const Dog & dog)
{
	std::cout << "Call overloard operator (Dog)" << std::endl;
	if (this != &dog)   
	{
		this->_type = dog._type;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Call destructor (Dog)" << std::endl;
}

void Dog::makeSound( void ) const
{
	std::cout << this->_type <<  " say gav" << std::endl;
}