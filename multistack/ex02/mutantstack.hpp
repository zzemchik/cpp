
#pragma once
#include <iostream>
#include <stack>

template<class T>
class MutantStack : public std::stack<T> {
   public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        MutantStack();
        MutantStack(const MutantStack<T> & a);
        MutantStack & operator = (const MutantStack<T> & a);
        
        iterator begin();
        iterator end();
       virtual ~MutantStack();

};

# include "mutantstack.cpp"
