#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout<<"Scavtrap default constructor called\n";
}
ScavTrap::~ScavTrap()
{
    std::cout<<this->get_name()<<" scavTRap destructor called\n";
}
ScavTrap::ScavTrap(std::string str)
{
     this->set(str, 100, 50, 20);
     std::cout<<this->get_name()<<" ScavTrap constructor called\n";
     this->_print();
}
void    ScavTrap::_print()
{
    std::cout<<"Now, Name is ["<<this->get_name()
            <<"],\nHitpoints is ["<<this->get_points()
            <<"],\nEnergy is ["<<this->get_energy()
            <<"],\nattack damage is ["<<this->get_damage()<<"]\n";
}
void    ScavTrap::guardGate()
{
    std::cout<<this->get_name()<<" ScavTrap have enterred in Gate keeper mode\n";
}
