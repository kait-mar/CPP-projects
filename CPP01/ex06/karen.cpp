#include "karen.hpp"

karen::karen()
{

}
karen::~karen()
{

}
void karen::debug( void )
{
    std::cout<<"I love to get burger. I just love it!\n";
}
void    karen::info(void)
{
    std::cout<<"I cannot believe adding extra bacon cost more money\n";
}

void    karen::warning(void)
{
    std::cout<<"I’ve been coming here for years and you just started working here last month.\n";
}

void    karen::error(void)
{
    std::cout<< "I want to speak to the manager now !!\n";
}

int     check(std::string level, int n)
{
    if (n != 2)
        return (-1);
    if (level.compare("DEBUG") == 0)
        return (1);
    if (level.compare("INFO") == 0)
        return (2);
    if (level.compare("WARNING") == 0)
        return (3);
    if (level.compare("ERROR") == 0)
        return (4);
    return (-1);
}

void    karen::complain(std::string level)
{
    void    (karen::*ptrfunc[4])(void) = {&karen::debug, &karen::info, &karen::warning, &karen::error};
    std::string ptr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
    {
        if (ptr[i] == level)
            (this->*(ptrfunc[i]))();
    }
}
