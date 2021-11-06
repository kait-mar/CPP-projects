#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "brain.hpp"

class Dog: public Animal
{
private:
    Brain   *brain;
public:
    Dog();
    Dog(Dog const &);
    Dog &operator=(Dog const &);
    virtual ~Dog();
    void    makeSound() const;
    void    deepCopy(Dog dog);
};


#endif