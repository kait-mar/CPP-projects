#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
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
void    ClapTrap::set(std::string str, unsigned int hit, unsigned int energy, unsigned int damage)
{
    this->Name = str;
    this->Hitpoints = hit;
    this->Energy = energy;
    this->attack_damage = damage;
}
std::string     ClapTrap::get_name(){return (this->Name);}
unsigned int    ClapTrap::get_damage() {return (this->attack_damage);}
unsigned int    ClapTrap::get_energy(){return (this->Energy);}
unsigned int    ClapTrap::get_points(){return (this->Hitpoints);}

void    ClapTrap::_print()
{
    std::cout<<"Now, Name is ["<<this->Name
            <<"],\nHitpoints is ["<<this->Hitpoints
            <<"],\nEnergy is ["<<this->Energy
            <<"],\nattack damage is ["<<this->attack_damage<<"]\n";
}

void    ClapTrap::set(unsigned int hit, unsigned int energy, unsigned int damage)
{
    this->Hitpoints = hit;
    this->Energy = energy;
    this->attack_damage = damage;
}

void    ClapTrap::set_name(std::string str)
{
    this->Name = str;
}
