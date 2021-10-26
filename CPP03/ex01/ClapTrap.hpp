#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>

class   ClapTrap
{
    std::string Name;
    unsigned int Hitpoints;
    unsigned int Energy;
    unsigned int attack_damage;
    public:
        ClapTrap();
        ClapTrap(std::string str);
        ~ClapTrap();
        std::string    get_name();
        unsigned int    get_damage();
        unsigned int    get_energy();
        unsigned int    get_points();
        void    set(std::string str, unsigned int hit, unsigned int energy, unsigned int damage);
        virtual void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif