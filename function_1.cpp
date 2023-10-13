
#include <iostream>

double maximum ( double x, double y, double z )
{
    double max = y;

    if ( x > max)
        max = x;
    if ( z > max)
        max = z;
    
    return max;
}

int main()
{
    double number1;
    double number2;
    double number3;

    std::cout << "Enter 3 numbers: ";
    std::cin >> number1 >> number2 >> number3;
    std::cout << "Maxium: " << maximum ( number1, number2, number3 ) << std::endl;

    return 0;
}