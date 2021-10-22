#ifndef POLY_H
#define POLY_H

#include <iostream>
#include <string>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(std::string str);
    virtual ~Animal();
    std::string getType() const;
    virtual void    makeSound() const;
};

class Cat: public Animal
{
public:
    Cat();
    virtual ~Cat();
    void    makeSound() const;
};

class Dog: public Animal
{
public:
    Dog();
    virtual ~Dog();
    void    makeSound() const;
};



#endif