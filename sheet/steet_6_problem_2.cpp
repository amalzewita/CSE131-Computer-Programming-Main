
#include <iostream>

int main()
{
    char x[1000];

    std::cout << "Enter a lower case charcter to get its upper case: "; 
    std::cin.getline(x, 1000, '\n'); 

    // for loop that convert from lower caser to upper case
    for (int i = 0; i < strlen(x); i++)
    {
        x[i] = x[i] - ('x' - 'X'); // the equation that converts 
        
        std::cout << "The upper case of your lower character: " << x[i];
    } // end for loop

    std::cout << std::endl;

    return 0; // indicates that the program ended seccessfully 

} // end main function