#include "serialize.hpp"

int main()
{
    //char *tab;
    //tab = (char *)"hello!";
    int tab[3] = {1, 9, 3};
    std::cout<<"before: "<<tab<<std::endl;
    uintptr_t   res = serialize(tab);
    int    *rev = (int *)deserialize(res);
    // char    *rev = (char *)deserialize(res);
    std::cout<<"after: "<<rev<<std::endl;
    std::cout<<"content: "<<rev[0]<<std::endl
                            <<rev[1]<<std::endl
                            <<rev[2]<<std::endl;
}
