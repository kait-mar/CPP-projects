#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap a("kait");
    std::cout<<"--------\n"; a._print(); std::cout<<"--------\n";
    a.whoAmI();
    std::cout<<"**********\n";
    a.attack("marry");
    std::cout<<"**********\n";
}
