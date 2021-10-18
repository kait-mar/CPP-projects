#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string str):
Name(str), Hitpoints(10), Energy(10), attack_damage(0)
{
    std::cout<<this->Name<<"'s constructor called\n";
}
ClapTrap::~ClapTrap()
{
    std::cout<<this->Name<<"'s destructor called\n";
}
void    ClapTrap::attack(std::string const & target)
{
    std::cout<<"ClapTrap "<<this->Name<<"attack "<<target<<", causing "<<this->attack_damage<<" points of damage !\n";
}
void    ClapTrap::takeDamage(unsigned int amount)
{
    this->attack_damage = amount;
    std::cout<<"take damage set the damage amount to "<<amount<<std::endl;
}
void    ClapTrap::beRepaired(unsigned int amount)
{
    std::cout<<"beRepaired function is called\n";
}
