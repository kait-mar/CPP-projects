#ifndef ROBOTTOMYREQUESTFORM_H
#define ROBOTTOMYREQUESTFORM_H

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
private:
    std::string     target;
    
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string);
    RobotomyRequestForm(RobotomyRequestForm const &);
    RobotomyRequestForm &operator=(RobotomyRequestForm const &);
    ~RobotomyRequestForm() throw();
    void    action() const;
};

#endif