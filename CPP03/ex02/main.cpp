#include "FragTrap.hpp"

int main()
{
    FragTrap a("kait");
    std::cout<<"----------\n"; a._print(); std::cout<<"----------\n";
    a.attack("marry");
    a.highFivesGuys();
}
