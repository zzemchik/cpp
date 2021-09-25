#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string _name;
		int			_health;
		int			_energy;
		int			_attackDamage;
	public:
		ClapTrap();
		ClapTrap(const std::string &);
		ClapTrap(const std::string &, int, int, int);
		ClapTrap(const ClapTrap &);
		~ClapTrap();

		ClapTrap & operator=(const ClapTrap & clap);
			
		virtual void attack(std::string const & target);
		void takeDamage(const unsigned int & amount);
		void beRepaired(const unsigned int & amount);
		void printParam( void );

};

#endif