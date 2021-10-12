#include "Base.hpp"

Base * generate(void)
{
    unsigned int e = 3;
    e = 1 + rand() % 3;
    
    switch (e)
    {
        case 1:
            return new A;
        case 2:
            return new B;
        case 3:
            return new C;
    }
    return (0);
}

void identify(Base* p)
{
    if ((dynamic_cast<A*>(p)))
        std::cout << "A" << std::endl;
    if ((dynamic_cast<B*>(p)))
        std::cout << "B" << std::endl;
    if ((dynamic_cast<C*>(p)))
        std::cout << "C" << std::endl;
}

void identify(Base &p)
{
    try {
        Base a;
        a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch(std::exception &ex) { }

    try {
        Base a;
        a = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
    }
    catch(std::exception &ex) { }

     try {
        Base a;
        a = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    }
    catch(std::exception &ex) { }
}
