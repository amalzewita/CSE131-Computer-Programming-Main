
#include <iostream>

int main()
{
    char x[1000];
    int count = 0;
    std::cout << "Enter a text: "; 
    std::cin.getline( x, 1000, '\n'); 
    for (int i = 0; i < strlen(x); i++)
    {
        count++;
        if (x[i] == ' ' && x[i + 1] != ' ')
            count--;
    } // end for loop
    std::cout << "The count of letters in your text = " << count << std::endl;
}  // end main function 