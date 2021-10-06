#include "phone.hpp"
#include <string.h>

int main()
{
    using namespace std;
    PhoneBook   phone;
    int i = 0;
    int j = 0;
    std::string command;
    std::string num;
    std::string str;

    while (1)
    {
        std::cout<<"enter a command ===> ";
        std::getline(std::cin, command);
        if (command.compare("EXIT") == 0)
        {
            return (0);
        }
        else if (command.compare("ADD") == 0 && i < 8)
        {
            std::cout<<"first name | ";
            std::getline(std::cin, phone.contact[i].first_name);
            std::cout<<"last name | ";
            std::getline(std::cin, phone.contact[i].last_name);
            std::cout<<"nickname | ";
            std::getline(std::cin, phone.contact[i].nickname);
            std::cout<<"phone number | ";
            std::getline(std::cin, phone.contact[i].phone_number);
            std::cout<<"darkest secret | ";
            std::getline(std::cin, phone.contact[i].darkest_secret);
        i++;
        }
        else if (command.compare("SEARCH") == 0)
        {
            j = 0;
            if (i == 0)
            {
                std::cout<<"the phone book still empty!\n";
                continue;
            }
            affichage_en_n(phone, i);
            std::cout<<"which contact do you wanna see ?   ";
            std::getline(std::cin, num);
            while (1)
            {
                if (num.compare("") != 0)
                    break ;
                std::cout<<"which contact do you wanna see ?   ";
                std::getline(std::cin, num); 
            }
            j = stoi(num);
            if (j >= i)
            {
                std::cout<<"index not found!!!\n";
                continue;
            }
            std::cout<<"first name : "<<phone.contact[j].first_name<<"\n";
            std::cout<<"last name : "<<phone.contact[j].last_name<<"\n";
            std::cout<<"nickname : "<<phone.contact[j].nickname<<"\n";
            std::cout<<"phone number : "<<phone.contact[j].phone_number<<"\n";
            std::cout<<"darkest secret: "<<phone.contact[j].darkest_secret<<"\n";
        }
        else
            std::cout<<"not a valid command!\n";
    }

}

void    affichage_en_n(PhoneBook phone, int i)
{
    int j;

    j = 0;
    while (j < i)
    {
        std::cout<<std::left<<std::setw(10)<<j<<"|";
        if (phone.contact[j].first_name.length() > 9)
        {
            phone.contact[j].first_name.resize(9);
            std::cout<<phone.contact[j].first_name<<".";
        }
        else
            std::cout<<std::left<<std::setw(10)<<phone.contact[j].first_name;
        std::cout<<"|";
        if (phone.contact[j].last_name.length() > 9)
        {
            phone.contact[j].last_name.resize(9);
            std::cout<<phone.contact[j].last_name<<".";
        }
        else
            std::cout<<std::left<<std::setw(10)<<phone.contact[j].last_name;
        std::cout<<"|";
        if (phone.contact[j].nickname.length() > 9)
        {
            phone.contact[j].nickname.resize(9);
            std::cout<<phone.contact[j].nickname<<".";
        }
        else
            std::cout<<std::left<<std::setw(10)<<phone.contact[j].nickname;
        j++;
        std::cout<<std::endl;
    }
}