#include <iomanip>
#include <string>
#include <stdio.h>
#include <iostream>

int main()
{
    std::string *stringPTR;
    stringPTR = new std::string;
    std::string str = "HI THIS IS BRAIN";
    *stringPTR = "HI THIS IS BRAIN";
    std::string &stringREF = str;
    std::cout<<"the string adress"<<&str<<"\n";
    std::cout<<"string pointer"<<stringPTR<<std::endl;
    std::cout<<"string reference"<<&stringREF<<std::endl;
    delete stringPTR;
}