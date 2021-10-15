
#include "Zombie.hpp"

int main()
{
	Zombie zombie("Ivan");
	Zombie *zombie1 = newZombie("Sergey");
	zombie1->announce();
	randomChump("kek");
	delete(zombie1);
}