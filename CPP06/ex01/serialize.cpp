#include "serialize.hpp"

uintptr_t serialize(Data* ptr)
{
    uintptr_t   res;

    res = reinterpret_cast<uintptr_t>(ptr);
    return(res);
}

Data* deserialize(uintptr_t raw)
{
    Data    *rev;

    rev = reinterpret_cast<Data*>(raw);
    return (rev);
}
