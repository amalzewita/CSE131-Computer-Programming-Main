
#include <iostream>
#include <iomanip>

int main()
{
    int N[100][100], M[100][100], A[100][100];
    int i, j, x, diagonalProduct = 1, nonzeroElement = 0; 

    std::cout << "Enter a number for both rows and columns = ";
    std::cin >> x; // takes number of rows and colums from the user
    std::cout << "Enter the first matrix element = " << std::endl; 

    // for loop to takes first matrix from the user
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < x; j++) 
        {
            std::cin >> N[i][j];
        } // end nested for loop
    } // end for loop

    std::cout << "enter the second matrix element = " << std::endl; 

    // for loop to takes second matrix from the user
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < x; j++) 
        {
            std::cin >> M[i][j];
        } // end nested for loop
    } // end for loop

    std::cout << "multiplied matrix = " << std::endl;

    // for loop to mul the 2 matrices
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            int sum = 0;
            for (int k = 0; k < x; k++)
            {
                sum += N[i][k] * M[k][j];
            } //  end nested for loop
            A[i][j] = sum;
            std::cout << std::setw(5) << std::left << sum;
        } // end nested for loop
        std::cout << std::endl;
    } // end for loop

    // counts the number of nonzero elements
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < x; j++) 
        {
            if (A[i][j] != 0)
            {
                nonzeroElement++;
            } // end nested if loop 
        } // end nested for loop 
    } // end for loop 
    
    // gets the product of the diagonal
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < x; j++) 
        {
            if (i == j)
            {
                diagonalProduct *= A[i][j];
            } // end nested if loop 
        } // end nested for loop 
    } // end for loop 

    std::cout << "Non-Zero Element = " << nonzeroElement << std::endl; // prints nonzero elements
    std::cout << "Diagonal Product = " << diagonalProduct << std::endl; // prints product of the diagonal
    
    return 0; // indicates that the program ended seccessfully
} // end main function 