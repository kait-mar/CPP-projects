#ifndef ICE_H
#define ICE_H

#include "Amateria.hpp"

class Ice : public AMateria
{
public:
    Ice();
    AMateria* clone() const;
    ~Ice();
};

#endif