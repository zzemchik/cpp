#include "Zombie.hpp"

void Zombie::announce( void )
{
    std::cout << _name_zombies << " " << "BraiiiiiiiiiinnnzzzzZ.....\n";
}

Zombie::~Zombie()
{
    std::cout << _name_zombies << " " << "died\n";
}

Zombie::Zombie(const std::string &name)
{
    _name_zombies = name;
}