#include "Zombie.hpp"

int main()
{
	Zombie *zombie = zombieHorde(6, "Ivan");
	delete[] zombie;

}