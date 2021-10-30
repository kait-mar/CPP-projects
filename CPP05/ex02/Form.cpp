#include "Form.hpp"

Form::Form(std::string str, int note1, int note2) :
name(str), grade_sign(note1), grade_exec(note2), sign(0)
{
        if (note1 > 150 || note2 > 150)
            throw(Form::GradeTooLowException());
        else if (note1 < 1 || note2 < 1)
            throw(Form::GradeTooHighException());
    // catch(Form::GradeTooHighException &s)
    // {
    //     std::cout<<s.what();
    // }
    // catch(Form::GradeTooLowException &b)
    // {
    //     std::cout<<b.what();
    // }
}

// Form::~Form()
// {
// }

std::string Form::getName() const
{
    return (this->name);
}
int Form::getGrade_sign()
{
    return(this->grade_sign);
}

int Form::getGrade_exec()
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
    if (obj.getGrade() < this->grade_sign)
    {
        this->sign = 1;
    }
    else
        throw(Form::GradeTooLowException());
    // catch(const Form::GradeTooLowException& e)
    // {
    //     std::cout << e.what() << '\n';
    // }
}

bool    Form::getSign()
{
    return (this->sign);
}

int        Form::execute (Bureaucrat const & executor)const
{
    if (executor.getGrade() <= this->grade_exec && this->sign)
    {
        //action(executor.getName());
        this->action(executor);
        return (1);
    }
    else
        throw(Form::GradeTooLowException());
    return (0);
}

// void    action(std::string str)
// {
//     std::fstream    fd;

//     fd.open(str + "_shrubbery", std::ios::out);
//     fd<<"hello\n";
// }