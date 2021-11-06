#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>

class   ClapTrap
{
protected:
    std::string Name;
    unsigned int Hitpoints;
    unsigned int Energy;
    unsigned int attack_damage;
public:
    ClapTrap();
    ClapTrap(std::string str);
    ClapTrap(ClapTrap const &);
    ~ClapTrap();
    virtual void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ClapTrap    &operator=(ClapTrap const &obj);
};

#endif