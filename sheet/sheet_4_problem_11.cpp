
#include <iostream>
#include <cmath>

double equS(double x)
{
    int t = 0;
    double S = 0;

    // for loop to calculate the S value
    for(int t = 0; t <= 100; t++)
    {
        S += exp(-x * t);
    } // end for loop

    return S; // returns to the main function the value of S

} // end equS function 

int main()
{
    double x;

    std::cout << "Enter x: "; 
    std::cin >> x; // take x value 
    std::cout << "S = " << equS(x) << std::endl; // prints the S value

    return 0; // indicates that the program ended seccessfully 

} // end main functin