
#include <iostream>
#include <cmath>
#include <cstring>

double factorial(double n)
{
    if (n == 1)
    {
        return 1;
    } // end for loop
    return n * factorial(n - 1);
} // end factorialx function  

double power (double x, double n)
{
    if (n == 0)
    {
        return 1;
    } // end if loop
    return x * power (x, n - 1);
} // end power function

double sum (int n, int x)
{
    if (n == 0)
        return 0;
    else 
    {
        return (power (x, n) / (factorial(n))) + sum (n - 1, x);
    }
} // end sum function

int main ()
{
    double x;
    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "Sum = " << sum(10, x) << std::endl;
    return 0;
} // end main function