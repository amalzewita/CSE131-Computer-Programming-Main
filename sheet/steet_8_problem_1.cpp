
#include <iostream>

int main()
{
    const int rows = 10;
    const int cols = 50;
    char names[rows][cols];

    std::cout << "Enter 10 students names:" << std::endl;

    for (int i = 0; i < rows; i++) 
    {
        std::cin.getline(names[i], cols);
    } // end for loop

    std::cout << std::endl;
    std::cout << "The 10 students names you entered:" << std::endl;

    for (int i = 0; i <rows; i++)
    {
        std::cout << names[i] << std::endl;
    } // end for loop
    return 0;
} // end main function