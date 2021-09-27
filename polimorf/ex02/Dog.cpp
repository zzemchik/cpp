#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	_dogBrain = new Brain;
	std::cout << "Call defolt constructor (Dog)" << std::endl;
}

Dog::Dog(const Dog & dog) : Animal(dog._type)
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

void Dog::makeSound( void ) const
{
	std::cout << this->_type <<  " say gav" << std::endl;
}

Dog::~Dog()
{
	delete _dogBrain;
	std::cout << "Call destructor (Dog)" << std::endl;
}

void Dog::setIdeaInBrain(const std::string &idea)
{
	_dogBrain->setIdea(idea);
}