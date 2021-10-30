#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(Bureaucrat const & executor)
{
    this->cible = executor;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void    action(Bureaucrat const & executor)
{
    std::fstream    fd;

    fd.open(executor.getName() + "_shrubbery", std::ios::out);
    fd<<"hello\n";
}