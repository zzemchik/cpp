#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *_CatBrain;
	public:
		Cat();
		Cat(const Cat &);
		Cat & operator = (const Cat &);
		virtual ~Cat();
		void makeSound( void ) const;
		void setIdeaInBrain(const std::string &);
		std::string getIdeaInBrain(const int &) const;
		int getCountIdeaInBrain( void ) const;
};