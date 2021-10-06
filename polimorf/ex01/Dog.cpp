#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	_dogBrain = new Brain;
	std::cout << "Call default constructor(Dog)" << std::endl;
}

Dog::Dog(const Dog & dog) : Animal(dog._type)
{

	this->_dogBrain = new Brain;
	std::cout << "Call copy constructor(Dog)" << std::endl;
	for (int i = 0; i < dog._dogBrain->getCountIdea(); i++)
		this->_dogBrain->setIdea(dog._dogBrain->getOneIdea(i));
}

Dog &Dog::operator = (const Dog & dog)
{
	std::cout << "Call overloard operator(Dog)" << std::endl;
	if (this != &dog)   
	{
		this->_type = dog._type;
		this->_dogBrain->freeIdeas();
		for (int i = 0; i < dog._dogBrain->getCountIdea(); i++)
			this->_dogBrain->setIdea(dog._dogBrain->getOneIdea(i));
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
	std::cout << "Call destructor(Dog)" << std::endl;
}

void Dog::setIdeaInBrain(const std::string &idea)
{
	_dogBrain->setIdea(idea);
}

std::string Dog::getIdeaInBrain(const int & numderIdea) const 
{ 
	return (_dogBrain->getOneIdea(numderIdea)); 
}

int Dog::getCountIdeaInBrain( void ) const { return(this->_dogBrain->getCountIdea()); }