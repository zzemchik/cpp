#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

int main()
{

	ScavTrap c("max");
	FlagTrap f("bob");
	// ClapTrap c( b );
	// ClapTrap d;
	// d = a;
	f.attack("pip");
	c.attack("bib");
	f.highFivesGuys();
	c.takeDamage(20);
	c.beRepaired(10);
	c.guardGate();
	// b.takeDamage(5);
	// b.beRepaired(10);

}