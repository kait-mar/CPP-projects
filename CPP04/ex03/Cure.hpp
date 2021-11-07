#ifndef CURE_H
#define CURE_H

#include "Amateria.hpp"

class Cure : public AMateria
{
public:
    Cure();
    AMateria* clone() const;
    ~Cure();
};

#endif