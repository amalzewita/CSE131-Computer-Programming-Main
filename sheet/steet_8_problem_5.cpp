
#include <iostream>
#include <iomanip>

int main()
{
    int a[100][100], b[100][100], mul[100][100];
    int numberOfRow, numberOfColumn;
    int i, j; 

    std::cout << "Enter the number of row = ";
    std::cin >> numberOfRow; // takes number of rows from the user
    std::cout << "Enter the number of column = ";
    std::cin >> numberOfColumn; // takes number of rows from the columns
    std::cout << "Enter the first matrix element = " << std::endl; 

    // for loop to takes first matrix from the user
    for (i = 0; i < numberOfRow; i++)
    {
        for (j = 0; j < numberOfColumn; j++) 
        {
            std::cin >> a[i][j];
        } // end nested for loop
    } // end for loop

    std::cout << "enter the second matrix element = " << std::endl; 

    // for loop to takes second matrix from the user
    for (i = 0; i < numberOfRow; i++)
    {
        for (j = 0; j < numberOfColumn; j++) 
        {
            std::cin >> b[i][j];
        } // end nested for loop
    } // end for loop

    std::cout << "multiplied matrix = " << std::endl;

    // for loop to multiply the 2 matrices
    for (i = 0; i <numberOfRow; i++)
    {
        for (j = 0; j < numberOfColumn; j++)
        {
                mul[i][j] = a[i][j] * b[i][j];
        } // end nested for loop
    } // end for loop
    
    // for loop to print out the result
    for (i = 0; i < numberOfRow; i++)
    {
        for (j = 0; j < numberOfColumn; j++)
        {
            std::cout << std::setw(5) << std::left << mul[i][j];
        } // end for loop

        std::cout << std::endl;

    }// end nested for loop

    std::cout << "Transposing matrix A = " << std::endl;

    for (i = 0; i < numberOfRow; i++)
    {
        for (j = 0; j < numberOfColumn; j++)
        {
            std::cout << std::setw(5) << std::left << a[j][i];
        } // end for loop

        std::cout << std::endl;

    }// end nested for loop

    std::cout << "Transposing matrix B = " << std::endl;

    for (i = 0; i < numberOfRow; i++)
    {
        for (j = 0; j < numberOfColumn; j++)
        {
            std::cout << std::setw(5) << std::left << b[j][i];
        } // end for loop

        std::cout << std::endl;

    }// end nested for loop

    std::cout << "Transposing matrix mul = " << std::endl;

    for (i = 0; i < numberOfRow; i++)
    {
        for (j = 0; j < numberOfColumn; j++)
        {
            std::cout << std::setw(5) << std::left << mul[j][i];
        } // end for loop

        std::cout << std::endl;

    }// end nested for loop

    return 0; // indicates that the program ended seccessfully
} // end main function