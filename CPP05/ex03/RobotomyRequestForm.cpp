#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotForm", 72, 45)
{
}


RobotomyRequestForm::RobotomyRequestForm(std::string str):
Form("RobotForm", 72, 45), target(str)
{
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj):
Form("RobotForm", 72, 45)
{
    this->setSign(obj.getSign());
    this->target = obj.target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &obj)
{
    this->setSign(obj.getSign());
    this->target = obj.target;
    return (*this);
}
void    change(bool p)
{
    if (p == 0)
        p = 1;
    else
        p = 0;
}

void    RobotomyRequestForm::action() const
{
    srand(time(NULL));
    if (rand() % 2)
    {
        std::cout<<this->target<< " a bien été robotomizée.\n";
    }
    else
    {
        std::cout<<this->target<< " a echoue de robotomizer.\n";
    }
}

RobotomyRequestForm::~RobotomyRequestForm() throw()
{

}
