#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <string>

class   Fixed
{
    int val;
    static const int    bit = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(Fixed const &obj);
        int getRawBits(void) const; 
        void setRawBits(int const raw);
        Fixed   &operator=(Fixed a);
};

#endif