#ifndef FILE_H
# define FILE_H
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

int print_error_exit(void);
void    read_write(std::fstream file, std::fstream news, std::string s1, std::string s2);
void    create_replace(std::string filename, std::string s1, std::string s2);

#endif