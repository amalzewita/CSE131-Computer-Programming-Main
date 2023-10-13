
#include <iostream>

double factorial(double x)
{
    if (x == 1)
    {
        return 1;
    } // end for loop
    return x * factorial(x - 1);
} // end factorialx function  

int main()
{
    double x;
    std::cout << "Enter x to get it's factorial: ";
    std::cin >> x;
    std::cout << factorial(x) << std::endl;
    return 0;
} // end main function
