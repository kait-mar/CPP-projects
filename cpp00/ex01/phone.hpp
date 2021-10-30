#ifndef PHONE_H
#define PHONE_H

#include <iomanip>
#include <iostream>
#include <string>

class contact
{
    std::string  first_name;
    std::string  last_name;
    std::string  nickname;
    std::string  phone_number;
    std::string  darkest_secret;
public:
    contact(void);
    std::string get_first() {return (first_name);}
    std::string get_last() {return (last_name);}
    std::string get_nick() {return (nickname);}
    std::string get_phone() {return (phone_number);}
    std::string get_secret() {return (darkest_secret);}
    void set_first(std::string str) {first_name = str;}
    void set_last(std::string str) {last_name = str;}
    void set_nick(std::string str) {nickname = str;}
    void set_phone(std::string str) {phone_number = str;}
    void set_secret(std::string str) {darkest_secret = str;}
    ~contact();
};

class PhoneBook
{
    contact cont[8];
public:
    PhoneBook(void);
    contact get_contact(int i) {return (cont[i]);}
    void    set_contact(int i, std::string str, int choix);
    ~PhoneBook();
};

void    affichage_en_n(PhoneBook phone, int i);

#endif