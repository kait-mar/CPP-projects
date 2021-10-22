#include "materia.hpp"

AMateria::AMateria(std::string const & type): type(type)
{
}
AMateria::AMateria()
{
}

std::string const & AMateria::getType() const
{
    return (this->type);
}

Ice::Ice()
{
    this->type = "ice";
}

Ice::~Ice()
{
}

Cure::Cure()
{
    this->type = "cure";
}

Cure::~Cure()
{
}

AMateria* Ice::clone() const
{
    AMateria    **real;

    real = new AMateria*;
    (*real)->setType(this->type);
    return (*real);
}

AMateria* Cure::clone() const
{
    AMateria    **real;

    real = new AMateria*;
    (*real)->setType(this->type);
    return (*real);
}

std::string ICharacter::getName()
{
    return (this->name);
}
void AMateria::use(ICharacter& target)
{
    std::cout<<"Ice: \"* shoots an ice bolt at\""<<target.getName()<<std::endl;
    std::cout<<"Cure: \"* heals "<<target.getName()<<"'s wounds *\""<<std::endl;
}
