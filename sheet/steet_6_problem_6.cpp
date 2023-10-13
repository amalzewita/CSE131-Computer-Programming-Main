
#include <iostream>
#include <cstring>

int main()
{
    char x[1000];
    char y[1000];
    int i = 0, j = 0;
    std::cout << "Enter your first text: "; 
    std::cin.getline( x, 1000, '\n');
    std::cout << "Enter your second text: ";  
    std::cin.getline( y, 1000, '\n'); 
    while (x[i] != '\0') 
    {
        i++;
    } //  end while loop 
    while (y[j] != '\0') 
    {
        x[i] = y[j];
        i++;
        j++;
    } // end while while  
    x[i] = '\0';
    std::cout << "The concatenation of the first and second texts: " << std::endl;
    std::cout << x << std::endl;
    return 0;
}