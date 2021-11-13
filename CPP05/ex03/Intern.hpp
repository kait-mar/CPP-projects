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
    Form    *makeForm(std::string, std::string);
    ~Intern();
};




#endif