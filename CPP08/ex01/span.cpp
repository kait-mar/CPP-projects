#include "span.hpp"

Span::Span()
{
    //why doesn't the constructor initializer work ??
    len = 0;
}
Span::Span(unsigned int n)
{
    len = 0;
    N = n;
}
Span::Span(Span const &obj)
{
    vec = obj.vec;
    len = obj.len;
    N = obj.N;
}

Span    &Span::operator=(Span const &obj)
{
    if (this == &obj)
        return (*this);
    vec = obj.vec;
    len = obj.len;
    N = obj.N;
    return (*this);
}

void    Span::addNumber(int n)
{
    if (len < N)
    {
        vec.push_back(n);
        len++;
    }
    else
        throw(std::exception());
}
int     Span::shortestSpan()
{
    if (len <= 1)
        throw(std::exception());
    std::sort(vec.begin(), vec.end());
    int min = INT_MAX;
    for(std::vector<int>::iterator ptr = vec.begin() + 1; ptr < vec.end(); ptr++)
        min = std::min(min, *ptr - *(ptr - 1));
    return (min);
}

int     Span::longestSpan()
{
    if (len <= 1)
        throw(std::exception());
    std::sort(vec.begin(), vec.end());
    return (*(vec.end() - 1) - *(vec.begin()));
}
Span::~Span()
{}