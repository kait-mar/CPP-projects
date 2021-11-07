#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "Amateria.hpp"

class IMateriaSource
{
public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource
{
    AMateria* source[4];
    int         len;
public:
    MateriaSource();
    virtual ~MateriaSource() {}
    virtual void learnMateria(AMateria*);
    virtual AMateria* createMateria(std::string const & type);
};

#endif