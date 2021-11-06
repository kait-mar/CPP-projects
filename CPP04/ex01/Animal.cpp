#include "Dog.hpp"
#include "Cat.hpp"

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
