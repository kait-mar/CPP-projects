#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat: public Animal
{
public:
    Cat();
    Cat(Cat const &);
    Cat &operator=(Cat const &) {return (*this);}
    virtual ~Cat();
    void    makeSound() const;
};

#endif