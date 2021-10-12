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
        static Fixed    &min(Fixed &obj, Fixed &obj2);
        static Fixed    &max(Fixed &obj, Fixed &obj2);
        bool    operator<(Fixed obj);
        bool    operator>(Fixed obj);
        bool    operator<=(Fixed obj);
        bool    operator>=(Fixed obj);
        bool    operator==(Fixed obj);
        Fixed    operator+(Fixed obj);
        Fixed    operator-(Fixed obj);
        Fixed    operator*(Fixed obj);
        Fixed    operator/(Fixed obj);
        Fixed    operator++(void);
        Fixed    operator--(void);
        static Fixed   &min(Fixed &obj, Fixed &obj2);
        float   &max(Fixed &obj);

};
std::ostream   &operator<<(std::ostream &os, const Fixed &obj);
#endif