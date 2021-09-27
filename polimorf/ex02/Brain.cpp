#include "Brain.hpp"

int Brain::_iter = 0;
std::string Brain::getOneIdea(const int & iter) const
{	
	return(_ideas[iter]);
}

Brain::Brain()
{
	std::cout << "Call constructor defult(Brain)" << std::endl;
}

Brain::Brain(const Brain & a) 
{
	std::cout << "Call constructor copy(Brain)" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = a._ideas[i];
		this->_iter = a._iter;
}

Brain & Brain::operator = (const Brain & a)
{
	std::cout << "Call oerator = (Brain)" << std::endl;
	if (this != &a)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = a._ideas[i];
		this->_iter = a._iter;
	}
	return (*this);
}
void Brain::setIdea(std::string idea)
{
	_ideas[_iter] = idea;
	_iter++;
}

Brain::~Brain()
{
	std::cout << "Call destructor(Brain)" << std::endl;
}

