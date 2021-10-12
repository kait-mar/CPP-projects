#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

class   Fixed
{
    int val;
    static const int    bit = 8;
    float   nbr;

    public:
        Fixed();
        ~Fixed();
        Fixed(Fixed const &obj);
        Fixed(int const n);
        Fixed(float const x);
        int getRawBits(void) const; 
        void setRawBits(int const raw);
        Fixed   &operator=(Fixed a);
        float toFloat(void) const;
        int toInt(void) const;
};
std::ostream   &operator<<(std::ostream &os, const Fixed &obj);
#endif