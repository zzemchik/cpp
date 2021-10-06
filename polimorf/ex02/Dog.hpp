#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *_dogBrain;
	public:
		Dog();
		Dog(const Dog &);
		Dog & operator = (const Dog &);
		virtual ~Dog();
		void makeSound( void ) const;
		void setIdeaInBrain(const std::string &);
		std::string getIdeaInBrain(const int &) const;
		int getCountIdeaInBrain( void ) const;
};