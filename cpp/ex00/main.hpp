#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <string>

class Zombie {

private:
    std::string name_zombies;
    Zombie();

public:

    Zombie(std::string name)
    {
        name_zombies = name;
    }
    ~Zombie()
    {
        std::cout << name_zombies << "died\n";

    }

    void announce( void )
    {
        std::cout << name_zombies << "BraiiiiiiiiiinnnzzzzZ.....\n";
    }
  
};

    Zombie *newZombie(std::string name)
    {

    }
    void randomChump(std::string name)
    {
        name_zombies = name;
        std::cout << "BraiiiiiiiiiinnnzzzzZ.....\n";
    }
#endif