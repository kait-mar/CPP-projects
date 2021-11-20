#include "serialize.hpp"

int main()
{
    Data    *data = new Data;
    std::cout<< data<<std::endl;
    uintptr_t   res = serialize(data);
    Data    *rev = deserialize(res);
    std::cout<< rev<<std::endl;
}
