#include "Character.hpp"

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

void AMateria::use(ICharacter& target)
{
    if (this->type == "ice")
        std::cout<<"Ice: * shoots an ice bolt at "<<target.getName()<<" *"<<std::endl;
    else if (this->type == "cure")
        std::cout<<"Cure: * heals "<<target.getName()<<"'s wounds *"<<std::endl;
}

