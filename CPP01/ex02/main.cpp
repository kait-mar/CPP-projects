#include <iomanip>
#include <string>
#include <stdio.h>
#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    //std::string *stringPTR = new std::string(str);
    std::string &stringREF = str;
    std::cout<<"the string adress ==>"<<&str<<"\n";
    std::cout<<"string pointer ==>"<<stringPTR<<std::endl;
    std::cout<<"string reference ==>"<<&stringREF<<std::endl;
    std::cout<<"------------------\n";
    std::cout<<*stringPTR<<std::endl;
    std::cout<<stringREF<<std::endl;
}