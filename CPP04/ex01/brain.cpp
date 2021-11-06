#include "brain.hpp"

Brain::Brain()
{
    std::cout<<"brain constructor called\n";
}

Brain::~Brain()
{
    std::cout<<"brain destructor called\n";
}

void    Brain::set(std::string str, int i)
{
    this->ideas[i] = str;
}

std::string Brain::get(int i)
{
    return (this->ideas[i]);
}
