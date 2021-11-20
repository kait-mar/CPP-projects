#ifndef ITER_H
#define ITER_H

#include <iostream>
#include <string>
template <class type> void func(type);

template <typename T> void iter(T *array, int n, void (*func)(T const &)){
    for (int i = 0; i < n; i++)
        func(array[i]);
}

#endif
