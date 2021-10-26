#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string str);
    ~FragTrap();
    virtual void attack(std::string const & target);
    void highFivesGuys(void);
};


#endif