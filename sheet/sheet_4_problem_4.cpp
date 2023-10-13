#include <iostream>

int reversedNum(long n)
{
    int count = 0;

    if (n < 0)
    {
        std::cout << '-';
        n *= -1;
    } // end if loop
    do
    {
        std::cout << (n % 10); 
        n /= 10;
        count++;
    } // end do while loop
    while (n != 0); 
    std::cout << std::endl << "Number of digits = ";
    return count;
} // end reversedNum function

int main()
{
    long n, reversedNumber;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    std::cout << "Reversed Number = " << reversedNum(n) << std::endl;
    return 0;
} // end main function