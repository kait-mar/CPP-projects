#include "Fixed.hpp"

Fixed::Fixed()
{
    this->val = 0;
}
/*******************************************/
Fixed::~Fixed()
{
}
/*******************************************/
Fixed::Fixed(Fixed const &obj)
{
    this->val = obj.val;
}
/*******************************************/
int Fixed::getRawBits(void) const
{
    return (this->val);
}
/*******************************************/
void    Fixed::setRawBits(int const raw)
{
    this->val = raw;
}
/*******************************************/
Fixed   &Fixed::operator=(Fixed a)
{
    this->val = a.val;
    return (*this);
}
/*******************************************/
Fixed::Fixed(int const n)
{
    this->val = (int)roundf(n << this->bit);
}
/***************************/
Fixed::Fixed(float const x)
{
    this->val = roundf(x * (1 << this->bit));
}
/************************/
int Fixed::toInt(void) const
{
    return ((int)(this->val / (1 << this->bit)));
}
/*****************************/
float   Fixed::toFloat(void) const
{
    float n = (float)this->val / (float)(1 << this->bit);
    return (n);
}
/****************************/
std::ostream   &operator<<(std::ostream &os, const Fixed &obj)
{
    os << obj.toFloat();
    return (os);
}
/**************************/
bool    Fixed::operator<(Fixed const &obj) const
{
    return (this->val < obj.val);
}
/**************************/
bool    Fixed::operator>(Fixed const &obj) const
{
    return (this->val > obj.val);
}
/**************************/
bool    Fixed::operator<=(Fixed obj)
{
    return (this->val <= obj.val);
}
/**************************/
bool    Fixed::operator>=(Fixed obj)
{
    return (this->val >= obj.val);
}
/**************************/
bool    Fixed::operator==(Fixed obj)
{
    return (this->val == obj.val);
}
/**************************/
Fixed    Fixed::operator+(Fixed obj)
{
    return (Fixed(this->toFloat() + obj.toFloat()));
}
/**************************/
Fixed    Fixed::operator-(Fixed obj)
{
    return (Fixed(this->toFloat() - obj.toFloat()));
}
/**************************/
Fixed    Fixed::operator*(Fixed obj)
{
    return (Fixed(this->toFloat() * obj.toFloat()));
}
/**************************/
Fixed    Fixed::operator/(Fixed obj)
{
    return (Fixed(this->toFloat() / obj.toFloat()));
}
/**********************/
Fixed    Fixed::operator++(void)
{
    Fixed   a;
    a.setRawBits(this->val + 1);
    return (a);
}
/******************************/
Fixed    Fixed::operator--(void)
{
    Fixed   a;
    a.setRawBits(this->val - 1);
    return (a);
}
/****************************/
Fixed   &Fixed::min(Fixed &obj, Fixed &obj2)
{
    if (obj > obj2)
        return (obj2);
    return (obj);
}
/****************************/
Fixed   &Fixed::max(Fixed &obj, Fixed &obj2)
{
    if (obj > obj2)
        return (obj);
    return (obj2);
}
/************************/
const Fixed   &Fixed::min(const Fixed &obj, const Fixed &obj2)
{
    if (obj > obj2)
        return (obj2);
    return (obj);
}
/****************************/
const Fixed   &Fixed::max(const Fixed &obj, const Fixed &obj2)
{
    if (obj > obj2)
        return (obj);
    return (obj2);
}
