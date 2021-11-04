#include "ClapTrap.hpp"

ClapTrap::ClapTrap():
Hitpoints(10), Energy(10), attack_damage(0)
{
    std::cout<<this->Name<<"ClapTrap default constructor called\n";
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
    std::cout<<"ClapTrap "<<this->Name<<"attack "<<target<<", causing "<<this->attack_damage<<" points of damage !\n";
}
void    ClapTrap::_print()
{
    std::cout<<"Now, Name is ["<<this->Name
            <<"],\nHitpoints is ["<<this->Hitpoints
            <<"],\nEnergy is ["<<this->Energy
            <<"],\nattack damage is ["<<this->attack_damage<<"]\n";
}
void    ClapTrap::takeDamage(unsigned int amount)
{
    this->attack_damage += amount;
    std::cout<<"take damage set the damage amount to "<<amount<<std::endl;
}
void    ClapTrap::beRepaired(unsigned int amount)
{
    this->Energy += amount;
    std::cout<<"beRepaired function is called\n";
}
ClapTrap &ClapTrap::operator=(ClapTrap const &obj)
{
    this->Name = obj.Name;
    this->Hitpoints = obj.Hitpoints;
    this->Energy = obj.Energy;
    this->attack_damage = obj.attack_damage;
    return (*this);
}
