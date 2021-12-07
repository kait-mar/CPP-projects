#ifndef MUTANSTACK_H
#define MUTANSTACK_H

#include <iostream>
#include <exception>
#include <list>
#include <vector>
#include <algorithm>
#include <limits.h>

template <class T>
class MutantStack: std::stack<T>
{
public:
    class Iterator
    {
    public:
        Iterator(){}
        T   operator*() const
        {
            
        }
        ~Iterator(){}
        MutantStack<T>  _m;
        int             index;
    };

    MutantStack(){}
    ~MutantStack(){}
    Iterator beging() const
    {

    }
    Iterator end() const;
};

// template <class T>
// class MutanStack<T>::Iterator    MutantStack<T>::begin()
// {

// }


#endif