#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(/* args */)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void    action(Bureaucrat const & executor)
{
    std::cout<<executor.getName()<< " a bien été robotomizée dans50\% des cas, ou son echec le reste du temps.\n";
    
}