#include "convert.hpp"

void    char_conv(char *str)
{
    try
    {
        if (strlen(str) == 1 && isdigit(*str) == 0)
        {
            std::cout<<"char: "<< static_cast<char>(*str)<<std::endl;
            return ;
        }
        double   x = std::stod(str);
        int d = (int)x;
        if ((x >= 0 && x < 32) || x == 127)
            std::cout<< "char: Non displayable\n";
        else if (std::isprint(x))
            std::cout<< "char: "<< (char)d<<std::endl;
        else
            std::cout<< "char: imposible\n";
    }
    catch(const std::exception& e)
    {
        std::cout<< "char: imposible\n";
    }
}

void    int_conv(char *str)
{
    try
    {
        if (strlen(str) == 1 && isdigit(*str) == 0)
        {
            std::cout<<"int: "<< static_cast<int>(*str)<<std::endl;
            return ;
        }
        double   x = std::stod(str);
        if (isnan(x) || x > INT_MAX || x < INT_MIN)
            std::cout<< "int: imposible\n";
        else
            std::cout<< "int: "<< (int)x<<std::endl;
    }
    catch(std::exception &e)
    {
        std::cout<< "int: imposible\n";
    }
}

void    float_conv(char *str)
{
    try
    {
        if (strlen(str) == 1 && isdigit(*str) == 0)
        {
            std::cout<<"float: "<< static_cast<float>(*str)<<".0000000f"<<std::endl;
            return ;
        }
        double   x = std::stod(str);
        std::cout<<"float: "<< std::to_string(x)<<"f\n";
    }
    catch(std::exception &e)
    {
        std::cout<< "float: impossible\n";
    }
}

void    double_conv(char *str)
{
    try
    {
        if (strlen(str) == 1 && isdigit(*str) == 0)
        {
            std::cout<<"float: "<< static_cast<float>(*str)<<".00000000"<<std::endl;
            return ;
        }
        double   x = std::stod(str);
        std::cout<<"double: "<< std::to_string(x) << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout<< "double: impossible\n";
    }
}

int main(int argc, char **argv)
{
    if (argc != 2)
        return (print_error());
    char_conv(argv[1]);
    int_conv(argv[1]);
    float_conv(argv[1]);
    double_conv(argv[1]);
    return (0);
}
