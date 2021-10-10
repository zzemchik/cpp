#include "ParsNum.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error arguments!" << std::endl;
	}
	else
	{
		std::string str(argv[1]);
		ParsNum *pars;
		try {
			pars = new ParsNum(str);
		}
		catch (std::exception &ex) {
			std::cout << ex.what() << std::endl;
		}
	}
}