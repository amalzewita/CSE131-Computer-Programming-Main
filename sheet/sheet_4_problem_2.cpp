
#include <iostream>

double factorial(int x)
{
    double factorial = 1;
    for (int i = 1; i <= x; i++)
    {
        factorial *= i;
    } //  end for loop
    return factorial;
} // end fact1 function 

int main()
{
    int x;
    std::cout << "Enter an integer to get the factorial: ";
    std::cin >> x;
    std::cout << x << "!" << " = " << factorial(x) << std::endl;
} // end main
