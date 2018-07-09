#include <fstream>
#include <string>
#include <iostream>

int main()
{
    std::ifstream file("/home/yming/Dokument/Lasa.txt");
    std::string str;
    while (std:: getline(file, str))
    {
        std::cout << str << std::endl;
    }
}
