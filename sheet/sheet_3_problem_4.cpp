
#include <iostream>
#include <limits>

int main()
{
    float x = (22 / 7.0) / 6; // the given x
    float sinx = x;
    float sumBefore = x;
    float sumAfter;
    int sign = -1;

    // for loop to answer the given equation
    for (int i = 3; i <= 10000; i += 2)
    {
        sumAfter = sumBefore * x * x / (i * (i - 1 ));
        sinx += sign * sumAfter;
        sumBefore = sumAfter;
        sign = sign * sign;
        
    } // end for loop 

    std::cout << "sin(x) = " << sinx << std::endl; // prints the answer

    return 0; // indicates that the program ended seccessfully 

} // end main function










/*
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

int main()
{

    double x = (22 / 7.0) / 6;
    int i = 0;
    double sinx = 0;

    do
    {
        sinx += ( (pow(-1, i) * pow(x, 2 * i + 1) ) / ( factorial(2 * i + 1) ) );
        i++;
    } while (i <= 10000);
    std::cout << "sin(x) = " << sinx << std::endl;
    return 0;
} // end main functin 
*/
