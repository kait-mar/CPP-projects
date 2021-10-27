#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "form.h"

class PresidentialPardonForm
{
private:
    const std::string name;
    const int     grade_sign = 25;
    const int      grade_exec = 5;
    bool    sign;
public:
    PresidentialPardonForm(/* args */);
    ~PresidentialPardonForm();
};




#endif