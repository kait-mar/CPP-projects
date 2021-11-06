#include "WrongAnimal.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout<<this->type<<" constructor called\n";
}

WrongCat::~WrongCat()
{
    std::cout<<this->type<<" destructor called\n";
}

WrongAnimal::WrongAnimal()
{
    std::cout<<"default WrongAnimal constructor called\n";
    this->type = "Wronganimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const &obj)
{
    this->type = obj.type;
}
WrongAnimal::WrongAnimal(std::string str) : type(str)
{
    std::cout<<"WrongAnimal constructor called\n";
}

WrongAnimal::~WrongAnimal()
{
    std::cout<<"WrongAnimal destructor called\n";
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}

void    WrongAnimal::makeSound() const
{
    std::cout<<"WrongAnimal not specified!!\n";
}

void    WrongCat::makeSound() const
{
    std::cout<<"Meaaaaw\n";
}
