
#include <iostream>
#include <string>
int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ref = &str;
	std::string &ptr = str;
	std::cout << &str << std::endl;
	std::cout << &ptr << std::endl;
	std::cout << ref << std::endl;

	std::cout << *ref << std::endl;
	std::cout << ptr << std::endl;

}