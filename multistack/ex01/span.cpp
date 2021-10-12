#include "span.hpp"


Span::Span(const int & num) : _count(0), _count_max(num) { }

Span::Span(const Span & sp) { *this = sp; }

Span & Span::operator = (const Span & sp) {
    if (this != &sp) {
        this->_count = sp._count;
        this->_count_max = sp._count_max;
        this->_conteiner.clear();
        for (std::set<int>::iterator iter = sp._conteiner.begin(); iter != sp._conteiner.end(); iter++) {
            this->_conteiner.insert(*iter);
        }
    }
    return (*this);
}
void Span::addNumber(const int &num) {
    if (_count >= _count_max)
        throw (static_cast<std::string>("Many argument!"));
    this->_conteiner.insert(num);
    this->_count++;
    if (this->_count != this->_conteiner.size())
        throw (static_cast<std::string>("Dublicate symbol!"));
}

std::set<int>::iterator iter1;
unsigned int Span::shortestSpan( void ) {
    if (this->_conteiner.begin() == this->_conteiner.end() || this->_conteiner.begin() == --this->_conteiner.end())
        throw (static_cast<std::string>("Too small container!"));
    int a = (*(--this->_conteiner.end())) - (*this->_conteiner.begin());
    for (std::set<int>::iterator iter = this->_conteiner.begin(); iter != this->_conteiner.end(); iter++){
        if (iter != this->_conteiner.begin() && a > abs(*iter - *(iter1)))
            a = abs(*iter - *(iter1));
        iter1 = iter;
    }
    return (a);
}

unsigned int Span::longestSpan( void ) {
    if (this->_conteiner.begin() == this->_conteiner.end() || this->_conteiner.begin() == --this->_conteiner.end())
        throw (static_cast<std::string>("Too small container!"));
    return ((*(--this->_conteiner.end())) - (*this->_conteiner.begin()));
}

Span::~Span() {}