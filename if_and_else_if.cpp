
#include <iostream>// <iostream> is used for input and output streams

// function main begins program execution 
int main() 
{
    int x; // number to be input by user
    
    std::cout << "Enter student grade: ";
    std::cin >> x ; // read an integer

    if ( x >= 90 )
    std::cout << "A";

    // use else if if you have many elses 
    else if ( x >= 80)
    std::cout << "B";

    else if ( x >= 70)
    std::cout << "C";

    else if ( x >= 60)
    std::cout << "D";

    // at the end of if-else if use only else 
    else 
    std::cout << "F";
}