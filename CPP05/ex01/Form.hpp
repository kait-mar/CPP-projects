#ifndef FORM_H
#define FORM_H

#include "Bureaucrat.hpp"

class Form: public std::exception
{
private:
    const std::string name;
    const int     grade_sign;
    const int      grade_exec;
    bool    sign;

public:
        struct  GradeTooHighException : public std::exception
    {
        const char *what() const throw(){
            return ("an exception of a too high FORM grade has been raised\n");
        }
    };
    struct GradeTooLowException : public std::exception
    {
        const char  *what() const throw(){
            return ("an exception of a too low FORM grade has been raised\n");
        }
    };
    Form(std::string str, int note1, int note2);
    std::string getName();
    int         getGrade_sign();
    int         getGrade_exec();
    bool        getSign();
    void        beSigned(Bureaucrat obj);
    virtual ~Form() throw() {}
};

std::ostream  &operator<<(std::ostream &os, Form &obj); 

#endif