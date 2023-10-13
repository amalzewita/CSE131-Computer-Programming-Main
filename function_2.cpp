/*
#include <iostream>

int square (int); // function prototype

int main()
{ 
    // loop 10 times and calculate and output
    for (int x = 1; x <= 10; x++)
        std::cout << square ( x ) << " " << std::endl; // square pf x each time
    return 0; 
} // end function main 

// square function definition rturns square of an integer
int square (int y) // y is a copy of argument to funcion 
{
    return y * y; // returns square of y as an int  
} // end function square 
*/


#include <iostream>

// square function definition rturns square of an integer
int square (int y) // y is a copy of argument to funcion 
{
    return y * y; // returns square of y as an int  
} // end function square 

int main()
{ 
    // loop 10 times and calculate and output
    for (int x = 1; x <= 10; x++)
        std::cout << square ( x ) << " " << std::endl; // square pf x each time
    return 0; 
} // end function main 

