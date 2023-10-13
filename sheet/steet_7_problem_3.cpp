
#include <iostream>

int fibonacci(int x) 
{
    if(x == 1 || x == 0) 
    {
        return(x); // returns to the main function value of x
    } // end if loop

   else 
    {
        return (fibonacci(x - 1) + fibonacci(x - 2)); // returns to the main function value of the upcoming number
    } // end else 

} // end of fibonacci function

int main ()
{
    std::cout << "Fibonnaci Series :" << std::endl;

    // for loop that prints the Fibonnaci Series
    for(int i = 1; i <= 45; i++) 
    {
        std::cout << fibonacci(i) << std::endl;
    } // end for loop

   return 0; // indicates that the program ended seccessfully

} // end main function
