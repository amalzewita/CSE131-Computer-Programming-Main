
#include<iostream>
#include <cstring>
 
int countVowels(char x[], int i)
{
    static int count = 0; // static int to not start from zero again

    // if loop for if there is no value or letters at all well return
    if (i < 0)
    {
        return count;
    } // end if loop

    // if loop for counting the vowel letters 
    if (x[i] == 'a' || x[i] == 'e' || x[i] == 'i' || x[i] == 'o' || x[i] == 'u' || x[i] == 'A' || x[i] == 'E' || x[i] == 'I' || x[i] == 'O' || x[i] == 'U') 
    {   
        count++;
    } // enf if loop

    return countVowels(x, i - 1); // returns the number of vowels 

} //  end of countVowel function

int main()
{
    char x[1000];

    std::cout << "Enter a text: "; 
    std::cin.getline( x, 1000, '\n'); // take input from the user

    for (int i = 0; i < strlen(x); i++) 
    {
        if (x[i] >= 'A' && x[i] <= 'Z') 
        {
            x[i] += ('a' - 'A');
        } // end if loop
    } // end for loop

    std::cout << "The count of the vowel letters = "  <<  countVowels(x, strlen(x)) << std::endl;

    return 0; // indicates that the program ended seccessfully

} // end main function 
