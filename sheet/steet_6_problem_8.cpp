
#include <iostream>

int main()
{
    char x[1000] = "C is a general purpose computer programming language developed in 1972 by Dennis Ritchie at the Bell Telephone Laboratories for use with the UNIX operating system. Although C was designed for implementing system software, it is also widely used for developing portable application software. C is one of the most popular programming languages. It is widely used on many different software platforms, and there are few computer architectures for which a C compiler does not exist. C has greatly influenced many other popular programming languages, most notably C++, which originally began as an extension to C.";
    int count;
    
    // for loop that counts the word programming
    for (int i = 0; i < strlen(x); i++)
    {
        if (x[i] == 'p' && x[i+1] == 'r')
        {
            count++;
        } // end of if loop
    } // end of for loop

    // prints the counts of the word
    std::cout << "The count of the word (programming) = " << count << std::endl;

    return 0; // indicates that the program ended seccessfully 

} // end main function