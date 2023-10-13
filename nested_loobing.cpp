
#include <iostream>

// function mean begins program execution
int main()
{
    int a , h;

    for (a = 0 ; a < 10 ; ++a) 
    {
        // for loop inside a for loop is called nested looping
        for (h = 0 ; h < a ; h++)
        std::cout << a * h;

        std::cout << "\n"; // body of the outer for loop

    } // end for
} // end function main