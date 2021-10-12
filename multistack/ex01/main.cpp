#include "span.hpp"

int main()
{
    {
        Span a(7);
        try {
            a.addNumber(1);
            a.addNumber(77);
            a.addNumber(6);
            a.addNumber(10);
            a.addNumber(20);
            a.addNumber(35);
            a.addNumber(78);
            std::cout << a.shortestSpan() << " " << a.longestSpan() << std::endl;
        }
        catch (std::string &a) {
            std::cout << a << std::endl;
        }
    }
    {
        Span a(7);
        try {
            a.addNumber(1);
            a.addNumber(77);
            a.addNumber(6);
            a.addNumber(10);
            a.addNumber(20);
            a.addNumber(35);
            a.addNumber(78);
            a.addNumber(711);
            std::cout << a.shortestSpan() << " " << a.longestSpan() << std::endl;
        }
        catch (std::string &a) {
            std::cout << a << std::endl;
        }
    }
    {
        Span a(7);
        try {
            a.addNumber(1);
            a.addNumber(77);
            a.addNumber(6);
            a.addNumber(10);
            a.addNumber(20);
            a.addNumber(75);
            a.addNumber(75);
            std::cout << a.shortestSpan() << " " << a.longestSpan() << std::endl;
        }
        catch (std::string &a) {
            std::cout << a << std::endl;
        }
    }
    {
        Span a(7);
        try {
            a.addNumber(1);
            std::cout << a.shortestSpan() << " " << a.longestSpan() << std::endl;
        }
        catch (std::string &a) {
            std::cout << a << std::endl;
        }
    }
      {
        Span a(7);
        try {
            a.addNumber(1);
            a.addNumber(75);
            std::cout << a.shortestSpan() << " " << a.longestSpan() << std::endl;
        }
        catch (std::string &a) {
            std::cout << a << std::endl;
        }
    }
    {
        Span a(1002);
        try {
            for (int i = 0; i < 1000; i++)
                a.addNumber(i);
            a.addNumber(1);
            a.addNumber(1);
            std::cout << a.shortestSpan() << " " << a.longestSpan() << std::endl;
        }
        catch (std::string &a) {
            std::cout << a << std::endl;
        }
    }
}