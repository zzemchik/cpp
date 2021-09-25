#include "FlagTrap.hpp"

	FlagTrap::FlagTrap(const std::string & name) : ClapTrap(name, 100, 100, 30)
	{
		std::cout << "Call constructor name(FlagTrap)" << std::endl;
	}

	FlagTrap::FlagTrap() : ClapTrap("defolt bob", 100, 100, 30)
	{
		std::cout << "Call constructor name(FlagTrap)" << std::endl;

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