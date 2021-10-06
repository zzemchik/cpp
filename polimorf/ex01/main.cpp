#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Animal qwe("asd");

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

	Dog a;
	a.setIdeaInBrain("qwer");
	a.setIdeaInBrain("1234");
	Dog e(a);
	a.setIdeaInBrain("ddddd");
	for (int i = 0; i < a.getCountIdeaInBrain(); i++)
		std::cout << a.getIdeaInBrain(i) << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < e.getCountIdeaInBrain(); i++)
		std::cout << a.getIdeaInBrain(i) << std::endl;
}
