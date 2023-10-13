
#include <iostream>

int main()
{
    char charSpace;
    char c;
    int charCount = 0;
    int wordCount = 1;
    bool noSpace = false;

    // getchar is like cin but counts the spaces
    std::cout << "Enter any characters or words..." << std::endl;
    charSpace = getchar();
    c = charSpace;
    charSpace = getchar();

    // \n to terminate the code after entering enter 
    while (charSpace != '\n')
    {
        c = charSpace;

        if (charSpace != ' ')
        {
            noSpace = true;
        } // end if

        charCount++;
        charSpace = getchar();

        if (charSpace == ' ' && c != ' ')
        {
            wordCount++;
        } // end if
    } // end while

    if (wordCount == 1 && !noSpace) 
    {
        wordCount = 0;
    } // end if

    // for adding a space at the end 
    if (c == ' ')
    {
        wordCount--;
    } // end if

    std::cout << "Character counts: " << charCount << std::endl;
    std::cout << "Words counts: " << wordCount << std::endl;
    return 0;
} // end main 

