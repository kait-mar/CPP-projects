#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include <exception>
#include <list>
#include <vector>
#include <algorithm>

template <class T>
void   easyfind(T lst, int element)
{
    if (std::find(lst.begin(), lst.end(), element) != lst.end())
    {
        std::cout<< element << ": element found !!\n";
    }
    else
        throw(std::exception());
}

#endif