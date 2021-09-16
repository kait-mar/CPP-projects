#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB{
    private:
        std::string name;
        Weapon weapon;
        int exist;
    public:
        HumanB(std::string str);
        HumanB(std::string str, Weapon weapon);
        void    setWeapon(Weapon weapon);
        ~HumanB();
        void attack();
};

#endif
