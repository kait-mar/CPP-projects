#ifndef CONVERT_H
#define CONVERT_H

#include <iostream>
#include <string>
#include <stdlib.h>
#include <inttypes.h>
#include <exception>
#include <math.h>
#include <limits.h>

int     find(std::string str);
void    add_f(float x);
void    char_conv(char *str);
void    int_conv(char *str);
void    float_conv(char *str);
void    double_conv(char *str);
void    add_d(double x);
int    print_error();

#endif