
#include <iostream>

// function mean begins program execution
int main()
{
    int x , y = 6;
    // the initialization will be before the while
    // while ( condition ) 
    // the incremental will be after the body of the while loop
    // adding more than one initialization you use ,
    x = 1; //initialization
    while ( x < 10) // condition
    {
        y++; // the while body
        x++; // incremental
    } // end while 

    std::cout << x << y ;

} // end function main