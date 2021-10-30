#include "phone.hpp"
#include <string.h>

PhoneBook::PhoneBook(void)
{
}

PhoneBook::~PhoneBook()
{
}

contact::contact(void)
{
}

contact::~contact()
{
}

void    PhoneBook::set_contact(int i, std::string str, int choix)
{
    if (choix == 0)
        this->cont[i].set_first(str);
    else if (choix == 1)
        this->cont[i].set_last(str);
    else if (choix == 2)
        this->cont[i].set_nick(str);
    else if (choix == 3)
        this->cont[i].set_phone(str);
    else if (choix == 4)
        this->cont[i].set_secret(str);
}
