#include "Form.hpp"

Form::Form(std::string str, int note1, int note2) :
name(str), grade_sign(note1), grade_exec(note2), sign(0)
{
    if (note1 > 150 || note2 > 150)
        throw(Form::GradeTooLowException());
    else if (note1 < 1 || note2 < 1)
        throw(Form::GradeTooHighException());
}

Form::Form():
grade_sign(1),  grade_exec(1), sign(0)
{}
Form::Form(Form const &obj):
name(obj.name), grade_sign(obj.grade_sign), grade_exec(obj.grade_exec), sign(obj.sign)
{
}

Form    &Form::operator=(Form const &obj)
{
    this->sign = obj.sign;
    return (*this);
}

void        Form::setSign(bool p)
{
    this->sign = p;
}

std::string Form::getName() const
{
    return (this->name);
}
int Form::getGrade_sign() const
{
    return(this->grade_sign);
}

int Form::getGrade_exec() const 
{
    return(this->grade_exec);
}

std::ostream  &operator<<(std::ostream &os, Form &obj)
{
    os<<obj.getName()<<", Form grade "<<obj.getGrade_sign()<<", "<<obj.getGrade_exec()<<".\n";
    return (os);
}

void    Form::beSigned(Bureaucrat obj)
{
    if (obj.getGrade() <= this->grade_sign)
    {
        this->sign = 1;
    }
    else
        throw(Form::GradeTooLowException());
}

bool    Form::getSign() const
{
    return (this->sign);
}

int        Form::execute (Bureaucrat const & executor)const
{
    if (executor.getGrade() <= this->grade_exec && this->sign)
    {
        this->action();
        return (1);
    }
    else
        throw(Form::GradeTooLowException());
    return (0);
}
