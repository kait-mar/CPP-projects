#ifndef FORM_H
#define FORM_H

#include "Bureaucrat.hpp"
#include <fstream>

class Form: public std::exception
{
private:
    const std::string name;
    const int     grade_sign;
    const int      grade_exec;
    bool    sign;

public:
        class  GradeTooHighException : public std::exception
        {
            const char *what() const throw(){
                return ("an exception of a too high FORM grade has been raised\n");
            }
        };
        class GradeTooLowException : public std::exception
        {
            const char  *what() const throw(){
                return ("an exception of a too low FORM grade has been raised\n");
            }
        };
    Form();
    Form(std::string str, int note1, int note2);
    Form(Form const &);
    Form    &operator=(Form const &);
    std::string getName() const;
    int         getGrade_sign() const;
    int         getGrade_exec() const;
    bool        getSign() const;
    void        beSigned(Bureaucrat obj);
    void        setSign(bool p);
    int        execute (Bureaucrat const & executor)const;
    virtual void    action()const  = 0;
    virtual ~Form() throw() {}
};

std::ostream  &operator<<(std::ostream &os, Form &obj); 

#endif
