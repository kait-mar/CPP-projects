#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

Animal::Animal()
{
    std::cout<<"default Animal constructor called\n";
    this->type = "animal";
}

Animal::Animal(Animal const &obj)
{
    this->type = obj.type;
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

Animal  &Animal::operator=(Animal const &obj)
{
    this->type = obj.type;
    return (*this);
}

void    Animal::makeSound() const
{
    std::cout<<"Animal not specified!!\n";
}
