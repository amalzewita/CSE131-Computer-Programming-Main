
#include <iostream>

int count()
{
    char c;
    int i = 0;
    int count = 0 ;
    
    std::cout << "Enter sequence of characters: ";

    while (c != '.' && i < 100)
    {
        std::cin >> c;
        if (c >= 'A' && c <= 'Z')
        {
            count++;
        } // end if loop
        i++;
    } // end while loop

    std::cout << "The number of capital letters entered is ";
    return count;
} // end cout function

int main()
{
    std::cout << count() << std::endl;
} // end main function