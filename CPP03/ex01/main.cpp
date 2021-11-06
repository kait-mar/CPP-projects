#include "ScavTrap.hpp"

void    f(ClapTrap &a)
{
    a.attack("kait");
}
int main()
{
    ScavTrap a("kait");
    ClapTrap b(a);

   std::cout<<"--------------\n";  a.attack("pp"); std::cout<<"--------------\n";
}
