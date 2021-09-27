#pragma once
#include <iostream>

class Brain
{
	private:
		std::string _ideas[100];
		static int _iter;
	public:
		Brain();
		Brain(const Brain &);
		Brain & operator = (const Brain &);
		std::string getOneIdea(const int & iter) const;
		void setIdea(std::string);
		~Brain();
	
};