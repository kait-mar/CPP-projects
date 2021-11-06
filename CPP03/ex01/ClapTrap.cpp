#include "ClapTrap.hpp"

ClapTrap::ClapTrap():
Hitpoints(10), Energy(10), attack_damage(0)
{
    std::cout<<"ClapTrap default constructor called\n";
}
ClapTrap::ClapTrap(std::string str):
Name(str), Hitpoints(10), Energy(10), attack_damage(0)
{
    std::cout<<this->Name<<" ClapTrap constructor called\n";
}
ClapTrap::~ClapTrap()
{
    std::cout<<this->Name<<" ClapTrap destructor called\n";
}
void    ClapTrap::attack(std::string const & target)
{
    std::cout<<"ClapTrap "<<this->Name<<" attack "<<target<<", causing "<<this->attack_damage<<" points of damage !\n";
}
void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout<<"take damage sets the damage amount to "<<amount<<std::endl;
}
void    ClapTrap::beRepaired(unsigned int amount)
{
    std::cout<<"beRepaired function is used with an ammount of "<<amount<<std::endl;
}
ClapTrap::ClapTrap(ClapTrap const &obj)
{
    this->Name = obj.Name;
    this->Hitpoints = obj.Hitpoints;
    this->Energy = obj.Energy;
    this->attack_damage = obj.attack_damage;
}
ClapTrap &ClapTrap::operator=(ClapTrap const &obj)
{
    this->Name = obj.Name;
    this->Hitpoints = obj.Hitpoints;
    this->Energy = obj.Energy;
    this->attack_damage = obj.attack_damage;
    return (*this);
}

