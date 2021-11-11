#include "Form.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string str, int note): name(str)
{
    if (note > 150)
        throw(Bureaucrat::GradeTooLowException());
    else if (note < 1)
        throw(Bureaucrat::GradeTooHighException());
    else
        this->grade = note;
}

Bureaucrat::Bureaucrat(Bureaucrat const & obj):
name(obj.name), grade(obj.grade)
{

}

Bureaucrat  &Bureaucrat::operator=(Bureaucrat const &obj)
{
    this->grade = obj.grade;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

void    Bureaucrat::dec()
{
    if (this->grade < 150)
        this->grade += 1;
    else
        throw(Bureaucrat::GradeTooLowException());
}

void    Bureaucrat::inc()
{
    if (this->grade > 1)
        this->grade -= 1;
    else
        throw(Bureaucrat::GradeTooHighException());
}

std::string Bureaucrat::getName()
{
    return (this->name);
}
int Bureaucrat::getGrade()
{
    return(this->grade);
}

std::ostream  &operator<<(std::ostream &os, Bureaucrat &obj)
{
    os<<obj.getName()<<", bureaucrat grade "<<obj.getGrade()<<".\n";
    return (os);
}

void    Bureaucrat::signForm(Form form)
{
    if (form.getSign() == 1)
        std::cout<<this->name<<" signs "<<form.getName()<<std::endl;
    else
        std::cout<<this->name<<" cannot sign because the grade is not that much good";
}
