#include "Form.hpp"

int    main()
{
    try{
        Bureaucrat  a("kait", 80);
        std::cout<<a;
        Form    form("mary", 50, 100);
        std::cout<<form;
        form.beSigned(a);
    }
    catch(){
        
    }
    return (0);
}
