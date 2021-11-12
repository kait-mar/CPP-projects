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

Form    *createRobot(std::string target)
{
    return (new RobotomyRequestForm(target));
}

Form    *createPresidential(std::string tyarget)
{
    return (new PresidentialPardonForm(target));
}

Form    *createShrubbery(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

Form    *Intern::MakeForm(std::string s1, std::string target)
{
    Form    *res;

    std::string array[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    Form*    (*inter[3])(std::string) = {&createRobot, &createPresidential, &createShrubbery};
    for(int i = 0; i < 3; i++)
    {
        if (s1 == array[i])
        {
            res = inter[i](target);
            std::cout<<"message de succes\n"; //res->getName()..etc
            return (res);
        }
    }
    std::cout<<"message d'echec\n";
    return (NULL);
}
Intern::~Intern()
{
}


#endif