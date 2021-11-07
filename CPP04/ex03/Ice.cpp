#include "Ice.hpp"

Ice::Ice()
{
    this->type = "ice";
}

Ice::~Ice()
{
}

AMateria* Ice::clone() const
{
    return (new Ice());
}
