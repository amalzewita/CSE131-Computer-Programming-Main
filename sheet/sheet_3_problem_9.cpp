
#include <iostream>

int main ()
{
    float A = 52000000; // starting A population 
    float B = 85000000; // starting B population
    float growthA = 0.06; // increasing rate of A population  
    float growthB = 0.04; // increasing rate of A population  
    int numberOfYears;
    
    // while loop show when A population exceeds B population
    while (A < B)
    {
        numberOfYears++;
        A = A + growthA * A;
        B = B + growthB * B;

        std::cout << "Year number " << numberOfYears << std::endl; // prints the number of years 
        std::cout << "A = " << A << std::endl; // prints the number of A population
        std::cout << "B = " << B << std::endl; // prints the number of B population
    } // end while

    std::cout << "'A' population exceeded 'B' population in " << numberOfYears << " years." << std::endl;

    return 0; // indicates that the program ended seccessfully 

} // end main