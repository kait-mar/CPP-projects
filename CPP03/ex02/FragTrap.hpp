#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
protected:
    std::string Name;
    unsigned int Hitpoints;
    unsigned int Energy;
    unsigned int attack_damage;
public:
    FragTrap();
    FragTrap(FragTrap const &);
    FragTrap(std::string str);
    ~FragTrap();
    void    _print();
    void highFivesGuys(void);
    virtual void attack(std::string const & target);
    FragTrap    &operator=(FragTrap const &);
};


#endif