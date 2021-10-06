#include "Brain.hpp"

std::string Brain::getOneIdea(const int & iter) const
{	
	if (iter < 0 || iter > 100 || iter > _iter)
		return (0);
	return(_ideas[iter]);
}

Brain::Brain() : _iter(0)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = "";
	std::cout << "Call default constructor(Brain)" << std::endl;
}

Brain::Brain(const Brain & a) : _iter(0)
{
	std::cout << "Call constructor copy(Brain)" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = a._ideas[i];
		this->_iter = a._iter;
}

Brain & Brain::operator = (const Brain & a)
{
	std::cout << "Call oerator =(Brain)" << std::endl;
	if (this != &a)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = a._ideas[i];
		this->_iter = a._iter;
	}
	return (*this);
}
void Brain::setIdea(const std::string & idea)
{
	_ideas[_iter] = idea;
	_iter++;
}

void Brain::freeIdeas( void )
{
	for (int i = 0; i < _iter; i++)
		_ideas[i] = "";
	_iter = 0;
}

int Brain::getCountIdea( void ) const { return (_iter); }

Brain::~Brain()
{
	std::cout << "Call destructor(Brain)" << std::endl;
}

