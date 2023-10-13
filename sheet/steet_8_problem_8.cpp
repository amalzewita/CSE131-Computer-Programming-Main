
#include <iostream>
#include <iomanip>
#include <ctime>

int main ()
{
    int a[100][100];
    int count = 0;

    srand (time (0)); // prints different values with the time it prints value according to the laptop time 

    // 2 for loops to print the random 100x100 2D array
    for (int i = 1; i <= 100; i++)
    {
        for (int j = 1; j <= 100; j++) 
        {
            a[i][j] = (1 + (rand() % 1000));
            std::cout << std::setw(5) << std::left << a[i][j];
        } // end nested for loop
    } // end for loop

    std::cout << std::endl;

    // 2 for loops and if coundition to count 
    for (int i = 2; i <= 99; i++)
    {
        for (int j = 2; j <= 99; j++) 
        {
            if (a[i][j] > a[i - 1][j - 1] && a[i][j] > a[i][j - 1] && 
                a[i][j] > a[i + 1][j - 1] && a[i][j] > a[i - 1][j] && 
                a[i][j] > a[i - 1][j + 1] && a[i][j] > a[i + 1][j] && 
                a[i][j] > a[i + 1][j + 1] && a[i][j] > a[i][j + 1])
            {
                count ++;
            } // end if coundtion 
        } // end nested for loop
    } // end for loop

    std::cout << "The count of the numbers that are surrounded by numbers less its value  = " << count << std::endl;

    return 0; // indicates that the program ended seccessfully
}  // end main function