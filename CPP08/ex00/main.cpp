#include "easyfind.hpp"
#include <stack>

int main()
{
    try
    {
        std::vector<int> v;
        for (int i = 5; i < 10; i++)
            v.push_back(i);
        // easyfind(v, 987);
        easyfind(v, 7);
        //std::cout<<v[3] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout<< "Element not found in container!\n";
    }
}
