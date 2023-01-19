#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
 
int main()
{
    std::string line;
    std::ifstream in("D:\\file_1.txt"); // окрываем файл для чтения
    if (in.is_open())
    {
        while (getline(in, line))
        {
            std::cout << line << std::endl;
        }
    }
    //in.close();     // закрываем файл

    std::ofstream out("D:\\file_1.txt", std::ios::app); // запись в конец файла
    if (out.is_open())
    {
        out << "\nLast edit time: " << std::endl;
        std::time_t t = std::time(0);   // get time now
        std::tm* now = std::localtime(&t);
        out << (now->tm_year + 1900) << '-' << (now->tm_mon + 1) << '-' <<  now->tm_mday << '-' << now->tm_hour << ':' << now->tm_min << std::endl;;
    }
    out.close();   
    
    std::cout << "\nThe end work program" << std::endl;
    return 0;
}