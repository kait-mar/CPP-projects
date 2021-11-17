#ifndef BASE_H
#define BASE_H

#include <iostream>
#include <string>
#include <ostream>

class Base
{
public:
    virtual ~Base();
};

void identify(Base &p);
Base * generate(void);
void identify(Base* p);
#endif