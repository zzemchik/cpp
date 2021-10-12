#include "easyfind.hpp"
#include <vector>

int main()
{
    {
        std::vector<int> a;
        a.push_back(1);
        a.push_back(1);
        a.push_back(3);
        a.push_back(4);
        a.push_back(5);
        a.push_back(7);
        std::cout << easyfind(a, 4) << std::endl;
    }
    {
        std::vector<double> a;
        a.push_back(1);
        a.push_back(1);
        a.push_back(3);
        a.push_back(4);
        a.push_back(5);
        a.push_back(7);
        std::cout << easyfind(a, 4) << std::endl;
    }

}