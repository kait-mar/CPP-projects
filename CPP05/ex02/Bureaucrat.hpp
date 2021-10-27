#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <string>
#include <exception>

class   Form;

class Bureaucrat
{
private:
    std::string const name;
    int grade;

public:
    struct  GradeTooHighException : public std::exception
    {
        const char *what() const throw(){
            return ("an exception of a too high Bureaucrat grade has been raised\n");
        }
    };
    struct GradeTooLowException : public std::exception
    {
        const char  *what() const throw(){
            return ("an exception of a too low Bureaucrat grade has been raised\n");
        }
    };

    Bureaucrat();
    Bureaucrat(std::string str, int note);
    std::string getName() const;
    int         getGrade() const;
    void    dec();
    void    inc();
    void    signForm(Form &form);
    void    executeForm (Form const &form);
    ~Bureaucrat();
};

std::ostream  &operator<<(std::ostream &os, Bureaucrat &obj);  

#endif