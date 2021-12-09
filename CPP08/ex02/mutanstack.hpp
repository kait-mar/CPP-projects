#ifndef MUTANSTACK_H
#define MUTANSTACK_H

#include <iostream>
#include <exception>
#include <list>
#include <vector>
#include <algorithm>
#include <stack>

template <class T>
class MutantStack: public std::stack<T>
{
public:
    class iterator
    {
    public:
        iterator(): index(0), _m(NULL){}
        iterator(MutantStack<T> m): _m(m), index(0){}
        T   operator*() const
        {
            //get sure of all this !!
            // MutantStack<T> temp = _m;
            // size_t  a = _m.size();
            // for (int i = 0; i < (int)a - index - 1; i++)
            //     temp.pop();
            // return temp.top();
            return (*ref);
        }
        void    operator++(){
            index++;
            MutantStack<T> temp = _m;
            size_t  a = _m.size();
            for (int i = 0; i < (int)a - index - 1; i++)
                temp.pop();
            ref = &temp.top();
        }
        void    operator--(){
            index--;
            MutantStack<T> temp = _m;
            size_t  a = _m.size();
            for (int i = 0; i < (int)a - index - 1; i++)
                temp.pop();
            ref =  const_cast<T*>(&temp.top());
        }
        bool    operator!=(iterator const &obj) const{
            if (ref != obj.ref)
                return (1);
            return (0);
        }
        bool    operator==(iterator const &obj) const{
            if (ref == obj.ref)
                return (1);
            return (0);
        }
        iterator    operator=(iterator const &obj) const
        {
            ref = obj.ref;
            _m = obj._m;
            return (*this);
        }
        ~iterator(){}
        MutantStack<T>  _m;
        int             index;
        T   *ref;
    };

    MutantStack(){}
    ~MutantStack(){}
    iterator begin() const
    {
        MutantStack<T>  temp = *this;
        iterator    it(*this);
        while (!temp.empty())
        {
            it.ref = const_cast<T*>(&temp.top()); //here !!
            // std::cout<< "top returns : " << temp.top() << std::endl
            //         << "*ref =" << *it.ref << std::endl;
            temp.pop();
        }
        return (it);
    }
    iterator end() const
    {
        iterator    it(*this);
        std::cout<< &this->top() + 1 << std::endl;
        it.ref = const_cast<T*>(&this->top() + 1);
        std::cout<< it.ref << std::endl;
        return (it);
    }
};

// template <class T>
// class MutanStack<T>::iterator    MutantStack<T>::begin()
// {

// }


#endif