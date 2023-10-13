
// Counting letter grades
#include <iostream>

// function mean begins program execution
int main()
{
    int x = 0;
    int y = 1;
    int z = 2; 

    switch (z + 5)
    {
        case 2:
        y++;

        case 5:
        x = y + 8; // this will implement for case 2 and case 5

        case 7:
        x = y + 9; // there's no break so the code won't end
        // will apply case 10

        case 10:
        y = x + 9;
        break; // exit switch

        default:
        x--; // won't be applied beacuse of the break 
    
    } // end switch 

    // output summary of results 
    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << z << '\n';

    return 0; // indicates that the program ended seccessfully 

} // end function main