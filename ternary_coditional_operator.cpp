
#include <iostream>// <iostream> is used for input and output streams

// function main begins program execution 
int main() 
{
    int x; // number to be input by user
    
    std::cout << "Enter student grade: ";
    std::cin >> x ; // read an integer

    // ?: is the ternary condition operator 
    // you use it insted of if-else 
    // ? is for if and : is for else 
    // but if you have many elses you cant use ternary condition operator s
    std::cout << ( x >= 60 ? "Passed" : "Failed");

}