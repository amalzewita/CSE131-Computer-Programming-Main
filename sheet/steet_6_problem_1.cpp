
#include <iostream>
#include <cstring>

int main()
{
    char x[1000];
    char z[1000];
    std::cout << "Enter a text: "; 
    std::cin.getline( x, 1000, '\n'); 
    strncpy (z, x,1);
    std::cout << z;
    for (int i = 0; i < strlen(x); i++)
    {
        if (x[i] == ' ' && x[i + 1] != ' ')
        std::cout << x[i + 1];
    } // end for loop
    std::cout <<std::endl;
    return 0;
} // end main function 
