#include "span.hpp"

int main()
{
    try
    {
        Span sp = Span(1000);
        //std::cout << sp.shortestSpan() << std::endl;
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        // for (int i = 0; i < 1000; i++)
        // {
        //     sp.addNumber(i);
        // }
        // std::cout << sp.shortestSpan() << std::endl;
        // std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "raising an exception!\n";
    }
    return (0);
}
