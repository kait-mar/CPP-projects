#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout<<"diamond default constructor called\n";
}

DiamondTrap::DiamondTrap(std::string str)
{
    this->Name = str;
    ClapTrap::Name = str + "_clap_name";
    std::cout<<this->Name<<" diamond constructor called]]]]\n";
    this->Hitpoints = FragTrap::Hitpoints;
    this->Energy = ScavTrap::Energy;
    this->attack_damage = FragTrap::attack_damage;
}

void    DiamondTrap::_print()
{
    std::cout<<"Now, Name is ["<<this->Name
            <<"],\nHitpoints is ["<<this->Hitpoints
            <<"],\nEnergy is ["<<this->Energy
            <<"],\nattack damage is ["<<this->attack_damage<<"]\n";
}

DiamondTrap::~DiamondTrap()
{
    std::cout<<this->Name<<" diamond destructor called\n";
}

void    DiamondTrap::whoAmI()
{
    std::cout<<"my name as a diamond is "<<this->Name<<" and my clapTrap name is "<<ClapTrap::Name<<std::endl;
}
