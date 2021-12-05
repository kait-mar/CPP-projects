#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include <exception>
#include <list>

template <class T>
T   easyfind(T lst, int element)
{
    auto search = lst.find(element);
    if (search != lst.end())
        return (element);
    else
        throw(std::exception());
}

#endif