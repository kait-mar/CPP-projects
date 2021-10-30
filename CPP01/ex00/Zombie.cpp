#include "Zombie.hpp"

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
    std::cout<<this->name<<" BraiiiiiiinnnzzzZ..."<<std::endl;
}
