#include "easyfind.hpp"

int main()
{
    try
    {
        std::vector<int> v = {87, 7, 22};
        for (int i = 5; i < 10; i++)
            v.push_back(i);
        // easyfind(v, 987);
        easyfind(v, 7);
        std::cout<< *(easyfind(v, 7) + 1) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout<< "Element not found in container!\n";
    }
}
