
#include <iostream>

double factorial(double f)
{
    double factorial = 1;
    for (int i = 1; i <= f; i++)
    {
        factorial *= i;
    } //  end for loop
    return factorial;
} // end factorialx function  
/*
double calc(double x, double R)
{
    double calc1 = factorial(x);
    double calc2 = factorial(R);
    double calc3 = factorial(x - R);
    double result = calc1 / (calc2 * calc3);
    return result;
}
*/
void equation(double x, double R)
{
    std::cout << "C = " << factorial(x) / (factorial(R) * factorial(x- R)) << std::endl;
} // end c1 function  

int main()
{
    double x, R;
    std::cout << "Enter x then R: ";
    std::cin >> x >> R;
    equation(x, R);
    return 0;
} // end main function
