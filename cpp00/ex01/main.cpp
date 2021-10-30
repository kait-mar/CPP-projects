#include "phone.hpp"

int valid(std::string str)
{
    int i = 0;

    if (str.compare("") == 0)
        return (0);
    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            return (0);
        i++;
    }
    return (1);
}

int main()
{
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
        else if (command.compare("ADD") == 0)
        {
            int k;
            if (i >= 8)
                k = 0;
            else
                k = i;
            std::string str;
            std::cout<<"first name | ";
            std::getline(std::cin, str);
            phone.set_contact(k, str, 0);
            std::cout<<"last name | ";
            std::getline(std::cin, str);
            phone.set_contact(k, str, 1);
            std::cout<<"nickname | ";
            std::getline(std::cin, str);
            phone.set_contact(k, str, 2);
            std::cout<<"phone number | ";
            std::getline(std::cin, str);
            phone.set_contact(k, str, 3);
            std::cout<<"darkest secret | ";
            std::getline(std::cin, str);
            phone.set_contact(k, str, 4);
            if (i < 8)
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
                if (valid(num) == 0)
                    std::cout<<"enter a valid index!\n";
                else
                    break ;
                std::cout<<"which contact do you wanna see ?   ";
                std::getline(std::cin, num); 
            }
            // if (valid(num) == 0)
            // {
            //     std::cout<<"not a valid index !\n";
            //     continue ;
            // }
            j = stoi(num);
            if (j >= i)
            {
                std::cout<<"index not found!!!\n";
                continue;
            }
            std::cout<<"first name : "<<phone.get_contact(j).get_first()<<"\n";
            std::cout<<"last name : "<<phone.get_contact(j).get_last()<<"\n";
            std::cout<<"nickname : "<<phone.get_contact(j).get_nick()<<"\n";
            std::cout<<"phone number : "<<phone.get_contact(j).get_phone()<<"\n";
            std::cout<<"darkest secret: "<<phone.get_contact(j).get_secret()<<"\n";
        }
        else if (command.compare("") != 0)
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
        if (phone.get_contact(j).get_first().length() > 9)
        {
            phone.get_contact(j).get_first().resize(9);
            std::cout<<phone.get_contact(j).get_first()<<".";
        }
        else
            std::cout<<std::left<<std::setw(10)<<phone.get_contact(j).get_first();
        std::cout<<"|";
        if (phone.get_contact(j).get_last().length() > 9)
        {
            phone.get_contact(j).get_last().resize(9);
            std::cout<<phone.get_contact(j).get_last()<<".";
        }
        else
            std::cout<<std::left<<std::setw(10)<<phone.get_contact(j).get_last();
        std::cout<<"|";
        if (phone.get_contact(j).get_nick().length() > 9)
        {
            phone.get_contact(j).get_nick().resize(9);
            std::cout<<phone.get_contact(j).get_nick()<<".";
        }
        else
            std::cout<<std::left<<std::setw(10)<<phone.get_contact(j).get_nick();
        j++;
        std::cout<<std::endl;
    }
}
