
// code for this equation 
// y = x - x^3 / (2)! + x^5 / (3)! - x^7/(4)! + ...
#include <iostream>

// function mean begins program execution
int main()
{
    double x , y = 0 , N , i ,  j; 
    double term = x;
    int sign = 1;
    y = x; 
    std::cin >> x >> N;

    for ( i = 2 ; i <= N ; i++ )
    {
        term = term * x * x / i;
        y = y + sign * term; 
        sign *= -1 ; 

    } // end for 

    std::cout << y;

} // end function main