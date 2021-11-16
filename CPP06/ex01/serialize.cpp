#include "serialize.hpp"

uintptr_t serialize(void* ptr)
{
    uintptr_t   res;

    res = reinterpret_cast<uintptr_t>(ptr);
    return(res);
}

void* deserialize(uintptr_t raw)
{
    void    *rev;

    rev = reinterpret_cast<void*>(raw);
    return (rev);
}
