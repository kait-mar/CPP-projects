#include "Dog.hpp"
#include "Cat.hpp"

Animal::Animal()
{
    std::cout<<"default Animal constructor called\n";
}

Animal::Animal(std::string str) : type(str)
{
    std::cout<<"Animal constructor called\n";
}

Animal::~Animal()
{
    std::cout<<"Animal destructor called\n";
}

std::string Animal::getType() const
{
    return (this->type);
}

void    Animal::makeSound() const
{
    std::cout<<"Animal not specified!!\n";
}

