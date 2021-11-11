#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialForm", 25, 5)
{
}


PresidentialPardonForm::PresidentialPardonForm(std::string name):
Form("PresidentialForm", 25, 5), target(name)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj):
Form("PresidentialForm", 25, 5)
{
    this->setSign(obj.getSign());
}
PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &obj)
{
    this->setSign(obj.getSign());
    return (*this);
}

void    PresidentialPardonForm::action() const
{
    std::cout<<this->target<<" a été pardonnée par Zafod Beeblebrox.\n";
}

PresidentialPardonForm::~PresidentialPardonForm() throw()
{
}