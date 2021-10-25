#include "character.hpp"

Character::Character()
: len(0)
{
    //std::cout<<"default Character constructor\n";
    int i = 0;
    while (i < 4)
        this->slot[i++] = NULL;
}

Character::Character(std::string str)
: name(str), len(0)
{
    //std::cout<<"Character constructor\n";
    int i = 0;
    while (i < 4)
        this->slot[i++] = NULL;
}

Character::Character(Character &obj)
{
    int i = 0;
    this->len = obj.getLen();
    this->name = obj.getName();
    while (i < this->len)
    {
        this->slot[i] = obj.getMateria(i)->clone();
        i++;
    }
}

Character  &Character::operator=(Character &obj)
{
    if (this != &obj)
    {
        int i = 0;
        this->len = obj.getLen();
        this->name = obj.getName();
        while (i < this->len)
        {
            if (this->getMateria(i) != NULL)
                delete(this->getMateria(i));
        }
        while (i < this->len)
        {
            this->slot[i] = obj.getMateria(i)->clone();
            i++;
        }
    }
    return (*this);
}
/********************************/
std::string const &Character::getName() const
{
    return (this->name);
}
int Character::getLen()
{
    return (this->len);
}
AMateria    *Character::getMateria(int idx)
{
    return (this->slot[idx]);
}
Character::~Character()
{
    int i = 0;
    while (i < this->len)
    {
        if (this->slot[i] != NULL)
            delete(this->slot[i]);
        i++;
    }
    //std::cout<<"character destructor\n";
}
/*****************************/
void Character::equip(AMateria* m)
{
    //std::cout<<"trynna equip a new materia to inventory\n";
    if (this->len == 4)
        return ;
    this->slot[len] = m;
    this->len += 1;
}
void Character::unequip(int idx)
{
    //std::cout<<"tryna unequip the materia in slot "<<idx<<std::endl;
    if (this->len == 0 || idx >= this->len || idx < 0)
    {
        //std::cout<<"Materia not found in this idx\n";
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
    //std::cout<<"tryna USE materia in slot "<<idx<<std::endl;
    this->slot[idx]->use(target);
}
