#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>

class   ClapTrap
{
    private:
        std::string Name;
        int Hitpoints;
        int Energy;
        int attack_damage;
    public:
        ClapTrap();
        ClapTrap(std::string str);
        ClapTrap(ClapTrap const &obj);
        ~ClapTrap();
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ClapTrap &operator=(ClapTrap const &obj);
};

#endif