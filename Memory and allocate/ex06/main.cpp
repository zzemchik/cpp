#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen karen;
	if (argc != 2)
	{
		karen.complain("");
		return (0);
	}			
	std::string str(argv[1]);
	karen.complain(str);
}