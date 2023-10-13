
#include <iostream>
#include <iomanip>

int main()
{
    std::cout << std::setw(7) << std::left << 1990 << 135   << std::endl;
    std::cout << std::setw(7) << std::left << 1991 << 7290  << std::endl;
    std::cout << std::setw(7) << std::left << 1992 << 11300 << std::endl;
    std::cout << std::setw(7) << std::left << 1993 << 16200 << std::endl;
    return 0;
}