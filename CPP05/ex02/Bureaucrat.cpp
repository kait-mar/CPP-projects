#include "Form.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string str, int note): name(str), grade(note)
{
    // try
    // {
        if (note > 150)
            throw(Bureaucrat::GradeTooLowException());
        else if (note < 1)
            throw(Bureaucrat::GradeTooHighException());
    // }
    // catch(Bureaucrat::GradeTooHighException &s)
    // {
    //     std::cout<<s.what();
    //     //std::exit(1);
    // }
    // catch(Bureaucrat::GradeTooLowException &b)
    // {
    //     std::cout<<b.what();
    //     //std::exit(1);
    // }
}

Bureaucrat::~Bureaucrat()
{
}

void    Bureaucrat::dec()
{
    if (this->grade + 1 > 150)
        throw(Bureaucrat::GradeTooLowException());
    else
        this->grade += 1;
}
void    Bureaucrat::inc()
{
    if (this->grade - 1 < 1)
        throw(Bureaucrat::GradeTooHighException());
    else
        this->grade -= 1;
}

std::string Bureaucrat::getName() const
{
    return (this->name);
}
int Bureaucrat::getGrade() const
{
    return(this->grade);
}

std::ostream  &operator<<(std::ostream &os, Bureaucrat &obj)
{
    os<<obj.getName()<<", bureaucrat grade "<<obj.getGrade()<<".\n";
    return (os);
}

void    Bureaucrat::signForm(Form &form)
{
    if (form.getSign() == 1)
        std::cout<<this->name<<" signs "<<form.getName()<<std::endl;
    else
        std::cout<<this->name<<" cannot sign because the grade is not that much good";
}

void    Bureaucrat::executeForm (Form const &form)
{
    if (form.execute(*this) == 1)
        std::cout<<this->name<<" executs "<<form.getName();
    else
        std::cout<<std::cout<<this->name<<" couldn't execut "<<form.getName();
}
