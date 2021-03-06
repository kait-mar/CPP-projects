#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap
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
    void highFivesGuys(void);
    FragTrap    &operator=(FragTrap const &);
    void attack(std::string const & target);
};

#endif