
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
} // end factorial function  

double equation(double x,  int n)
{
    int i = 1;
    double sum = 0;
    do
    {
        sum += ( exp(x + n) / factorial(i) );
        i++;
    } while (i <= n);
    return sum;
} // end equ function 

int main()
{
    double sum, x;
    int n;
    std::cout << "Enter x then n: "; 
    std::cin >> x >> n;
    sum = equation(x, n);
    std::cout << "sum = " << sum << std::endl;
    return 0;
} // end main functin