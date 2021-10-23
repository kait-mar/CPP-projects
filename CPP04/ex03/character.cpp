#include "character.hpp"

Character::Character(std::string str)
: name(str), len(0)
{
    std::cout<<"Icharacter constructor\n";
}

Character::Character(Character &obj)
{
    if (this != &obj)
    {
        int i = 0;
        this->len = obj.getLen();
        this->name = obj.getName();
        delete[] this->slot;
        int len = obj.getLen();
        this->slot = new AMateria*[4];
        while (i < len)
        {
            this->slot[i]->setType(obj.slot[i]->getType());
            i++;
        }
    }
}

Character  &Character::operator=(Character &obj)
{
    if (this != &obj)
    {
        int i = 0;
        this->len = obj.getLen();
        this->name = obj.getName();
        delete[] this->slot;
        int len = obj.getLen();
        this->slot = new AMateria*[4];
        while (i < len)
        {
            this->slot[i]->setType(obj.slot[i]->getType());
            i++;
        }
    }
    return (*this);
}
/********************************/
std::string const &Character::getName()
{
    return (this->name);
}
int Character::getLen()
{
    return (this->len);
}
AMateria    *Character::getMateria()
{
    return (*(this->slot));
}
ICharacter::~Character()
{
    delete[] this->slot;
    std::cout<<"character destructor\n";
}
/*****************************/
void Character::equip(AMateria* m)
{
    std::cout<<"trynna equip a new materia to inventory\n";
    if (this->len == 4)
        return ;
    this->slot[len - 1] = m;
    this->len += 1;
}
void Character::unequip(int idx)
{
    std::cout<<"tryna unequip the materia in slot "<<idx<<std::endl;
    if (this->len == 0 || idx >= this->len || idx < 0)
    {
        std::cout<<"Materia not found in this idx\n";
        return ;
    }
    int i = idx;
    while (i < this->len - 1)
    {
        this->slot[i] = this->slot[i + 1];
        i++;
    }
    this->len -= 1;
}

void Character::use(int idx, ICharacter& target)
{
    std::cout<<"tryna USE materia in slot "<<idx<<std::endl;
    target.use(*this);
}
