
#include <iostream>

double PI()
{
    double PI = 0;
    int numberOfTerms = 0;
    int i = 1;
    
    while (PI < 3.14159) 
    { 
        PI += 4 * ((double) pow(-1, i + 1.0) / (2 * i - 1)); 
        i++;
        numberOfTerms++;
    } // end while loop
    return numberOfTerms;
} // end double function

int main()
{
    std::cout << "Number of terms = " << PI() << std::endl;
    return 0;
} // end main function 
