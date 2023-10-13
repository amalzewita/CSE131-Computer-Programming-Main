
#include <iostream>

int greatestCommonDivisor (int x, int y)
{
    int z = x % y;
    if (z == 0)
    {
        return y;
    } // end if loop
    return greatestCommonDivisor (y, z);
} // end of greatestCommonDivisor function

int main ()
{
    int x, y, z;
    std::cout << "Enter 2 numbers to get their greatest common divisor: ";
    std::cin >> x >> y;
    std::cout << "You greatest common divisor = " << greatestCommonDivisor (x, y) << std::endl;
    return 0;
} // end main function 