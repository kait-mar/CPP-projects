#include "Array.hpp"

int main()
{
    try
    {
        Array<int> a;
        std::cout<<"a's size = "<< a.size() << std::endl;
        Array<int> b(5);
        std::cout<<"b's size = " << b.size() << std::endl;
        Array<int> c(b);
        a = c;
       std::cout<<"c[3] = " << c[3]<< std::endl;
       //std::cout<<"c[52] = " << c[52]<< std::endl;
       std::cout<<"c[0] = " << c[0]<< std::endl;
        std::cout<<"a's size = "<< a.size() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout<< "[out of Range]\n";
    }
    return (0);
}
