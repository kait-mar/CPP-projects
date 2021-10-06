#include "humanA.hpp"

HumanA::HumanA(std::string str, Weapon &weapon)
{
    this->weapon = &weapon;
    this->name = str;
    // std::cout<<this->name<<" constructor called\n";
}

HumanA::~HumanA()
{
    // std::cout<<this->name<<" destructor called\n";
}

void    HumanA::attack()
{
    std::cout<<this->name<<" attacks with his "<<this->weapon->getType()<<std::endl;
}
