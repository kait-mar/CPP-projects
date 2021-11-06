#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(WrongAnimal const &);
    WrongAnimal(std::string str);
    ~WrongAnimal();
    std::string getType() const;
    WrongAnimal  &operator=(WrongAnimal const &);
    void    makeSound() const;
};

class WrongCat: public WrongAnimal
{
public:
    WrongCat();
    WrongCat(WrongCat const &);
    WrongCat &operator=(WrongCat const &);
    ~WrongCat();
    void    makeSound() const;
};

#endif