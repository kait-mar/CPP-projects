#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"


int    main()
{
    try{
        //test Shruberry *********
        // Bureaucrat  a("kait", 30);
        // std::cout<<a;
        // ShrubberyCreationForm sh("kait"); // (145, 137)
        // std::cout<<sh;
        // sh.beSigned(a);
        // a.signForm(sh);
        // sh.execute(a);
        // a.executeForm(sh);

        //test Presidential
        // Bureaucrat  a("kait", 15);
        // std::cout<<a;
        // PresidentialPardonForm pr("mar"); // (25, 5)
        // std::cout<<pr;
        // pr.beSigned(a);
        // a.signForm(pr);
        // a.executeForm(pr);

        //test Robot
        Bureaucrat  a("kait", 15);
        std::cout<<a;
        RobotomyRequestForm rb("mar"); // (72, 45)
        std::cout<<rb;
        rb.beSigned(a);
        a.signForm(rb);
        a.executeForm(rb);
    }
    catch(std::exception &s)
    {
        std::cout<<"***************\n";
        std::cout<<s.what();
    }
    return (0);
}
