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
    class  GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw(){
            return ("an exception of a too high grade has been raised\n");
        }
    };
    class GradeTooLowException : public std::exception
    {
    public:
        const char  *what() const throw(){
            return ("an exception of a too low grade has been raised\n");
        }
    };
public:
    Bureaucrat();
    Bureaucrat(std::string str, int note);
    Bureaucrat(Bureaucrat const &);
    Bureaucrat   &operator=(Bureaucrat const &);
    std::string getName();
    int         getGrade();
    void    dec();
    void    inc();
    ~Bureaucrat();
};
std::ostream  &operator<<(std::ostream &os, Bureaucrat &obj);  

#endif