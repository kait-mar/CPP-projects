#include "Fixed.hpp"

int main(void) {
    Fixed a(4);
    a.toInt();
    /*Fixed b(a);
    Fixed c;
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;*/
    return 0;
}
