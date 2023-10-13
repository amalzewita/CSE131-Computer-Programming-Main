
#include <iostream>

int main()
{
    char x[1000] = "C is a general purpose computer programming language developed in 1972 by Dennis Ritchie at the Bell Telephone Laboratories for use with the UNIX operating system. Although C was designed for implementing system software, it is also widely used for developing portable application software. C is one of the most popular programming languages. It is widely used on many different software platforms, and there are few computer architectures for which a C compiler does not exist. C has greatly influenced many other popular programming languages, most notably C++, which originally began as an extension to C.";
    int y[26] = { 0 };
    
    for (int i = 0; i < 1000; i++) 
    {
        y[x[i] - 'a']++;
    } // end for loop

    // for loop that counts the letters 
    for (int i = 0; i < 26; i++) 
    {
        if (y[i] == 0)
        {
            continue;
        } // end neasted if loop 

        // prints the frequency of each letter 
        std::cout << "Counts of letter " << (char)(i + 'a') << ": " << y[i] << std::endl;

    } // end for loop
    
    return 0; // indicates that the program ended seccessfully 

} // end main function
