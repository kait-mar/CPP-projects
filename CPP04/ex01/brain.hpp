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

class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    std::string get(int i);
    void    set(std::string str, int i);
    virtual ~Brain();
};

class Cat: public Animal
{
private:
    Brain   *brain;
public:
    Cat();
    Cat(Cat &cat);
    virtual ~Cat();
    void    makeSound() const;
    Cat     &operator=(Cat obj);
    void    deepCopy(Cat cat);
};

class Dog: public Animal
{
private:
    Brain   *brain;
public:
    Dog();
    Dog(Dog &dog);
    virtual ~Dog();
    void    makeSound() const;
    Dog     &operator=(Dog obj);
    void    deepCopy(Dog dog);
};




#endif