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


void AMateria::use(ICharacter& target)
{
    std::cout<<"Ice: \"* shoots an ice bolt at\""<<target.getName()<<std::endl;
    std::cout<<"Cure: \"* heals "<<target.getName()<<"'s wounds *\""<<std::endl;
}

/*************************/
//source materia
MateriaSource::~MateriaSource(): len(0)
{
}
void IMateriaSource::learnMateria(AMateria *obj)
{
    std::cout<<"tryna copy the materia by the materiaSource constructor\n";
    this->source[this->len] = obj->getType();
    this->len += 1;
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
    int i;
    std::string t = "";

    i = 0;
    while (i < this->len)
    {
        if (this->source[i] == type)
        {
            t = type;
            break ;
        }
    }
    if (t == "")
        return (0);
    AMateria    **m;
    m = new AMateria*;
    (*m)->setType(t);
    return (*m);
}
