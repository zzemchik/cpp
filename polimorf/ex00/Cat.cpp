#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Call defolt constructor (Cat)" << std::endl;
}

Cat::Cat(const Cat & Cat)
{
	std::cout << "Call copy constructor (Cat)" << std::endl;
	this->_type = Cat._type;
}

Cat &Cat::operator = (const Cat & Cat)
{
	std::cout << "Call overloard operator (Cat)" << std::endl;
	if (this != &Cat)   
	{
		this->_type = Cat._type;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Call destructor (Cat)" << std::endl;
}

void Cat::makeSound( void ) const
{
	std::cout << this->_type <<  " say may" << std::endl;
}