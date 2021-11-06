#include "Dog.hpp"

 Dog::Dog()
{
    this->type = "Dog";
    std::cout<<this->type<<" constructor called\n";
}

Dog::~Dog()
{
    std::cout<<this->type<<" destructor called\n";
}

void    Dog::makeSound() const
{
    std::cout<<"haw haw haaaw\n";
}

Dog::Dog(Dog const &obj)
{
    this->type = obj.type;
}