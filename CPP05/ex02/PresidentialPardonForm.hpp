#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "Form.hpp"

class PresidentialPardonForm
{
private:
    const std::string name;
    const int     grade_sign = 25;
    const int      grade_exec = 5;
    bool    sign;
public:
    PresidentialPardonForm(/* args */);
    void    action(Bureaucrat const & executor);
    ~PresidentialPardonForm();
};




#endif