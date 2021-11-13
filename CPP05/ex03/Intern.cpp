#include "Intern.hpp"

Intern::Intern()
{
}

Form    *createRobot(std::string target)
{
    return (new RobotomyRequestForm(target));
}

Form    *createPresidential(std::string target)
{
    return (new PresidentialPardonForm(target));
}

Form    *createShrubbery(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

Form    *Intern::makeForm(std::string s1, std::string target)
{
    Form    *res;

    std::string array[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    Form*    (*inter[3])(std::string) = {&createRobot, &createPresidential, &createShrubbery};
    for(int i = 0; i < 3; i++)
    {
        if (s1 == array[i])
        {
            res = inter[i](target);
            std::cout<<"Intern creates "<<res->getName(); //res->getName()..etc
            return (res);
        }
    }
    std::cout<<"Intern couldn't create the undefined Form\n";
    return (NULL);
}

Intern::~Intern()
{
}