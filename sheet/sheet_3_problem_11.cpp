#include <iostream>

int main()
{
    int numRows = 7;
    int numColumns = 7;
    for ( int i = 0; i <= numRows / 2; i++ )
    {
        for ( int j = 0; j < numColumns; j++ )
        {
            if (i + j >= numColumns / 2 && j - i <= numColumns / 2)
                std::cout << "*";
            else
                std::cout << " ";
        } // end nested for
        std::cout << std::endl;
    } // end for 
    
    for ( int i = (numRows / 2) + 1; i < numRows; i++ )
    {
        for ( int j = 0; j < numColumns; j++ )
        {
            if (i - j <= numColumns / 2 && j + i <= 3 * (numColumns / 2))
                std::cout << "*";
            else
                std::cout << " ";
        } // end nested for
        std::cout << std::endl;
    } // end for

    return 0;
}
