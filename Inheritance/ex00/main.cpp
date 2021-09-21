#include "ClapTrap.hpp"

int main()
{
	ClapTrap a;
	ClapTrap b("bob");
	ClapTrap c( b );
	ClapTrap d;
	d = a;
	a.attack("bob");
	b.takeDamage(5);
	b.beRepaired(10);

}