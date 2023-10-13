
#include <iostream>

int digit(int n, int k)
{
    int result, count = 1;

    if (n < 0)
    {
        std::cout << '-';
        n *= -1;
    } // end if loop

    do 
    {
        result = n % 10;
        n /= 10;
        count++;
    } // end of do while loop
    while (k >= count);

    return result;
} // end digit function

int main()
{
    int n, k, reversedNumber;
    std::cout << "Enter n then k: ";
    std::cin >> n >> k;
    std::cout << "k.th digit: " << digit(n, k) << std::endl;
    return 0;
} // end main function

/*
#include <iostream>

int countDigits(int x)
{
    int count = 1;
    while (x % 10 != 0)
    {
        count++;
        x /= 10;
    } // end while 
    return count;
} // end countDigits function

int digit(int n, int k)
{
    return (n / (int)pow(10, countDigits(n) - k - 1)) % 10;
} // end digit function

int main()
{
    int n, k, reversedNumber;
    std::cout << "Enter n then k: ";
    std::cin >> n >> k;
    std::cout << "k.th digit: " << digit(n, k) << std::endl;
    return 0;
} // end main function
*/