#include "file.hpp"

int print_error_exit(void)
{
    std::cout<<"error\n";
    exit(1);
}

void    create_replace(std::string filename, std::string s1, std::string s2)
{
    std::fstream    file;
    std::fstream    news;
    std::string temp;

    file.open(filename, std::ios::in);
    news.open(filename + ".replace", std::ios::out);
    if (!file || !news)
    {
        std::cout<<"open file error occured!!\n";
        exit (1);
    }
    while (1)
    {
        file >> temp;
        if (file.eof())
            break ;
        if (temp.compare(s1) == 0)
            news << s2;
        else
            news << temp;
        news << " ";
    }
    news.close();
    file.close();
}

int main(int argc, char *argv[])
{
    if (argc != 4)
        print_error_exit();
    std::string filename, s1, s2;
    std::fstream file;
    filename = argv[1];
    s1 = argv[2];
    s2 = argv[3];
    create_replace(filename, s1, s2);
    //the file and file.replace must be the same !!
}
