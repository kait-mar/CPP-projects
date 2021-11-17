#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
    Base    *base = generate();
    identify(base);
    identify(*base);
    return(0);
}
