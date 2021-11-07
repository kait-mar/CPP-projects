#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    this->brain = new Brain;
    std::cout<<this->type<<" constructor called\n";
}

Cat::Cat(Cat const &cat)
{
    this->type = "Cat";
    int i = 0;

    this->brain = new Brain;
    while (i < 100)
    {
        this->brain->set(cat.brain->get(i), i);
        i++;
    }
    std::cout<<this->type<<" COPY constructor called\n";
}
void    Cat::deepCopy(Cat cat)
{
    int i = 0;

    delete (this->brain);
    this->brain = new Brain;
    while (i < 100)
    {
        this->brain->set(cat.brain->get(i), i);
        i++;
    }
}

Cat::~Cat()
{
    delete(this->brain);
    std::cout<<this->type<<" destructor called\n";
}

void    Cat::makeSound() const
{
    std::cout<<"Meaaaaw\n";
}

Cat     &Cat::operator=(Cat const &cat)
{
    int i;

    i = 0;
    std::cout<<"cat =operator called\n";
    if (this != &cat)
    {
        this->deepCopy(cat);
    }
    return (*this);
}
