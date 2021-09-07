#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class   Zombie
{
    private:
        std::string  name;
    public:
    Zombie(std::string name);
    ~Zombie();
    void    announce();
};

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout<<this->name<<"'s constructer called\n";
}
Zombie::~Zombie()
{
    std::cout<<this->name<<"'s destructer called\n";
}
void    Zombie::announce(void){
    std::cout<<"my name's "<<this->name<<std::endl;
}

Zombie *newZombie( std::string name );
void randomChump( std::string name );

#endif