
// Counting letter grades
#include <iostream>
#include <cmath>
#include <string>
#include <fstream>

// function mean begins program execution
int main()
{
    char grade;
    int aCount = 0 , bCount = 0 , cCount = 0 , dCount = 0 , fCount = 0;

    std::cout << "Please enter file name to read from--->";

    // loop until use types end-of-file key squence
    while ( ( grade = std::cin.get() ) != EOF ) {

        // determine which grade was input 
        switch (grade) { // switch structure nested in while 

            case 'A' :
            case 'a' :
            ++aCount;
            break; // exit switch 

            case 'B' :
            case 'b' :
            ++bCount;
            break; // exit switch

            case 'C' :
            case 'c' :
            ++cCount;
            break; // exit switch

            case 'D' :
            case 'd' :
            ++dCount;
            break; // exit switch

            case 'F' :
            case 'f' :
            ++fCount;
            break; // exit switch

            case '\n':
            case ' ':
            break; // exit switch

            default:
            break;

        } // end switch 

    } // end while 

    // output summary of results 
    std::cout << "\n\nTotals for each grade letter are: "
              << "\nA: " << aCount 
              << "\nB: " << bCount 
              << "\nC: " << cCount 
              << "\nD: " << dCount 
              << "\nF: " << fCount 
              << std::endl;

    return 0; // indicates that the program ended seccessfully 

} // end function main