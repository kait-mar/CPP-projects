#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap a("kait");
    a._print();
    a.whoAmI();
    std::cout<<"**********\n";
    a.attack("marry");
    std::cout<<"**********\n";
}
