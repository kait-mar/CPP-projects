#include "Form.hpp"

int    main()
{
    try{
        Bureaucrat  a("kait", 30);
        std::cout<<a;
        Form    form("mary", 50, 100);
        std::cout<<form;
        form.beSigned(a);
        a.signForm(form);
        //when the form is not sign, the msg of signform will never appeare !!! 
        //is it okay if I place it outside the try ?
        //no it is not okay!!!!
    }
    catch(Bureaucrat::GradeTooHighException &s)
    {
        std::cout<<s.what();
    }
    catch(Bureaucrat::GradeTooLowException &s)
    {
        std::cout<<s.what();
    }
    catch(Form::GradeTooHighException &m)
    {
        std::cout<<m.what();
    }
    catch(Form::GradeTooLowException &s)
    {
        std::cout<<s.what();
    }
    return (0);
}
