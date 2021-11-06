#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout<<"Scavtrap default constructor called\n";
    this->Hitpoints = 100;
    this->Energy = 50;
    this->attack_damage = 20;
}
ScavTrap::~ScavTrap()
{
    std::cout<<this->Name<<" scavTRap destructor called\n";
}
ScavTrap::ScavTrap(ScavTrap const &obj)
{
    this->Name = obj.Name;
    this->Hitpoints = obj.Hitpoints;
    this->Energy = obj.Energy;
    this->attack_damage = obj.attack_damage;
}

ScavTrap    &ScavTrap::operator=(ScavTrap const &obj)
{
    this->Name = obj.Name;
    this->Hitpoints = obj.Hitpoints;
    this->Energy = obj.Energy;
    this->attack_damage = obj.attack_damage;
    return (*this);
}

ScavTrap::ScavTrap(std::string str)
{
    this->Name = str;
    this->Hitpoints = 100;
    this->Energy = 50;
    this->attack_damage = 20;
    std::cout<<str<<" ScavTrap constructor called\n";
}

void    ScavTrap::_print()
{
    std::cout<<"Now, Name is ["<<this->Name
            <<"],\nHitpoints is ["<<this->Hitpoints
            <<"],\nEnergy is ["<<this->Energy
            <<"],\nattack damage is ["<<this->attack_damage<<"]\n";
}
void    ScavTrap::guardGate()
{
    std::cout<<this->Name<<" ScavTrap have enterred in Gate keeper mode\n";
}

void    ScavTrap::attack(std::string const & target)
{
    std::cout<<"ScavTrap "<<this->Name<<" attack "<<target<<", causing "<<this->attack_damage<<" points of damage !\n";
}
