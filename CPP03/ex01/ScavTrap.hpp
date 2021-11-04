#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class   ScavTrap: public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(ScavTrap const &obj);
        ScavTrap(std::string name);
        ~ScavTrap();
        void    _print();
        virtual void attack(std::string const & target);
        void    guardGate();
        ScavTrap    &operator=(ScavTrap const &);
};

#endif