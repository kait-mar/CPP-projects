#include "Fixed.hpp"

int main(void) {
    Fixed a;
    Fixed b(Fixed(5.05f) * Fixed(2));
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout <<"max = "<< Fixed::max(a, b) << std::endl;
    Fixed   k(Fixed(5.05f) + Fixed(2));
    std::cout<< k << std::endl;
    Fixed   l(Fixed(5.05f) - Fixed(2));
    std::cout<< l << std::endl;
    Fixed   j(Fixed(5.05f) / Fixed(2));
    std::cout<< j << std::endl;
    std::cout<<"min = "<< Fixed::min(k , l)<< std::endl;
    return 0;
}
