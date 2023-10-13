
#include <iostream>

double sum()
{
    double sum = 0;
    int numberOfTerms = 0;
    int i = 1;
    
    // while loop counts the number of terms
    while (sum <= 2)
    {
        sum += 1.0 / i;
        i++;
        numberOfTerms++;
    } // end while

    return numberOfTerms; // returns to the main function the value of numberOfTerms

} // end sum function

int main()
{
    std::cout << "Number of terms = " << sum() << std::endl; // prints the number of terms 

    return 0; // indicates that the program ended seccessfully 

} // end main function 