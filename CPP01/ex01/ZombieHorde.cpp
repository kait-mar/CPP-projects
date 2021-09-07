#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie  *horde;

    horde = new Zombie[N];
    for (int i = 1; i <= N; i++)
    {
        //horde[i - 1] = Zombie(name + std::to_string(i));
        horde[i - 1].set(name + std::to_string(i));
        //  horde[i - 1].name = name; try name as a public member and see if it's the prob!!
    }
    return (horde);
}
