#include "karen.hpp"

void test()
{
    std::cout<<"hello from test1"<<std::endl;
}
void test2()
{
    std::cout<<"hi from test2 "<<std::endl;
}

int main()
{
    karen   karen;
    //karen.complain("warning");
    karen.complain("debug");
}
