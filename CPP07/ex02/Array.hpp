#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <string>

template<typename T>
class Array
{
    T   *array;
public:
    Array();
    Array(unsigned int);
    Array(Array const &);
    void   operator=(Array const &);
    T   &operator[](int);
    int size();
    ~Array();
};


#endif