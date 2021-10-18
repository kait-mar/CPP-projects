#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "FragTrap.hpp"

class   DiamondTrap : public FragTrap, public ScavTrap
{
    std::string Name;
    public:
        DiamondTrap();
        DiamondTrap(std::string str);
        ~DiamondTrap();
        void    whoAmI();
        void    print();
};

#endif