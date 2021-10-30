#include "Weapon.hpp"

Weapon::Weapon(std::string str){
    this->type = str;
    //std::cout<<"weapon constructor called\n";
}
Weapon::Weapon(){
    // std::cout<<"default weapon constructor called\n";
}
Weapon::~Weapon(void){
    //std::cout<<"weapon destructor\n";
}

const std::string   &Weapon::getType(void)
{
    return (this->type);
}

void    Weapon::setType(std::string str)
{
    this->type = str;
}
