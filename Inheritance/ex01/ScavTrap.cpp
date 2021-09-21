#include "ScavTrap.hpp"

	ScavTrap::ScavTrap()
	{
		std::cout << "Call defult constructor ScavTrap" << std::endl;

	}

	ScavTrap::ScavTrap(const std::string & name)
	{
		std::cout << "Call name constructor ScavTrap" << std::endl;
	}

	ScavTrap::ScavTrap(const ClapTrap & c)
	{
		std::cout << "Call copy constructor ScavTrap" << std::endl;
	}

	ScavTrap::~ScavTrap()
	{
		std::cout << "Call destructor" << std::endl;
	}