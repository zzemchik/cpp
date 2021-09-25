#pragma once
#include <iostream>

class Brain
{
	private:
		std::string _ideas[100];
	public:
		void getOneIdea(const int & iter) const;
		void getAllIdea( void ) const;
	
};