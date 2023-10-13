
#include <iostream>
#include <math.h>
#include <cmath> 

int main()
{
    double a, b, c, x, d, ans;

    std::cout << "Enter the value of b: ";
    std::cin >> b;
    std::cout << "Enter the value of c: ";
    std::cin >> c;
    std::cout << "Enter the value of x: ";
    std::cin >> x;
    std::cout << "Enter the value of d: ";
    std::cin >> d;

    a = (x * d * 3.14159) / 180.0;
    ans = sqrt( b + c - ( 2 * b * c * cos(a) ) );

    std::cout << "ans = " << ans << std::endl; 
    return 0;
}