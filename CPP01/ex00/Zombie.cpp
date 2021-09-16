#include "Zombie.hpp"

Zombie *newZombie( std::string name ){
    Zombie  *z = new Zombie(name);

    return (z);
}

void randomChump( std::string name ){
    Zombie  z(name);
    z.announce();
    return ;
}

int main()
{
    Zombie *z  = newZombie("kait");
    delete(z);
    randomChump("mar");
    return (1);
}
