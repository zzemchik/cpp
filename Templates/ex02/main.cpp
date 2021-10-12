#include "Array.hpp"

int main()
{
    try {
    Array<int> a(4);
    Array<std::string> b(3);
    a.setArray(7, 2);
    a.setArray(1, 3);
    a.setArray(2, 4);
    a.setArray(3, 5);
    b.setArray(0, "qwe");
    b.setArray(1, "asf");
    b.setArray(2, "zcv");

    std::cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] <<std::endl;
    std::cout << b[0] << " " << b[1] << " " << b[2] << std::endl;
    }
    catch (std::string &ex)
    {
        std::cerr << ex << std::endl;
    }


}