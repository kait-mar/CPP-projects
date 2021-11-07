#include "Cure.hpp"

AMateria* Cure::clone() const
{
    return (new Cure());
}

Cure::Cure()
{
    this->type = "cure";
}

Cure::~Cure()
{
}
