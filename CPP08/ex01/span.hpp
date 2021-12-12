#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <exception>
#include <list>
#include <vector>
#include <algorithm>
#include <limits.h>

class   Span
{
private:
    std::vector<int>    vec;
    unsigned int        len;
    unsigned int        N;
public:
    Span();
    Span(unsigned int n);
    Span(Span const &);
    Span    &operator=(Span const &);
    void    addNumber(int);
    int     shortestSpan();
    int     longestSpan();
    ~Span();
};

#endif