#include <iostream>

int main(int argc, char *argv[])
{
    int i = 0;
    if (argc != 2)
    {
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
        return (0);
    }
    while (argv[1][i])
        std::cout<<char(argv[1][i++] - 32);
    std::cout<<std::endl;
    return (0);
}