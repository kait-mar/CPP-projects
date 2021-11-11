#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
private:
    std::string     target;
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(ShrubberyCreationForm const &);
    ShrubberyCreationForm(std::string);
    ShrubberyCreationForm   &operator=(ShrubberyCreationForm const &);
    void    action() const;
    ~ShrubberyCreationForm() throw();
};

#endif