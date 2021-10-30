#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
private:
    const std::string name;
    const int     grade_sign = 145;
    const int      grade_exec = 137;
    bool    sign;
    Bureaucrat  cible;
public:
    ShrubberyCreationForm(Bureaucrat const & executor);
    void    action(Bureaucrat const & executor);
    ~ShrubberyCreationForm();
};

class RobotomyRequestForm
{
private:
    const std::string name;
    const int     grade_sign = 72;
    const int      grade_exec = 45;
    bool    sign;
public:
    RobotomyRequestForm(Bureaucrat obj);
    void        beSigned(Bureaucrat obj);
    ~RobotomyRequestForm();
};

RobotomyRequestForm::RobotomyRequestForm(Bureaucrat obj)
{
    
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}


#endif