#include "mutantstack.hpp"

template<class T>
MutantStack<T>::MutantStack() : std::stack<T>(){}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> & a) {
    *this = a;
}

template <typename T>
MutantStack<T> & MutantStack<T>::operator = (const MutantStack<T> & a) {
    if (this != &a) {
        std::stack<T>::operator=(a);
    }
    return (*this);
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
    return (std::stack<T>::c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
    return (std::stack<T>::c.end());
}

template <typename T>
MutantStack<T>::~MutantStack() {}