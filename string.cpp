
#include <iostream>
#include <iomanip>
#include <cstring>

int main()
{
    char *string1 = "abcdefghijklmnopqrstuvwxyz";
    char *string2 = "four";
    char *string3 = "Boston";
    std::cout
    << "The length of \"" << string1
    << "\" is " << strlen( string1 )
    << "\nThe length of \"" << string2
    << "\" is " << strlen( string2 )
    << "\nThe length of \"" << string3
    << "\" is " << strlen( string3 ) << std::endl;
    return 0; 

}