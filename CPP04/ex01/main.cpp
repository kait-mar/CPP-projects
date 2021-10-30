#include "brain.hpp"

/*int main()
{
    int    i = 0;
    Animal *animal = new Animal[6];
    //use animal as double ** ==> animal = new animal *
    std::cout<<"*****************\n";
    while (i < 6)
    {
        if (i % 2)
            animal[i++] = Cat();
        else
            animal[i++] = Dog();
        std::cout<<"-------------------\n";
    }
    std::cout<<"*****************\n";
    delete [] animal;
    // i = 0;
    // while (i < 6)
    // {
    //     animal[i++].~Animal();
    // }

    //delete[] animal;
    //i = 0;
    // while (i < 6)
    // {
    //     if (i % 2)
    //         ~Cat().~Animal();
    //     else
    //         animal[i++].~Dog();
    //     std::cout<<"-------------------\n";
    // }
}*/

int main()
{
    const Animal* j = new Dog();
    std::cout<<"-------------------\n";
    const Animal* i = new Cat();
    std::cout<<"-------------------\n";
    delete j;//should not create a leak
    std::cout<<"-------------------\n";
    delete i;
}