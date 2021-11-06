#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "brain.hpp"

class Cat: public Animal
{
private:
    Brain   *brain;
public:
    Cat();
    Cat(Cat const &);
    Cat &operator=(Cat const &);
    virtual ~Cat();
    void    makeSound() const;
    void    deepCopy(Cat cat);
};


#endif