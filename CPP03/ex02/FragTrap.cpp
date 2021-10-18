#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout<<"FragTrap default constructor called\n";
}

FragTrap::FragTrap(std::string str)
{
    this->set(str, 100, 100, 30);
    std::cout<<"FragTrap constructor called\n";
    this->_print();
}

FragTrap::~FragTrap()
{
    std::cout<<"FragTrap destructor called\n";
}

void FragTrap::highFivesGuys(void)
{
    std::cout<<"High Fives guys ?\n";
}