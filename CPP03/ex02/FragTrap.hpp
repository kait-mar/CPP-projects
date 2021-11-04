#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(FragTrap const &);
    FragTrap(std::string str);
    ~FragTrap();
    void highFivesGuys(void);
    virtual void attack(std::string const & target);
    FragTrap    &operator=(FragTrap const &);
};


#endif