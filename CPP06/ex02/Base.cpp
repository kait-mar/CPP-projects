#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

std::ostream    &operator<<(std::ostream &os, Base &p)
{
    os<<"\n";
    p.~Base();
    return (os);
}

Base::~Base()
{
}

Base * generate(void)
{

    srand(time(NULL));
    if (rand() % 3 == 0)
        return (new A);
    else if (rand() % 3 == 1)
        return (new B);
    else
        return (new C);
}

void identify(Base* p)
{
    A   *a = dynamic_cast<A*>(p);
    if (a != NULL)
    {
        std::cout<<"the type is A!\n";
        return ;
    }
    B   *b = dynamic_cast<B*>(p);
    if (b != NULL)
    {
        std::cout<<"the type is B!\n";
        return ;
    }
    C   *c = dynamic_cast<C*>(p);
    if (c != NULL)
    {
        std::cout<<"the type is C!\n";
        return ;
    }
}

void identify(Base &p)
{
    try
    {
        A   &a = dynamic_cast<A&>(p);
        std::cout<<"the type is A!"<<a;
        return ;
    }
    catch(const std::exception& e)
    {
    }
    try
    {
        B   &b = dynamic_cast<B&>(p);
        std::cout<<"the type is B!"<<b;
        return ;
    }
    catch(const std::exception& e)
    {
    }
    try
    {
        C   &c = dynamic_cast<C&>(p);
        std::cout<<"the type is C!"<<c;
        return ;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
