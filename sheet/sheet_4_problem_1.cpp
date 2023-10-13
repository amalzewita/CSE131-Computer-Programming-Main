
#include <iostream>

int prime(int x)
{
    if (x == 1) 
        return 0;
    if (x == 2) 
        return 1;
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0) 
            return 0;
    } // end if
    return 1;
} // end prime 

int main() 
{
    int x;
    std::cout << "This program checks if the number is prime or not." << std::endl;
    std::cout << "If the number is prime '1' will appear and if not a '0' will appear." << std::endl;
    std::cout << "Enter an integer: ";
    std::cin >> x;
    std::cout << prime(x) << std::endl;
} // end main