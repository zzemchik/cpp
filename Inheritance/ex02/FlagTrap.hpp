#include "ClapTrap.hpp"


class FlagTrap : public ClapTrap
{
	public:
		FlagTrap();
		FlagTrap(const std::string &);
		FlagTrap(const FlagTrap &);
		~FlagTrap();
		FlagTrap & operator=(const FlagTrap & clap);
		void highFivesGuys ( void );
};