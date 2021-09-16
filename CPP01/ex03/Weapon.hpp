#ifndef WEAPON_H
#define WEAPON_H

#include <iomanip>
#include <iostream>
#include <string>

class   Weapon{
    private:
        std::string type;
    public:
        Weapon(std::string str);
        Weapon();
        ~Weapon();
        const std::string    &getType();
        void    setType(std::string str);
};

#endif