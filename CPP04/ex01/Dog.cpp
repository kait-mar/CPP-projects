#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    this->brain = new Brain;
    std::cout<<this->type<<" constructor called\n";
}

Dog::Dog(Dog const &dog)
{
    this->type = "Dog";
    int i = 0;

    this->brain = new Brain;
    while (i < 100)
    {
        this->brain->set(dog.brain->get(i), i);
        i++;
    }
    std::cout<<this->type<<" copy constructor called\n";
}

Dog::~Dog()
{
    delete(this->brain);
    std::cout<<this->type<<" destructor called\n";
}

void    Dog::deepCopy(Dog dog)
{
    int i = 0;

    delete (this->brain);
    this->brain = new Brain;
    while (i < 100)
    {
        this->brain->set(dog.brain->get(i), i);
        i++;
    }
}

Dog     &Dog::operator=(Dog const &cat)
{
    std::cout<<"Dog =operator called\n";
    if (this != &cat)
    {
        this->deepCopy(cat);
    }
    return (*this);
}

void    Dog::makeSound() const
{
    std::cout<<"haw haw haaaw\n";
}
