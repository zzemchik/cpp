
#include "ClapTrap.hpp"


class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const std::string &);
		ScavTrap(const ScavTrap &);
		~ScavTrap();

		ScavTrap & operator=(const ScavTrap & clap);
		void attack(std::string const & target);
		void guardGate( void );
};
