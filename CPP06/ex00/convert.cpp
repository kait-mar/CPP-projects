#include "convert.hpp"

int     find(std::string s)
{
    for (std::string::size_type i = 0; i < s.size(); i++)
    {
        if (s[i] == '.')
            return (1);
    }
    return (0);
}

void    add_f(float x)
{
    std::string s = std::to_string(x);
    if (find(s) == 0)
        std::cout<<".0f"<<std::endl;
    else
        std::cout<<"f"<<std::endl;
}

void    add_d(double x)
{
    std::string s = std::to_string(x);
    if (find(s) == 0)
        std::cout<<".0"<<std::endl;
}

int    print_error()
{
    std::cout<<"Error argument !\n";
    return (1);
}
