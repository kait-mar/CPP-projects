#include "phone.hpp"
#include <string.h>

int main()
{
    using namespace std;
    PhoneBook   phone;
    int i = 0;
    int j = 0;
    std::string command;

    while (1)
    {
        std::cout<<"enter a command| ";
        std::cin>>command;
        if (command.compare("EXIT") == 0)
        {
            return (0);
        }
        else if (command.compare("ADD") == 0 && i < 8)
        {
            std::cout<<"first name | ";
            std::cin>>phone.contact[i].first_name;
            std::cout<<"last name | ";
            std::cin>>phone.contact[i].last_name;
            std::cout<<"nickname | ";
            std::cin>>phone.contact[i].nickname;
            std::cout<<"phone number | ";
            std::cin>>phone.contact[i].phone_number;
            std::cout<<"darkest secret | ";
            std::cin>>phone.contact[i].darkest_secret;
        // std::cout<<"first name | ";
        // std::getline(std::cin, phone.contact[i].first_name);
        // std::cout<<"last name | ";
        // std::getline(std::cin, phone.contact[i].last_name);
        // std::cout<<"nickname | ";
        // std::getline(std::cin, phone.contact[i].nickname);
        // std::cout<<"phone number | ";
        // std::getline(std::cin, phone.contact[i].phone_number);
        // std::cout<<"darkest secret | ";
        // std::getline(std::cin, phone.contact[i].darkest_secret);
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
            while (j < i)
            {
                std::cout<<std::setw(10)<<j<<"|"<<std::setprecision(10)<<phone.contact[j].first_name<<"|"<<std::setw(10)<< phone.contact[j].last_name<<"|"<<std::setw(10)<<phone.contact[j].nickname<<std::endl;
                j++;
            }
            std::cout<<"which contact do you wanna see ?\n";
            std::cin>>j;
            if (j >= i)
            {
                std::cout<<"index not found!!!\n";
                continue;
            }
            std::cout<<"first name :"<<phone.contact[j].first_name<<"\n";
            std::cout<<"last name :"<<phone.contact[j].last_name<<"\n";
            std::cout<<"nickname :"<<phone.contact[j].nickname<<"\n";
            std::cout<<"phone number :"<<phone.contact[j].phone_number<<"\n";
            std::cout<<"darkest secret:"<<phone.contact[j].darkest_secret<<"\n";
        }
        else
            std::cout<<"not a valid command!\n";
    }

}