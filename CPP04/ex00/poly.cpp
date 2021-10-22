#include "poly.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout<<this->type<<" constructor called\n";
}

Dog::~Dog()
{
    std::cout<<this->type<<" destructor called\n";
}

Cat::Cat()
{
    this->type = "Cat";
    std::cout<<this->type<<" constructor called\n";
}

Cat::~Cat()
{
    std::cout<<this->type<<" destructor called\n";
}


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

void    Cat::makeSound() const
{
    std::cout<<"Meaaaaw\n";
}

void    Dog::makeSound() const
{
    std::cout<<"haw haw haaaw\n";
}