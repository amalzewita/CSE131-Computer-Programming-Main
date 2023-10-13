
#include <iostream> // <iostream> is used for input and output streams

// function main begins program execution 
int main() 
{
    int x; // first number to be input by user
    int y; // second number to be input by user
    int sum; // variable in which some would be stored

    std::cout << "Enter first integer:\n"; // prompt
    std::cin >> x; // read an integer 

    std::cout << "Enter second integer:\n"; // prompt
    std::cin >> y; // read an integer 

    // assign result to sum
    //you can make a shortcut and add the next line in the final cout
    sum = x + y;

    // print sum
    std::cout << "sum = " << sum << std::endl;

    return 0; //indicates that the program ended seccessfully 
} // end function main

