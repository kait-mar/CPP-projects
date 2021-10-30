#include "Zombie.hpp"

int main()
{
    Zombie *z  = newZombie("kait");
    z->announce();
    delete(z);
    randomChump("mar");
    return (1);
}
