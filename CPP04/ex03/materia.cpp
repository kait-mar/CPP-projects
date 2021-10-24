#include "character.hpp"

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

AMateria    &AMateria::operator=(AMateria &obj)
{
    this->type = obj.type; //doesn't make sense !!

    return (*this);
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
    return (new Ice());
}

AMateria* Cure::clone() const
{
    return (new Cure());
}

void AMateria::use(ICharacter& target)
{
    std::cout<<"Ice: * shoots an ice bolt at "<<target.getName()<<" *"<<std::endl;
    std::cout<<"Cure: * heals "<<target.getName()<<"'s wounds *"<<std::endl;
}

/*************************/

MateriaSource::MateriaSource(): len(0)
{
    int i = 0;
    while (i < 4)
        this->source[i++] = NULL;
}
void MateriaSource::learnMateria(AMateria *obj)
{
    //std::cout<<"tryna copy the materia by the materiaSource constructor\n";
    if (this->len < 4)
    {
        this->source[this->len] = obj->clone();
        this->len += 1;
    }
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
    int i;

    i = 0;
    while (i < this->len)
    {
        if (this->source[i]->getType() == type)
        {
            break ;
        }
        i++;
    }
    if (i == this->len)
        return (0);
    return (this->source[i]->clone());
}
