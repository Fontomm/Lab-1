#include <iostream>
#include <iomanip>
int main ()
{
    char f = ' ';
    char c = '1';
    std::cout << std::setfill(c) << std::setw(4) << "";
    std::cout << std::endl;

    std::cout << std::setfill(f) << std::setw(2) << "";
    std::cout << std::setfill(c) << std::setw(2) << "";
    std::cout << std::endl;

    std::cout << std::setfill(f) << std::setw(2) << "";
    std::cout << std::setfill(c) << std::setw(2) << "";
    std::cout << std::endl;

    std::cout << std::setfill(f) << std::setw(2) << "";
    std::cout << std::setfill(c) << std::setw(2) << "";
    std::cout << std::endl;

    std::cout << std::setfill(c) << std::setw(6) << "";
   std::cout << std::endl;

}
