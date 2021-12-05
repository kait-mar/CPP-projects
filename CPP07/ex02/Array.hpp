#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <string>
#include <exception>

class A{
    public:
    int value;
};

template<class T>
class Array
{
    int len;
public:
    Array();
    Array(unsigned int);
    Array(Array const &);
    void   operator=(Array const &);
    T   &operator[](int) const;
    int size();
    ~Array();
    T   *array;
};

template<class T>
Array<T>::Array()
{
    this->array = NULL;
    this->len = 0;
}
template<class T>
Array<T>::Array(unsigned int n)
{
    this->array = new T[n]();
    this->len = n;
}
template<class T>
Array<T>::Array(Array const &obj)
{
    if (obj.array == NULL)
        this->array = NULL;
    else
    {
        this->len = obj.len;
        this->array = new int[obj.len];
        for (int i =0; i < obj.len; i++)
            this->array[i] = obj[i];
    }
}

template<class T>
void    Array<T>::operator=(Array const &obj)
{
    if (obj.array == NULL)
        this->array = NULL;
    else
    {
        this->len = obj.len;
        if (this->array != NULL)
            delete [] this->array;
        this->array = new int[obj.len];
        for (int i =0; i < obj.len; i++)
            this->array[i] = obj[i];
    }
}

template <class T>
T   &Array<T>::operator[](int idx) const
{
    if (idx < 0 || idx >= this->len)
        throw (std::out_of_range("error"));
    return (this->array[idx]);
}

template <class T>
int Array<T>::size()
{
    return (this->len);
}

template <class T>
Array<T>::~Array()
{
    if (this->array != NULL)
        delete[] this->array;
}
#endif