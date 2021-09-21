#include "ClapTrap.hpp"


class ScavTrap : ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const std::string &);
		ScavTrap(const ClapTrap &);
		~ScavTrap();

		ScavTrap & operator=(const ScavTrap & clap);
		
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};