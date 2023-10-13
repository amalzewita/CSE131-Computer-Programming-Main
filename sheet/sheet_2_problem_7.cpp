
// amount of sales
#include <iostream>

int main ()
{
    double m = 5000; // salary per month
    double y = 60000; // salary per year 
    double g = 80000; // goal
    double cm = ( g - y) / 12; // commission per month
    double aos; // amount of sales

    std::cout << "Amount of commission by month: " << cm <<std::endl; // prints out commission per month

    // 8% commission Rate
    if ( cm >= (1 * 0.08) && cm <= (5000 * 0.08) ) 
    {
        aos = (100 * cm / 8 );
    } // end of if loop

    // 10% commission Rate
    else if (cm >= (50001 * 0.1) && cm <= 10000 * 0.1 )
    {
        aos = (100 * cm / 10 );
    } // end of else if loop

    // 12% commission Rate
    else 
    {
        aos = (100 * cm / 12 ); 
    } // end of else loop

    std::cout << "Amount of sales: " << aos << std::endl; // prints out amount of sales

    return 0; // indicates that the program ended seccessfully 

} // end function main