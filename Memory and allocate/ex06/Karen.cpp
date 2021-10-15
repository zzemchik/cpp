#include "Karen.hpp"

	void Karen::debug(void)
	{
		std::cout << "[ DEBUG ]" << std::endl;
		std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" <<std::endl;
	}

	void Karen::info(void)
	{
		std::cout << "[ INFO ]" << std::endl;
		std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" <<std::endl;
	}

	void Karen::warning(void)
	{
		std::cout << "[ WARNING ]" << std::endl;
		std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." <<std::endl;
	}
	
	void Karen::error(void)
	{
		std::cout << "[ ERROR ]" <<std::endl;
		std::cout << "This is unacceptable, I want to speak to the manager now." <<std::endl;
	}

	void Karen::errorarg(void)
	{

		std::cout << "[ Probably complaining about insignificant problems ]" <<std::endl;
	}

	void Karen::complain(std::string level)
	{
		int i;

		i = 0;
		while (i < 4 && _level[i] != level)
			i++;
		
		switch (i)
		{
		case (4):
			_operation[i]();
		default:
			for (int j = i; j < 4; j++)
			_operation[j]();
		}
		
	}

	Karen::Karen() 
	{
		_operation[0] = debug;
		_operation[1] = info;
		_operation[2] = warning;
		_operation[3] = error;
		_operation[4] = errorarg;
		
		_level[0] = "DEBUG";
		_level[1] = "INFO";
		_level[2] = "WARNING";
		_level[3] = "ERROR";
	}

	Karen::~Karen(){}