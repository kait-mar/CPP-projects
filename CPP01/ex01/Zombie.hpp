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
    ~Zombie();
};

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout<<this->name<<"'s constructer called\n";
}
Zombie::Zombie(void)
{
    std::cout<<this->name<<"'s constructer called\n";
}
Zombie::~Zombie()
{
    std::cout<<this->name<<"'s destructer called\n";
}
void    Zombie::set(std::string str)
{
    this->name = str;
}

Zombie *newZombie( std::string name );
Zombie* zombieHorde( int N, std::string name );

#endif