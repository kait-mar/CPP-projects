#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "FragTrap.hpp"

class   DiamondTrap :  public ScavTrap, public FragTrap
{
private:
    std::string Name;
public:
    DiamondTrap();
    DiamondTrap(std::string str);
    DiamondTrap(DiamondTrap const &);
    ~DiamondTrap();
    void    _print();
    void    attack(std::string const &target) { ScavTrap::attack(target); }
    DiamondTrap &operator=(DiamondTrap const &);
    void    whoAmI();
    void    print();
};

#endif