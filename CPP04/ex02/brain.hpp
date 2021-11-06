#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>
#include <string>


class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    std::string get(int i);
    void    set(std::string str, int i);
    virtual ~Brain();
};




#endif