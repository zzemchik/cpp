#include "iter.hpp"

template <typename T>
void foo(const T &a) { std::cout << a << std::endl; }

int main()
{
    std::string str[3];

    str[0] = "qwe";
    str[1] = "asd";
    str[2] = "xzc";
    
    iter(str, 3, foo);

    int num[3];

    num[0] = 1;
    num[1] = 2;
    num[2] = 3;

    iter(num, 3, foo);
}