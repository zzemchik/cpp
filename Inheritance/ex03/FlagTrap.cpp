#include "FlagTrap.hpp"

	FlagTrap::FlagTrap(const std::string & name) : ClapTrap(name, 100, 50, 20)
	{
		std::cout << "Call constructor name(FlagTrap)" << std::endl;

	}

	FlagTrap::FlagTrap() : ClapTrap("defolt bob1", 100, 50, 20)
	{
		// _attackDamage = 2;
		// _health = 1;
		std::cout << "Call defolt constructor name(FlagTrap)" << std::endl;
	}

	FlagTrap::FlagTrap(const FlagTrap & scav)
	{
		std::cout << "Call copy constructor(FlagTrap)" << std::endl;
		*this = scav;
	}

	FlagTrap::~FlagTrap()
	{
		std::cout << "Call destructor(FlagTrap)" << std::endl;
	}
	
	FlagTrap & FlagTrap::operator=(const FlagTrap & clap)
	{
		if (this != &clap)
		{

		}	
		return (*this);	
	}

	void FlagTrap::highFivesGuys()
	{
		std::cout << "High fives!" << std::endl;
	}

