#include "iter.hpp"

void    print(int const &i)
{
    std::cout<<i<<std::endl;
}

int main()
{
     int tab[4] = {1, 2, 3, 4};
     iter(tab, 4, print);
    return (0);
}
