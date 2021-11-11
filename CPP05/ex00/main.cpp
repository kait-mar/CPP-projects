#include "Bureaucrat.hpp"

int    main()
{
    try
    {
        Bureaucrat  a("kait", 150);
        std::cout<<a;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what();
    }
    return (0);
}
