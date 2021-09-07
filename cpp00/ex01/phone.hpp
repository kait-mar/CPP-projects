#ifndef PHONE_H
#define PHONE_H

#include <iomanip>
#include <iostream>
#include <string>

class contact
{
public:
    std::string  first_name;
    std::string  last_name;
    std::string  nickname;
    std::string  phone_number;
    std::string  darkest_secret;

    contact(void);
    ~contact();
};

contact::contact(void)
{
    std::cout<<"contact's constructor called\n";
}

contact::~contact()
{
    std::cout<<"contact's desctuctor called\n";
}

class PhoneBook
{
public:
    contact contact[8];
    PhoneBook(void);
    ~PhoneBook();
};

PhoneBook::PhoneBook(void)
{
    std::cout<<"phonebook's constructor called\n";
}

PhoneBook::~PhoneBook()
{
    std::cout<<"phonebook's destructor called\n";
}

#endif