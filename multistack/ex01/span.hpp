#include <algorithm>
#include <set>
#include <stdexcept>
#include <iostream>
class Span {

    private:
        std::set<int>      _conteiner;
        unsigned int            _count;
        unsigned int            _count_max;
    public:
        Span(const int &);
        Span(const Span &);
        Span & operator = (const Span &);
        void addNumber(const int &);
        unsigned int shortestSpan( void );
        unsigned int longestSpan( void );
        ~Span();
};

