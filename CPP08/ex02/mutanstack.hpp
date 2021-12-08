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
        Iterator(): index(0){}
        Iterator(MutantStack<T> m): _m(m){}
        T   operator*() const
        {
            //get sure of all this !!
            MutantStack<T> temp = _m;
            for (int i = 0; i < _m.size() - index; i++)
                temp.pop();
            return &temp.top();
        }
        Iterator    operator++() const{
            index++;
            return (*this);
        }
        ~Iterator(){}
        MutantStack<T>  _m;
        int             index;
        T   *ref;
    };

    MutantStack(): Iterator(*this){}
    ~MutantStack(){}
    Iterator beging() const
    {
        MutantStack<T>  temp = *this;
        Iterator    it;
        while (!temp.empty())
        {
            it.ref = &this->top();
            temp.pop();
        }
        return (it);
    }
    Iterator end() const
    {
        Iterator it;
        it.ref = &this->top() + 1;
        return (it);
    }
};

// template <class T>
// class MutanStack<T>::Iterator    MutantStack<T>::begin()
// {

// }


#endif