#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout<<"FragTrap default constructor called\n";
    this->Hitpoints = 100;
    this->Energy = 100;
    this->attack_damage = 30;
}

FragTrap::FragTrap(std::string str)
{
    std::cout<<this->Name<<" FragTrap constructor called\n";
    this->Name = str;
    this->Hitpoints = 100;
    this->Energy = 100;
    this->attack_damage = 30;
}

FragTrap::FragTrap(FragTrap const &obj)
{
    this->Name = obj.Name;
    this->Hitpoints = obj.Hitpoints;
    this->Energy = obj.Energy;
    this->attack_damage = obj.attack_damage;
}
FragTrap::~FragTrap()
{
    std::cout<<this->Name<<" FragTrap destructor called\n";
}

FragTrap &FragTrap::operator=(FragTrap const &obj)
{
    this->Name = obj.Name;
    this->Hitpoints = obj.Hitpoints;
    this->Energy = obj.Energy;
    this->attack_damage = obj.attack_damage;
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout<<"High Fives guys ?\n";
}

void    FragTrap::attack(std::string const & target)
{
    std::cout<<"FragTrap "<<this->Name<<" attack "<<target<<", causing "<<this->attack_damage<<" points of damage !\n";
}
