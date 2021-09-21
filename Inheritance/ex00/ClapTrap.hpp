#include <iostream>

class ClapTrap
{
	private:
		std::string _name;
		int			_health;
		int			_energy;
		int			_attackDamage;
	public:
		ClapTrap();
		ClapTrap(const std::string &);
		ClapTrap(const ClapTrap &);
		~ClapTrap();

		ClapTrap & operator=(const ClapTrap & clap);
		
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

};