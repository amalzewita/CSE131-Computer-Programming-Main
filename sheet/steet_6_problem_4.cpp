
#include <iostream>

int main()
{
    char x[1000];
    int countA = 0, countE = 0, countI = 0, countO = 0, countU = 0;
    std::cout << "Enter a text: "; 
    std::cin.getline( x, 1000, '\n'); 
    for (int i = 0; i < strlen(x); i++)
    {
        if (x[i] == 'A' || x[i] == 'a')
        {
            countA++;
        } // end neasted if loop of A
        
        if (x[i] == 'E' || x[i] == 'e')
        {
            countE++;
        } // end neasted if loop of E

        if (x[i] == 'I' || x[i] == 'i')
        {
            countI++;
        } // end neasted if loop of I

        if (x[i] == 'O' || x[i] == 'o')
        {
            countO++;
        } // end neasted if loop of O

        if (x[i] == 'U' || x[i] == 'u')
        {
            countU++;
        } // end neasted if loop of U
    } // end for loop
    std::cout << "The count of the vowel A = " << countA << std::endl;
    std::cout << "The count of the vowel E = " << countE << std::endl;
    std::cout << "The count of the vowel I = " << countI << std::endl;
    std::cout << "The count of the vowel O = " << countO << std::endl;
    std::cout << "The count of the vowel U = " << countU << std::endl;
}