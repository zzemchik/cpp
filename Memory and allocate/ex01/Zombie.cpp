#include "Zombie.hpp"

void Zombie::announce( void )
{
    std::cout << name_zombies << " " << "BraiiiiiiiiiinnnzzzzZ.....\n";
}

Zombie::~Zombie()
{
    std::cout << name_zombies << " " << "died\n";
}

void	Zombie::giveNameZombie(std::string name)
{
	name_zombies = name;
	announce();
}
Zombie::Zombie() 
{

}