
//////////46//////////

#include <iostream>

int main()
{
    char x[1000];
    int wordCount = 1;
    bool noSpace = false;
    std::cout << "Enter any characters or words..." << std::endl;
    std::cin.getline( x, 1000, '\n'); 
    for (int i = 0; i < strlen(x); i++)
    {
        if (x[i] == ' ' && x[i + 1] != ' ')
            wordCount++;
    } // end for loop
    std::cout << "Words counts: " << wordCount << std::endl;
} // end main function
