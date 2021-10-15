#include "Karen.hpp"

int main()
{
	Karen karen;
	std::string str;
	

	std::cout << "print command(DEBUG, INFO, WARNING, ERROR): " ;
	std::getline(std::cin, str);
	if (std::cin.eof())
	{
		std::cout << std::endl;
		karen.complain("");
	}
	else
		karen.complain(str);
}