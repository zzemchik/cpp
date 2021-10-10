#include "dataFunction.hpp"

int main()
{
    Data a;
    a.a = 2;
    a.b = 4;
    uintptr_t r = serialize(&a);
    Data *b = deserialize(r);
    std::cout << b->a << " " << b->b << std::endl;

}