#include "ClapTrap.hpp"


	ClapTrap::ClapTrap() : \
	_name("defalt bob"), _health(10), _energy(10), _attackDamage(0) 
	{
		std::cout << "Call constructor defalt" << std::endl;
	}
	
	ClapTrap::ClapTrap(const std::string & name) : \
	_name(name), _health(10), _energy(10), _attackDamage(0) 
	{
		std::cout << "Call constructor name" << std::endl;
	}

	ClapTrap::ClapTrap(const ClapTrap & a) : \
	_name(a._name), _health(a._health), _energy(a._energy), _attackDamage(a._attackDamage) 
	{
		std::cout << "call constructor copy" << std::endl;
	}

	ClapTrap & ClapTrap::operator = (const ClapTrap & clap)
	{

		std::cout << "call operator =" << std::endl;
		if (this != &clap)
		{
			this->_health = clap._health;
			this->_energy = clap._energy;
			this->_attackDamage = clap._attackDamage;
			this->_name = clap._name;
		}
		return (*this);
	}

	ClapTrap::~ClapTrap() 
	{
		std::cout << "Call destructor" << std::endl;
	}

	void ClapTrap::attack(std::string const & target)
	{
		std::cout << _name << " attack " << target << ", causing " << _attackDamage;
		std::cout << " points of damage!" << std::endl;
	}

	void ClapTrap::takeDamage(unsigned int amount)
	{
		_health -= amount;
		std::cout << _name << " lose " << amount << " damage!" << std::endl;
	}

	void ClapTrap::beRepaired(unsigned int amount)
	{
		_health += amount;
		std::cout << _name << " treat " << amount << " health!" << std::endl;
		
	}
