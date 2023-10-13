
#include <iostream>

int main()
{
    int a[20][20];
    int x, leftSum = 0, rightSum = 0;
    int i, j; 

    std::cout << "Enter a number for both rows and columns = ";
    std::cin >> x; // takes number of rows and colums from the user
    std::cout << "Enter a square matrix element = " << std::endl; 

    // for loop to takes first matrix from the user
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < x; j++) 
        {
            std::cin >> a[i][j];
        } // end nested for loop
    } // end for loop

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < x; j++) 
        {
            if (i == j)
        {
            leftSum += a[i][j];
        }
        if ((i + j) == x - 1)
        {
        rightSum += a[i][j];
        }
        } // end nested for loop
    } // end for loop

    std::cout << "Sum of right diagonal = " << rightSum << std::endl;
    std::cout << "Sum of left diagonal = " << leftSum << std::endl;
    return 0; // indicates that the program ended seccessfully
} // end main function