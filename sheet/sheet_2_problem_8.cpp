
// baby calculator
#include <iostream>

int main ()
{
    double x , y; // input numbers 
    char c; // operation
    double ans;

    std::cout << "Choose one operation." << std::endl;
    std::cout << "Addition: +\nSubtraction: -\nMultiplication: X\nDivision: /\nAverage: A\nMaximum: >\nMinimum: <\n";
    std::cin >> c;
    std::cout << "Enter two numbers: \n";
    std::cin >> x >> y ;

    switch (c) 
    {
        // for adding operation
        case '+':
            std::cout << "= " << x + y << std::endl;
        break;

        // for subtracting operation
        case '-':
            std::cout << "= " << x - y << std::endl;
        break;

        // for multiplication operation 
        case 'X':
            std::cout << "= " << x * y << std::endl;
        break;

        // for dividing operation
        case '/':
            std::cout << "= " << x / y << std::endl;
        break;

        // for calculating average   
        case 'A':
            std::cout << "= " << ( x + y ) / 2 << std::endl;
        break;

        // for determining the maximum number
        case '>':
            std::cout << "= " << (( x > y ) ? x : y) << std::endl;
        break;

        // for determining the maximum number
        case '<':
            std::cout << "= " << (( x < y ) ? x : y) << std::endl;
        break;

        default:
        // If the operator is other than +, -, x, /, A, >, or < 
        //error message is shown
        std::cout << "ERROR 404" << std::endl;
        break;

    } // end switch 

    return 0; // indicates that the program ended seccessfully 

}// end function main