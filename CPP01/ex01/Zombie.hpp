#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <new>

class   Zombie
{
    private:
        std::string  name;
    public:
    Zombie();
    Zombie(std::string name);
    void    set(std::string str);
    void    announce();
    ~Zombie();
};


Zombie *newZombie( std::string name );
Zombie* zombieHorde( int N, std::string name );

#endif