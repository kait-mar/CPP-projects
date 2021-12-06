#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include <exception>
#include <list>
#include <vector>
#include <algorithm>

template <class T>
auto   easyfind(T lst, int element)
{
    auto search = std::find(lst.begin(), lst.end(), element);
    if (search != lst.end())
    {
        std::cout<< *search << ": element found !!\n";
        return (search);
    }
    else
        throw(std::exception());
}

#endif