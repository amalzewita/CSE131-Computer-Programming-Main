
#include <iostream>

int main()
{
    int x;
    std::cout << "Enter an integer: ";
    std::cin >> x;
    if ( x % 2 == 0)
    {
        std::cout << x << " is an even integer." << std::endl;
    }
    else 
    {
        std::cout << x << " is an odd integer." << std::endl;
    }
    return 0; 
}