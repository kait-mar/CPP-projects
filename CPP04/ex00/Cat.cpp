#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout<<this->type<<" constructor called\n";
}

Cat::~Cat()
{
    std::cout<<this->type<<" destructor called\n";
}

Cat::Cat(Cat const &obj)
{
    this->type = obj.type;
}

void    Cat::makeSound() const
{
    std::cout<<"Meaaaaw\n";
}

