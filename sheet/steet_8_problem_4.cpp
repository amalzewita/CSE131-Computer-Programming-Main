
#include <iostream>
#include <iomanip>

void multiplyM(int N[3][3], int M[3][3], int mul[3][3])
{
    // for loop to mul the 2 matrices
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int sum = 0;
            for (int k = 0; k < 3; k++)
            {
                sum += N[i][k] * M[k][j];
            } //  end nested for loop
            mul[i][j] = sum;
        } // end nested for loop
    } // end for loop
} // end multiplyM function

int main() 
{
    int N[3][3] = { { 5, 9, 8 }, { 3, 5, 4 }, { 7, 2, 0 } };
    int M[3][3] = { { 7, 3, 4 }, { 1, 2, 0 }, { 3, 1, 3 } };
    int mul[3][3];
    int i, j; 

    multiplyM (N, M, mul);

    std::cout << "multiplied matrix = " << std::endl;
    
    // for loop to print out the result
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            std::cout << std::setw(5) << std::left << mul[i][j];
        } // end for loop

        std::cout << std::endl;

    }// end nested for loop

    return 0; // indicates that the program ended seccessfully
} // end main function 