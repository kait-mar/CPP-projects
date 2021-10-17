#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>

class   ClapTrap
{
    std::string Name;
    int Hitpoints = 10;
    int Energy = 10;
    int attack_damage = 0;
    public:
        ClapTrap(std::string str);
        ~ClapTrap();
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif