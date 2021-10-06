#pragma once
#include <iostream>

class Brain
{
	private:
		std::string _ideas[100];
		int 		_iter;
	public:
		Brain();
		Brain(const Brain &);
		Brain & operator = (const Brain &);

		std::string 	getOneIdea(const int & iter) const;
		int				getCountIdea( void ) const;
		void 			setIdea(const std::string &);
		void			freeIdeas( void );

		virtual 		~Brain();
	
};