#include "ScavTrap.hpp"

int main()
{
	// ClapTrap a("bib");
	ScavTrap c("max");
	// ClapTrap c( b );
	// ClapTrap d;
	// d = a;
	c.attack("bib");
	c.ClapTrap::attack("bib");
	// a.attack("bob");
	c.takeDamage(20);
	c.beRepaired(10);
	c.guardGate();
	// b.takeDamage(5);
	// b.beRepaired(10);

}