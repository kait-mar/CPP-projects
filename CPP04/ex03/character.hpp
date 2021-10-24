#ifndef CHARACTER_H
#define CHARACTER_H

#include "materia.hpp"

class ICharacter
{
public:
    virtual ~ICharacter() {}
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};

class Character : public ICharacter
{
    std::string name;
    AMateria* slot[4];
    int         len;
public:
    Character();
    Character(std::string str);
    Character(Character &obj);
    Character  &operator=(Character &obj);
    virtual ~Character();
    virtual std::string const & getName() const;
    int getLen();
    AMateria    *getMateria(int idx);
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
};


#endif