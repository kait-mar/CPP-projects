#include "Form.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string str, int note): name(str), grade(note)
{
    // try
    // {
        if (note > 150)
            throw(Bureaucrat::GradeTooHighException());
        else if (note < 1)
            throw(Bureaucrat::GradeTooLowException());
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

void    Bureaucrat::signForm(Form form)
{
    // try
    // {
        if (form.getSign() == 1)
            std::cout<<this->name<<" signs "<<form.getName()<<std::endl;
        else
            std::cout<<this->name<<" cannot sign because the grade is not that much good";
   // }
    /*catch(Form::GradeTooLowException& e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(Form::GradeTooHighException& s)
    {
        std::cout<<s.what();
    }*/
}