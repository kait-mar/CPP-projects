#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
private:
    std::string const name;
    int grade;
    struct  GradeTooHighException : public std::exception
    {
        const char *what() const throw(){
            return ("an exception of a too high grade has been raised\n");
        }
    };
    struct GradeTooLowException : public std::exception
    {
        const char  *what() const throw(){
            return ("an exception of a too low grade has been raised\n");
        }
    };
public:
    Bureaucrat();
    Bureaucrat(std::string str, int note);
    std::string getName();
    int         getGrade();
    void    dec();
    void    inc();
    ~Bureaucrat();
};
std::ostream  &operator<<(std::ostream &os, Bureaucrat &obj);  

#endif