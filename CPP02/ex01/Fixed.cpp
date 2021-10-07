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
    this->val = a.val;
    return (*this);
}
/*******************************************/
Fixed::Fixed(int const n)
{
    
}