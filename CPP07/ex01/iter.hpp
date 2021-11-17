#ifndef ITER_H
#define ITER_H

#include <iostream>
#include <string>
template <class type> void func(type);

template <class T> void iter(T *array, T n, func f){
    for (int i = 0; i < n; i++)
        func(array[i]);
}

#endif
