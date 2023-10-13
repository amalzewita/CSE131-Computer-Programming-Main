
#include <iostream>
#include <cstdlib> // contains functions protoypes for rand and srand
#include <ctime> // contain protoypes for function time 

int rollDice (void); // function protoypes

int main()
{
    // enumeration constants represent game status 
    enum Status ( COUNTINE, WON, LOST);
    int sum, myPoint;
    Status gameSataus; // can contain ountin, WON, or LOST

    // randomize random number generator using current time
    srand ( time( 0 ) );
    sum = rollDice(); // First roll of the dice

    // determine game status and point based on sum of dice
    switch ( sum )
    {
        // win on first roll
        case 7:
        case 11:
            gameSataus = WON;
            break;

        // lose on first roll
        case 2:
        case 3:
        case 12:
            gameSataus = LOST;
            break;
        
        // remember point 
        default:
            gameSataus = COUNTINE;
            myPoint = sum;
            std::cout << "Point: " << myPoint << std::endl;
            break;

    } // end switch  

    // while game not complete
    while ( gameSataus == COUNTINE)
    {
        sum = rollDice(); // roll dice again 

        if (sum == myPoint)
            gameSataus = WON; // win by making point 
        else 
            if (sum == 7)
            gameSataus = LOST // lose by rolling 7
        
    } // end while 

    if ( gameSataus == WON)
        std::cout << "player wins" << std::endl;
    else 
        std::cout << "player loses" << std::endl;

    return 0;

} // end main 

// rol dice, calculate sum and display results 
int rollDice (void) // function protoypes
{
    int die1, die2, workSum;

    die1 = 1 + rand() % 6; // pick Random die1 value 
    die2 = 1 + rand() % 6; // pick Random die2 value 
    workSum = die1 + die2; // sum die1 and die2

    // display results of this roll
    std::cout << "player rolled " << die1 << " + " << die2 << " = " << workSum << std::endl;
    return workSum; // return sum of dice 
} // end rollDice function 
