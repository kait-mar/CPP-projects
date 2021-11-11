#ifndef INTERN_H
#define INTERN_H

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
public:
    Intern();
    Intern(Intern const &);
    Intern  &operator=(Intern const &);
    Form    *MakeForm(std::string, std::string);
    ~Intern();
};

Intern::Intern()
{
}

Form    *Intern::MakeForm(std::string s1, std::string s2)
{
    std::string array[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    void    (Intern::*inter[3](std::string) = {RobotomyRequestForm::Robo}
    for(int i = 0; i < 3; i++)
    {
        if (s1 == array[i])
            return (new)
    }
}
Intern::~Intern()
{
}


#endif