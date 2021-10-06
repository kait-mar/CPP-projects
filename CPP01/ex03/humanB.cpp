#include "humanB.hpp"

HumanB::HumanB(std::string str)
{
    this->exist = 0;
    this->name = str;
    // std::cout<<this->name<<" HumanB constructor called\n";
}
// HumanB::HumanB(std::string str, Weapon weapon)
// {
//     this->exist = 1;
//     this->weapon = weapon;
//     this->name = str;
//     // std::cout<<this->name<<" HumanB constructor called\n";
// }
HumanB::~HumanB()
{
    // std::cout<<this->name<<" HumanB destructor called\n";
}
void    HumanB::setWeapon(Weapon &weapon)
{
    this->exist = 1;
    this->weapon = &weapon;
}
void    HumanB::attack()
{
    std::cout<<this->name<<" attacks";
    if (this->exist == 1)
        std::cout<<" with his "<<this->weapon->getType();
    std::cout<<std::endl;
}

