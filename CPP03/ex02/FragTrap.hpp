#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string str);
    ~FragTrap();
    void highFivesGuys(void);
};


#endif