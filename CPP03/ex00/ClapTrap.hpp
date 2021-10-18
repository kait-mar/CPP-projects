#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>

class   ClapTrap
{
    std::string Name;
    int Hitpoints;
    int Energy;
    int attack_damage;
    public:
        ClapTrap(std::string str);
        ~ClapTrap();
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif