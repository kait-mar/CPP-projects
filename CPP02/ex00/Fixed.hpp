#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <string>

class   Fixed
{
    int point_fix;
    static const int    bit;
    public:
        Fixed() : point_fix(0);
        ~Fixed();
        Fixed(Fixed a) : point_fix(a.point_fix), bit(a.bit);
        int getRawBits(void) const; 
        void setRawBits(int const raw);
};

#endif