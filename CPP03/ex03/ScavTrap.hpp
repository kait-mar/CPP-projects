#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class   ScavTrap: virtual public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(ScavTrap const &obj);
        ScavTrap(std::string name);
        ~ScavTrap();
        void attack(std::string const & target);
        void    guardGate();
        ScavTrap    &operator=(ScavTrap const &obj);
};

#endif