#ifndef HUMANA_H
#define HUMANA_H
#include "Weapon.hpp"

class HumanA{
    private:
        std::string name;
        Weapon weapon;
    public:
        HumanA(std::string str, Weapon weapon);
        ~HumanA();
        void attack();
};

#endif