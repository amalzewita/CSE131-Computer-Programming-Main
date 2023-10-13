
#include <iostream>

int main()
{
    int num1, num2, num3, replacer;
    std::cout << "Enter 3 integers: ";
    std::cin >> num1 >> num2 >> num3;
    if (num1 > num2)
    {
        replacer = num1; 
        num1 = num2; 
        num2 = replacer;
    }
    if (num1 > num3)
    {
        replacer = num1; 
        num1 = num3; 
        num3 = replacer;
    }
    if (num2 > num3)
    {
        replacer = num2; 
        num2 = num3; 
        num3 = replacer;
    }
    std::cout << "the sorted numbers: " << num1 << " <= " << num2 
    << " <= " << num3 << std::endl;
    return 0;
}

