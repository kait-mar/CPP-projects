#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

int main()
{
    std::string filename, s1, s2;
    std::fstream file;
    std::cout<<"enter the file to replace in\n";
    std::cin>>filename;
    std::cout<<"enter s1 | \n";
    std::cin>>s1;
    std::cout<<"enter s2 | \n";
    std::cin>>s2;
    file.open(filename, std::ios::in | std::ios::out);
    if (!file)
    {
        std::cout<<"open file error occured!!\n";
        return (1);
    }
    
}