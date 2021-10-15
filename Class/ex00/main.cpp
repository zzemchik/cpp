#include <iostream>

int main(int argv, char **argc)
{

    for (int i = 1; i < argv; ++i)
    {
        for(unsigned long j = 0; j < strlen(argc[i]); ++j)
            argc[i][j] = std::toupper(argc[i][j]);
        std::cout << argc[i];
    }  
    std::cout << std::endl;
}