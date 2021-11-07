#ifndef AMATERIA_H
#define AMATERIA_H

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
    AMateria    &operator=(AMateria &) {return (*this);}
    virtual ~AMateria() {}
};


#endif