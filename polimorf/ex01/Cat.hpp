#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *_catBrain;
	public:
		Cat();
		Cat(const Cat &);
		Cat & operator = (const Cat &);
		~Cat();
		void makeSound( void ) const;
};