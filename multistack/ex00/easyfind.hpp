#include <iostream>
#include <algorithm>

template <typename T>
int easyfind(T cont, int i)
{
    int j = 0;
    for (typename T::iterator iter = cont.begin(); iter < cont.end(); iter++)
    {
        if (*iter == i)
            return (j);
        j++;
    }
    return (-1);
}