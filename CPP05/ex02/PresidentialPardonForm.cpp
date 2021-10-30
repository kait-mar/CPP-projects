#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(/* args */)
{
    
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void    action(Bureaucrat const & executor)
{
    std::cout<<executor.getName()<<" a été pardonnée par Zafod Beeblebrox.\n";
}