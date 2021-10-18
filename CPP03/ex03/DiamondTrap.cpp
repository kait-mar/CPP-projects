#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    set(100, 50, 30);
    std::cout<<"diamond default constructor called\n";
}

DiamondTrap::DiamondTrap(std::string str)
{
    this->Name = str;
    set(100, 50, 30);
    std::cout<<this->Name<<" diamond constructor called\n";
    this->set_name(str + "_clap_name");
}

DiamondTrap::~DiamondTrap()
{
    std::cout<<this->Name<<" diamond destructor called\n";
}

void    DiamondTrap::whoAmI()
{
    std::cout<<"my name as a diamond is "<<this->Name<<" and my clapTrap name is "<<this->get_name()<<std::endl;
}

void    DiamondTrap::print()
{
    std::cout<<"Hitpoints = "<<this->get_points()
            <<"\nEnergy = "<<this->get_energy()
            <<"\nattack damage = "<<this->get_damage()<<std::endl;
}