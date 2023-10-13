
#include<iostream>

int main()
{
    double factorial = 1;
    int n;

    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    for (int num = 1; num < 50; num++)
    {
        for (int i = 1; i <= n; i++)
        {
            factorial *= i;
        } // end nested for 
            std::cout << "Factorial of double " << num << " = " 
            << factorial << std::endl;
    } // end main for
    
    return 0;
} // end main
