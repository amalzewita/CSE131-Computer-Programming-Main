
#include <iostream>

double power (double x, double y)
{
    if (y == 0)
    {
        return 1;
    } // end if loop
    return x * power (x, y - 1);
} // end power function

int main()
{
    double x, y;
    std::cout << "Enter a number and it exponent, respectively: ";
    std::cin >> x >> y;
    std::cout << x << " to the power of " << y << " = " << power(x, y) << std::endl;
    return 0;
} // end main function