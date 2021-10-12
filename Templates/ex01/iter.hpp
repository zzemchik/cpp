#include <iostream>

template <typename T>
void iter(T * a, const int & len, void (*foo)(const T &))
{
    for (int i = 0; i < len; i++)
        foo(a[i]);
}