#include <iostream>

int main(int argc, char *argv[])
{
    int i = 0;
    if (argc == 1)
    {
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
        return (0);
    }
    int j = 1;
    while (argv[j])
    {
        i = 0;
        while (argv[j][i])
        {
            if (argv[j][i] >= 'a' && argv[j][i] <= 'z')
                std::cout<<char(argv[j][i] - 32);
            else
                std::cout<<char(argv[j][i]);
            i++;
        }
        std::cout<<" ";
        j++;
    }
    std::cout<<std::endl;
    return (0);
}
