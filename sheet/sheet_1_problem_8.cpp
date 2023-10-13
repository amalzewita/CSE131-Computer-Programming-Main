
#include <iostream>

int main()
{
    double x, ans;
    std::cout << "Enter distance in feet: ";
    std::cin >> x;
    std::cout <<  "distance in meters = " << 0.3048 * x << " m" << std::endl;
    return 0;
}