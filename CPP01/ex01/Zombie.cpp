#include "Zombie.hpp"

Zombie *newZombie( std::string name ){
    Zombie  *z;
    z = new Zombie(name);

    return (z);
}

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout<<this->name<<"'s constructer called\n";
}
Zombie::Zombie(void)
{
    std::cout<<"default constructer called\n";
}
Zombie::~Zombie()
{
    std::cout<<this->name<<"'s destructer called\n";
}
void    Zombie::set(std::string str)
{
    this->name = str;
}
void    Zombie::announce(void)
{
    std::cout<<this->name<<" BraiiiiiiinnnzzzZ..."<<std::endl;
}
