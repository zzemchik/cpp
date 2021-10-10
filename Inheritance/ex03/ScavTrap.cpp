#include "ScavTrap.hpp"

	ScavTrap::ScavTrap(const std::string & name) : ClapTrap(name, 100, 100, 30)
	{
		std::cout << "Call constructor name(ScavTrap)" << std::endl;
	}

	ScavTrap::ScavTrap() : ClapTrap("defolt bob2", 100, 100, 30)
	{
		// _energy = 3;
		std::cout << "Call defolt constructor name(ScavTrap)" << std::endl;
	}

	ScavTrap::ScavTrap(const ScavTrap & scav)
	{
		std::cout << "Call copy constructor(ScavTrap)" << std::endl;
		*this = scav;
	}

	ScavTrap::~ScavTrap()
	{
		std::cout << "Call destructor(ScavTrap)" << std::endl;
	}


	void ScavTrap::attack(std::string const & target)
	{
		std::cout << ClapTrap::_name << " attack " << target << ", causing " << ClapTrap::_attackDamage;
		std::cout << " points of damage!(ScavTrap)" << std::endl;
	}

	ScavTrap & ScavTrap::operator=(const ScavTrap & clap)
	{
		if (this != &clap)
		{

		}	
		return (*this);	
	}

	void ScavTrap::guardGate()
	{
		std::cout << ClapTrap::_name << "  have enterred in Gate keeper mode" << std::endl;
	}


