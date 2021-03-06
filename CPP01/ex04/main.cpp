#include "file.hpp"

int print_error_exit(void)
{
    std::cout<<"Error argument\n";
    exit(1);
}

void    create_replace(std::string filename, std::string s1, std::string s2)
{
    std::ifstream    file;
    std::ofstream    news;
    std::string line;
    std::string temp;
    int rec;

    file.open(filename, std::ios::in);
    if (!file || !news)
    {
        std::cout<<"open file error occured!!\n";
        exit (1);
    }
    news.open(filename + ".replace", std::ios::out);
    temp = "";
    while (std::getline(file, line))
    {
        while (1)
        {
            if ((rec = line.find(s1)) != -1)
            {
                temp.append(line.substr(0, rec));
                temp.append(s2);
                line = line.substr(rec + s1.length());
            }
            else
            {
                temp.append(line);
                break ;
            }
         }
         news << temp << std::endl;
         temp.clear();
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
