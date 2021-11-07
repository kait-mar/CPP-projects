#include "MateriaSource.hpp"

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
