
#include <iostream>
#include <cmath>

double factorial(double f)
{
    double factorial = 1;
    for (int i = 1; i <= f; i++)
    {
        factorial *= i;
    } //  end for loop
    return factorial;
} // end factorialx function  

double equZ(double x)
{
    int i = 0;
    double Z = 0;

    do
    {
        Z += ( (pow(-1, i) * pow(x, 2 * i + 1) ) / ( factorial(2 * i + 1) ) );
        i++;
    } while (i <= 10000);
    return Z;
} // end equ function 

int main()
{
    double Z, x;
    std::cout << "Enter x: "; 
    std::cin >> x;
    Z = equZ(x);
    std::cout << "Z = " << Z << std::endl;
    return 0;
} // end main functin
