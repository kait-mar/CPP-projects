#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string str, int note): name(str)
{
    try
    {
        if (note > 150)
            throw(Bureaucrat::GradeTooHighException());
        else if (note < 1)
            throw(Bureaucrat::GradeTooLowException());
        else
            this->grade = note;
    }
    catch(Bureaucrat::GradeTooHighException &s)
    {
        std::cout<<s.what();
        std::exit(1);
    }
    catch(Bureaucrat::GradeTooLowException &b)
    {
        std::cout<<b.what();
        std::exit(1);
    }
}

Bureaucrat::~Bureaucrat()
{
}

void    Bureaucrat::dec()
{
    this->grade += 1;
}
void    Bureaucrat::inc()
{
    this->grade -= 1;
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
