#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

private:
    std::string _name_zombies;

public:

    Zombie();
    Zombie(const std::string &name);
    ~Zombie();
    void announce(void);
  
};

Zombie *newZombie(const std::string &name);
void randomChump(const std::string &name);

#endif