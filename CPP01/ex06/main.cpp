#include "karen.hpp"

int main(int argc , char **argv)
{
    karen   kar;

    if (argc == 1)
        return (1);
    switch(check(argv[1], argc))
    {
        case 1:
        {
            std::cout<<"[DEBUG]\n";
            kar.complain(argv[1]);
        }
        case 2:
        {
            std::cout<<"[INFO]\n";
            kar.complain(argv[1]);
        }
        case 3:
        {
            std::cout<<"[WARNING]\n";
            kar.complain(argv[1]);
        }
        case 4:
        {
            std::cout<<"[ERROR]\n";
            kar.complain(argv[1]);
             break ;
        }
        default:
        {
            std::cout<<"[ Probably complaining about insignificant problems ]\n";
        }
    }
    return (1);
}
