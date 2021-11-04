#include "Fixed.hpp"

Fixed::Fixed()
{
    this->val = 0;
    std::cout<<"default constructor called\n";
}
/*******************************************/
Fixed::~Fixed()
{
    std::cout<<"destructor called\n";
}
/*******************************************/
Fixed::Fixed(Fixed const &obj)
{
    std::cout<<"copy constructor called\n";
    this->val = obj.val;
}
/*******************************************/
int Fixed::getRawBits(void) const
{
    std::cout<<"getRawBits function called\n";
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
    std::cout<<"assignation operator called\n";
    this->val = a.val;
    return (*this);
}
/*******************************************/
Fixed::Fixed(int const n)
{
    std::cout<<"Int constructor called\n";
    this->val = (int)roundf(n << this->bit);
}
/***************************/
Fixed::Fixed(float const x)
{
    std::cout<<"Float constructor called\n";
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
