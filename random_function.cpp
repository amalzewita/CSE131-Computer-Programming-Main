
#include <iostream>
#include <iomanip>
#include <cstdlib> // contains functions protoypes for rand and srand

int main ()
{
    unsigned seed;

    std::cout << "Enter seed: ";
    std::cin >> seed;

    srand (seed); // seed random number generator 

    // loop 10 times
    for( int counter =1; counter <= 10; counter++)
    {
        // pick random number from 1 to 6 and output it
        std::cout << std::setw( 10 ) << ( 1 + rand() % 6);

        // if counter divisible by 5, begin new line of output
        if ( counter % 5 ==0 )
            std::cout << std::endl; 
    } // end for 

    return 0;
}// end main function 

// number = shiftingValue + rand () % scalingFactor 
// shiftingValue == first number in desired range 
// scalingFactor == width of desired range 