

#include "FlagTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FlagTrap, public ScavTrap
{
	private:
		std::string _name1;
	public:
		DiamondTrap(const std::string &);
		DiamondTrap(const DiamondTrap &);
		~DiamondTrap();
		DiamondTrap & operator=(const DiamondTrap & clap);
		void whoAmI ();
};

