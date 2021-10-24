#ifndef MATERIA_H
#define MATERIA_H

#include <iostream>
#include <string>

class   ICharacter;
class AMateria
{
protected:
    std::string type;
public:
    AMateria();
    AMateria(std::string const & type);
    AMateria(AMateria &obj);
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
    void    setType(std::string str) {this->type = str;}
    AMateria    &operator=(AMateria &obj);
    virtual ~AMateria() {}
};

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

class Ice : public AMateria
{
public:
    Ice();
    AMateria* clone() const;
    ~Ice();
};

class Cure : public AMateria
{
public:
    Cure();
    AMateria* clone() const;
    ~Cure();
};

#endif