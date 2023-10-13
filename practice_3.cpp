
// drawing stars
#include <iostream>

int main()
{
    for ( int i = 0 ; i < 5 ; i++ ) // rows
    {
        for ( int j = 0 ; j <= i ; j++ ) //columns
        std::cout << "*" << std::endl;
    }
    return 0;
}