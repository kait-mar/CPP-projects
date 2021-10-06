#include "karen.hpp"

karen::karen()
{

}
karen::~karen()
{

}
void karen::debug( void )
{
    std::cout<<"I love to get burger. I just love it!\n***************\n";
}
void    karen::info(void)
{
    std::cout<<"I cannot believe adding extra bacon cost more money\n***************\n";
}

void    karen::warning(void)
{
    std::cout<<"I’ve been coming here for years and you just started working here last month.\n***************\n";
}

void    karen::error(void)
{
    std::cout<< "I want to speak to the manager now !!\n***************\n";
}

int     check(std::string level)
{
    if (level.compare("debug") == 0)
        return (1);
    if (level.compare("info") == 0)
        return (2);
    if (level.compare("warning") == 0)
        return (3);
    if (level.compare("error") == 0)
        return (4);
    return (-1);
}

void    karen::complain(std::string level)
{
    void    (karen::*ptrfunc)(std::string) = &karen::debug();

    //ptrfunc = &karen::debug();
    level = "hello";
    // switch(check(level))
    // {
    //     case 1:
    //         this->debug();
    //     case 2:
    //         this->info();
    //     case 3:
    //         this->warning();
    //     case 4:
    //         this->error();
    //         break ;
    //     default:
    //         std::cout<<"not a valid level\n";
    // }
}
