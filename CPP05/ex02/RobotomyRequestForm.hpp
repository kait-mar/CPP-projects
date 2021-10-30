#ifndef ROBOTTOMYREQUESTFORM_H
#define ROBOTTOMYREQUESTFORM_H

#include "form.hpp"

class RobotomyRequestForm: public Form
{
private:
    const std::string name;
    const int     grade_sign = 72;
    const int      grade_exec = 45;
    bool    sign;
public:
    RobotomyRequestForm(/* args */);
    ~RobotomyRequestForm();
    void    action(Bureaucrat const & executor);
};


#endif