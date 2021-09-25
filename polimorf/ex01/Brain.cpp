#include "Brain.hpp"
void Brain::getOneIdea(const int & iter) const
{	
	std::cout << _ideas[iter] << std::endl;
}

void Brain::getAllIdea( void ) const
{
	for (int i = 0; i < 100; i++)
		std::cout << _ideas[i] << std::endl;
}