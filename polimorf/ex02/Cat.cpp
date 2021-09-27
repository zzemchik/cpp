#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	_catBrain = new Brain;
	std::cout << "Call defolt constructor (Cat)" << std::endl;
}

Cat::Cat(const Cat & Cat) : Animal(Cat._type)
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

void Cat::makeSound( void ) const
{
	std::cout << this->_type <<  " say may" << std::endl;
}

Cat::~Cat()
{
	delete _catBrain;
	std::cout << "Call destructor (Cat)" << std::endl;
}

void Cat::setIdeaInBrain(const std::string &idea)
{
	_catBrain->setIdea(idea);
}
