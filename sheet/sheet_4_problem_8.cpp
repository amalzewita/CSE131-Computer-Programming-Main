
#include <iostream>

char toLower(char upperCase)
{
    char result;
    result = upperCase + 32;
    return result;
} // end toLower function

char toUpper(char lowerCase)
{
    char result;
    result = lowerCase - 32;
    return result;
} //  end toUpper function

int main()
{
    char lowerCase, upperCase;
    std::cout << "Enter a lower case charcter to get its upper case: ";
    std::cin >> lowerCase;
    std::cout << "Enter a upper case charcter to get its lower case: ";
    std::cin >> upperCase;
    std::cout << "The upper case of your lower character is " << toUpper(lowerCase) << std::endl;
    std::cout << "The lower case of your upper character is " << toLower(upperCase) << std::endl;
    return 0;  
} // end main function
