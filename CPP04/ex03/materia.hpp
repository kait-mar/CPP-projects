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
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
    void    setType(std::string str) {this->type = str;}
    virtual ~AMateria() {}
};

class ICharacter
{
    std::string name;
public:
    ICharacter(std::string str);
    ICharacter(ICharacter &obj);
    ICharacter  &operator=(ICharacter &obj);
    virtual ~ICharacter() {}
    virtual std::string const & getName() const = 0;
    std::string getName();
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;

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