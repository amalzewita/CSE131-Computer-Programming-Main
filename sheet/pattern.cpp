/*
1.A 
2.B B 
3.C C C 
4.D D D D 
5.E E E E E 
6.F F F F F F 
7.G G G G G G G 
8.H H H H H H H H 

#include <iostream>

int main()
{
    char c, alpha = 'A';

    std::cout << "Enter the capital letter to print in the last row: ";
    std::cin >> c;

    for(int i = 1; i <= (c - 'A' + 1); i++)
    {
        std::cout << i << "." ;
        for(int j = 1; j <= i; ++j)
        {
            std::cout << alpha << " ";
        } //  end nested for loop 
        alpha++;
        std::cout << std::endl;
    } // end for loop
    return 0;
} // end main function 


* 
* * 
* * * 
* * * * 
* * * * * 
* * * * * 
* * * * 
* * * 
* * 
* 

#include <iostream>

int main()
{
    int rows;

    std::cout << "Enter number of rows: ";
    std::cin >> rows;

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            std::cout << "* ";
        }
        std::cout << "\n";
    }

    for(int i = 1; i <= rows; i++)
    {
        for(int j = rows; j >= i; j--)
        {
            std::cout << "* ";
        }
        std::cout << "\n";
    }

    return 0;
}

#include <iostream>

int main()
{
    int rows;

    std::cout << "Enter number of rows: ";
    std::cin >> rows;

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }

    for(int i = rows; i >= 1; --i)
    {
        for(int j = 1; j <= i; ++j)
        {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

#include <iostream>

#include <iostream>

int main()
{
    int rows;

    std::cout <<"Enter number of rows: ";
    std::cin >> rows;

    for(int i = 1, k = 0; i <= rows; i++, k = 0)
    {
        for(int j = 1; j <= rows-i; j++)
        {
            std::cout <<"  ";
        }

        while(k != 2 * i - 1)
        {
            std::cout << "* ";
            k++;
        }
        std::cout << std::endl;
    }    
    return 0;
}


#include <iostream>

int main()
{
    int rows;

    std::cout << "Enter number of rows: ";
    std::cin >> rows;

    for(int i = 1; i < rows; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            std::cout << "* ";
        }
        std::cout << "\n";
    }

    for(int i = 1; i <= rows; i++)
    {
        for(int j = rows; j >= i; j--)
        {
            std::cout << "* ";
        }
        std::cout << "\n";
    }

    return 0;
}


#include <iostream>
using namespace std;

int main()
{
    int i, rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(i = 0; i < rows; i++)
    {
        for(int j = i; j < rows - 1; j++)
            cout << " ";
        for(int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}
*/
