#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(Animal const &);
    Animal(std::string str);
    virtual ~Animal();
    std::string getType() const;
    Animal  &operator=(Animal const &);
    virtual void    makeSound() const;
};

#endif