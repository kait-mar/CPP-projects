#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal  **animal = new Animal*[4];
    int i = 0;

    Dog basic;
    {
        Dog tmp = basic;
    }
    Dog copy(basic);
    std::cout<<"-----------------\n";
    while ( i < 4)
    {
        if (i % 2)
            animal[i] = new Cat();
        else
            animal[i] = new Dog();
        std::cout<<"///////\n";
        i++;
    }
    i = 0;
    std::cout<<"*************************\n";
    while ( i < 4)
    {
        if (i % 2)
            delete(animal[i]);
        else
            delete(animal[i]);
        i++;
        std::cout<<"///////\n";
    }
    std::cout<<"****************\n";
    return (0);
}
