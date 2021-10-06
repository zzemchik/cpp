#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	_CatBrain = new Brain;
	std::cout << "Call default constructor(Cat)" << std::endl;
}

Cat::Cat(const Cat & Cat) : Animal(Cat._type)
{

	this->_CatBrain = new Brain;
	std::cout << "Call copy constructor(Cat)" << std::endl;
	for (int i = 0; i < Cat._CatBrain->getCountIdea(); i++)
		this->_CatBrain->setIdea(Cat._CatBrain->getOneIdea(i));
}

Cat &Cat::operator = (const Cat & Cat)
{
	std::cout << "Call overloard operator(Cat)" << std::endl;
	if (this != &Cat)   
	{
		this->_type = Cat._type;
	this->_CatBrain->freeIdeas();
	for (int i = 0; i < Cat._CatBrain->getCountIdea(); i++)
		this->_CatBrain->setIdea(Cat._CatBrain->getOneIdea(i));
	}
	return (*this);
}

void Cat::makeSound( void ) const
{
	std::cout << this->_type <<  " say may" << std::endl;
}

Cat::~Cat()
{
	delete _CatBrain;
	std::cout << "Call destructor(Cat)" << std::endl;
}

void Cat::setIdeaInBrain(const std::string &idea)
{
	_CatBrain->setIdea(idea);
}

std::string Cat::getIdeaInBrain(const int & numderIdea) const 
{ 
	return (_CatBrain->getOneIdea(numderIdea)); 
}

int Cat::getCountIdeaInBrain( void ) const { return(this->_CatBrain->getCountIdea()); }