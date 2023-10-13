
#include <iostream>

// function mean begins program execution
int main()
{
    int x , y = 6;

    // for ( initialization ; condition ; incremental)
    // adding more than one initialization you use ,
    // you can leave the initialization empty but declare the int value like the y 
    // you can leave the contion empty but to end the loop you must add break
    for (x = 1; x < 10 ; x++) 
    {
        if (x == 7)
        break; // breaking thr loop to countine till x=10

        y++; // the body of the for will keep implementing 
        //untill the conition is false.. x < 10

    } // end for 

    std::cout << x << y ;

} // end function main