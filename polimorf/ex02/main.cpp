#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();


	Animal *q[10];
	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			q[i] = new Dog();
		else 
			q[i] = new Cat();
	}
	q[2]->makeSound();
	q[7]->makeSound();

	for (int i = 0; i < 10; i++)
		delete q[i];
	delete j;
	delete i;
}
