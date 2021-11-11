#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyForm", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string str):
Form("ShrubberyForm", 145, 137), target(str)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & executor):
Form("ShrubberyForm", 145, 137)
{
    this->setSign(executor.getSign());
    this->target = executor.target;
}

ShrubberyCreationForm   &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj)
{
    this->setSign(obj.getSign());
    this->target = obj.target;
    return (*this); 
}

ShrubberyCreationForm::~ShrubberyCreationForm() throw()
{
}

void   ShrubberyCreationForm::action() const
{
    std::fstream    fd;

    fd.open(this->target + "_shrubbery", std::ios::out);
    fd<<"      /\\      \n     /\\*\\     \n    /\\O\\*\\    \n   /*/\\/\\/\\   \n  /\\O\\/\\*\\/\\  \n /\\*\\/\\*\\/\\/\\ \n/\\O\\/\\/*/\\/O/\\\n      ||      \n      ||      \n      || ";

}
