#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

private:
    std::string name_zombies;

public:

    Zombie();
    ~Zombie();
    void    giveNameZombie(std::string name);
    void    announce(void);
  
};

Zombie* zombieHorde( int N, std::string name );
#endif